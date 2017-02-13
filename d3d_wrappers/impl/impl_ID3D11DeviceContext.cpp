#include "stdafx.h"
#include "../wrappers.h"

#include "../base/base_ID3D11DeviceContext.h"
#include <chrono>

namespace
{
}

struct impl_ID3D11DeviceContext
    : base_ID3D11DeviceContext
{
    typedef base_ID3D11DeviceContext base_type;
    
    explicit impl_ID3D11DeviceContext(ID3D11DeviceContext *impl)
        : base_ID3D11DeviceContext(impl)
        , start_time_(std::chrono::system_clock::now())
    {
    }
    
    HRESULT STDMETHODCALLTYPE Map(ID3D11Resource* pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE* pMappedResource) override
    {
        log_method("ID3D11DeviceContext", "Map");
        pResource = unwrap(pResource);

        update_map_stats(pResource, MapType, pMappedResource);

        auto result_ = impl()->Map(pResource, Subresource, MapType, MapFlags, pMappedResource);

        if (pResource)
        {
            map_data_t map_data;
            map_data.ptr = reinterpret_cast<uint8_t const *>(pMappedResource->pData);
            map_data.map_type = MapType;
            maps_map_[pResource] = map_data;
        }
    
        return result_;
    }

    void STDMETHODCALLTYPE Unmap(ID3D11Resource* pResource, UINT Subresource) override
    {
        log_method("ID3D11DeviceContext", "Unmap");
        pResource = unwrap(pResource);

        auto it = maps_map_.find(pResource);
        if (it != maps_map_.end())
        {
            process_unmap(it->first, it->second);
            maps_map_.erase(it);
        }

        impl()->Unmap(pResource, Subresource);
    }

    void STDMETHODCALLTYPE OMSetRenderTargetsAndUnorderedAccessViews(UINT NumRTVs, ID3D11RenderTargetView* const* ppRenderTargetViews, ID3D11DepthStencilView* pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView* const* ppUnorderedAccessViews, UINT const* pUAVInitialCounts) override
    {
        log_method("ID3D11DeviceContext", "OMSetRenderTargetsAndUnorderedAccessViews");
    
        auto RealNumRTVs = NumRTVs;
        if (NumRTVs == D3D11_KEEP_RENDER_TARGETS_AND_DEPTH_STENCIL)
            RealNumRTVs = 0;
        
        auto ppRenderTargetViews_unwrapped = unwrap_array(ppRenderTargetViews, RealNumRTVs); ppRenderTargetViews = ppRenderTargetViews_unwrapped.data();
        pDepthStencilView = unwrap(pDepthStencilView);
        auto ppUnorderedAccessViews_unwrapped = unwrap_array(ppUnorderedAccessViews, NumUAVs); ppUnorderedAccessViews = ppUnorderedAccessViews_unwrapped.data();
        impl()->OMSetRenderTargetsAndUnorderedAccessViews(NumRTVs, ppRenderTargetViews, pDepthStencilView, UAVStartSlot, NumUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
    }

private:
    void update_map_stats(ID3D11Resource* res, D3D11_MAP map_type, D3D11_MAPPED_SUBRESOURCE* mapped_res)
    {                                               
        D3D11_RESOURCE_DIMENSION type;
        res->GetType(&type);   

        if (type == D3D11_RESOURCE_DIMENSION_BUFFER && map_type != D3D11_MAP_READ)
        {
            auto buf = static_cast<ID3D11Buffer *>(res);
            D3D11_BUFFER_DESC desc;
            buf->GetDesc(&desc);


            auto old_total_bytes = total_bytes_;
            total_bytes_ += desc.ByteWidth;

            ++total_buffers_;

            const uint64_t each = 1 * 1024 * 1024 * 1024;
            auto total_mb = total_bytes_ / 1024 / 1024;

            if (old_total_bytes / each != total_bytes_ / each)
            {
                auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now() - start_time_).count();
                double ratio = total_mb / (ms * 0.001);

                double avg = total_bytes_ / double(total_buffers_);

                std::stringstream ss;
                ss << "Total MB mapped: " << total_mb << "; " << ratio << " mb/sec; avg size: " << avg;
                log_message(ss.str());
            }
        }
    }

    void update_map_stats_1(ID3D11Resource* res, D3D11_MAP map_type)
    {
        D3D11_RESOURCE_DIMENSION type;
        res->GetType(&type);

        stats_key_t key(type, map_type);
        auto it = stats_.find(key);
        if (it == stats_.end())
            it = stats_.emplace(key, 0).first;

        ++it->second;

        ++stats_counter_;

        if (stats_counter_ > 100000)
        {
            std::vector<std::pair<stats_key_t, int>> sorted_stats(stats_.begin(), stats_.end());
            std::sort(sorted_stats.begin(), sorted_stats.end(), stats_cmp());

            std::stringstream ss;
            ss << "Map stats: " << std::endl;
            for (auto const &r : sorted_stats)
                ss << r.first.first << ", " << r.first.second << ": " << r.second << std::endl;

            log_message(ss.str());
            
            stats_counter_ = 0;
        }
    }

private:
    struct map_data_t
    {
        uint8_t const *ptr = nullptr;
        D3D11_MAP map_type;
    };

    typedef boost::unordered_map<ID3D11Resource*, map_data_t> maps_map_t;

private:
    void process_unmap(ID3D11Resource* res, map_data_t const &map_data)
    {
        D3D11_RESOURCE_DIMENSION type;
        res->GetType(&type);   

        if (type == D3D11_RESOURCE_DIMENSION_BUFFER)
        {
            auto buf = static_cast<ID3D11Buffer *>(res);
            D3D11_BUFFER_DESC desc;
            buf->GetDesc(&desc);                                    

            if (dump_buffers_ && desc.ByteWidth > 0)
            {                                       
                if (buffer_to_write_.size() < write_buffer_size_)
                    buffer_to_write_.resize(write_buffer_size_);

                size_t size_to_write = std::min<size_t>(desc.ByteWidth, write_buffer_size_ - actual_buffer_size_);

                memcpy(reinterpret_cast<uint8_t *>(buffer_to_write_.data()) + actual_buffer_size_, map_data.ptr, size_to_write);
                actual_buffer_size_ += size_to_write; 

                if (actual_buffer_size_ >= write_buffer_size_)
                {
                    std::ofstream s("D:\\buffer_dump", std::ios::binary | std::ios::out);
                    
                    std::ostream_iterator<uint8_t> out(s);
                    std::copy(buffer_to_write_.begin(), buffer_to_write_.begin() + actual_buffer_size_, out);
                    actual_buffer_size_ = 0;
                    dump_buffers_ = false;
                }
            }
        }
    }


private:
    typedef std::pair<D3D11_RESOURCE_DIMENSION, D3D11_MAP> stats_key_t;
    typedef boost::unordered_map<stats_key_t, int> stats_t;

    struct stats_cmp
    {
        bool operator()(std::pair<stats_key_t, int> const &a, std::pair<stats_key_t, int> const &b) const
        {
            return a.second > b.second;
        }
    };


private:
    stats_t stats_;
    int stats_counter_ = 0;
    uint64_t total_bytes_ = 0;
    uint64_t total_buffers_ = 0;
    std::chrono::time_point<std::chrono::system_clock> start_time_;
    std::vector<uint8_t> buffer_to_write_;
    size_t actual_buffer_size_ = 0;
    bool dump_buffers_ = false;

    maps_map_t maps_map_;
    size_t write_buffer_size_ = 100 * 1024 * 1024;
};

ID3D11DeviceContext *create_wrapper_inner(ID3D11DeviceContext *impl)
{
    return new impl_ID3D11DeviceContext(impl);
}

