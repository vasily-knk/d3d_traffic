#include "stdafx.h"

#include "base_ID3D11VideoProcessorEnumerator.h"
#include "../wrappers.h"

ID3D11VideoProcessorEnumerator *unwrap_inner(ID3D11VideoProcessorEnumerator *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11VideoProcessorEnumerator *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D11VideoProcessorEnumerator::base_ID3D11VideoProcessorEnumerator(ID3D11VideoProcessorEnumerator *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}

HRESULT base_ID3D11VideoProcessorEnumerator::GetVideoProcessorContentDesc(D3D11_VIDEO_PROCESSOR_CONTENT_DESC* pContentDesc)
{
    
    auto result_ = impl_->GetVideoProcessorContentDesc(pContentDesc);
    
    return result_;
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::CheckVideoProcessorFormat(DXGI_FORMAT Format, UINT* pFlags)
{
    
    auto result_ = impl_->CheckVideoProcessorFormat(Format, pFlags);
    
    return result_;
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::GetVideoProcessorCaps(D3D11_VIDEO_PROCESSOR_CAPS* pCaps)
{
    
    auto result_ = impl_->GetVideoProcessorCaps(pCaps);
    
    return result_;
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::GetVideoProcessorRateConversionCaps(UINT TypeIndex, D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS* pCaps)
{
    
    auto result_ = impl_->GetVideoProcessorRateConversionCaps(TypeIndex, pCaps);
    
    return result_;
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::GetVideoProcessorCustomRate(UINT TypeIndex, UINT CustomRateIndex, D3D11_VIDEO_PROCESSOR_CUSTOM_RATE* pRate)
{
    
    auto result_ = impl_->GetVideoProcessorCustomRate(TypeIndex, CustomRateIndex, pRate);
    
    return result_;
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::GetVideoProcessorFilterRange(D3D11_VIDEO_PROCESSOR_FILTER Filter, D3D11_VIDEO_PROCESSOR_FILTER_RANGE* pRange)
{
    
    auto result_ = impl_->GetVideoProcessorFilterRange(Filter, pRange);
    
    return result_;
}
     

void base_ID3D11VideoProcessorEnumerator::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11VideoProcessorEnumerator::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11VideoProcessorEnumerator::Release()
{
    return parent_base_->Release();
}
     

ID3D11VideoProcessorEnumerator *base_ID3D11VideoProcessorEnumerator::impl() const
{
    return impl_;
}
      
