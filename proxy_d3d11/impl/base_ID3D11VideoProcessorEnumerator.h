#pragma once

#include "impl_ID3D11DeviceChild.h"

struct base_ID3D11VideoProcessorEnumerator
    : impl_ID3D11DeviceChild
    , ID3D11VideoProcessorEnumerator
{
    explicit base_ID3D11VideoProcessorEnumerator(ID3D11VideoProcessorEnumerator *impl);

    HRESULT STDMETHODCALLTYPE GetVideoProcessorContentDesc(D3D11_VIDEO_PROCESSOR_CONTENT_DESC* pContentDesc) override;
    HRESULT STDMETHODCALLTYPE CheckVideoProcessorFormat(DXGI_FORMAT Format, UINT* pFlags) override;
    HRESULT STDMETHODCALLTYPE GetVideoProcessorCaps(D3D11_VIDEO_PROCESSOR_CAPS* pCaps) override;
    HRESULT STDMETHODCALLTYPE GetVideoProcessorRateConversionCaps(UINT TypeIndex, D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS* pCaps) override;
    HRESULT STDMETHODCALLTYPE GetVideoProcessorCustomRate(UINT TypeIndex, UINT CustomRateIndex, D3D11_VIDEO_PROCESSOR_CUSTOM_RATE* pRate) override;
    HRESULT STDMETHODCALLTYPE GetVideoProcessorFilterRange(D3D11_VIDEO_PROCESSOR_FILTER Filter, D3D11_VIDEO_PROCESSOR_FILTER_RANGE* pRange) override;

    // parent methods
public:
    void STDMETHODCALLTYPE GetDevice(ID3D11Device** ppDevice) override;
    HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, void const* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, IUnknown const* pData) override;
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

public:
    ID3D11VideoProcessorEnumerator *impl() const;

private:
    ID3D11VideoProcessorEnumerator *impl_;
};
      