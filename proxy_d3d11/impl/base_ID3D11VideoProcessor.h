#pragma once

#include "impl_ID3D11DeviceChild.h"

struct base_ID3D11VideoProcessor
    : impl_ID3D11DeviceChild
    , ID3D11VideoProcessor
{
    explicit base_ID3D11VideoProcessor(ID3D11VideoProcessor *impl);

    void STDMETHODCALLTYPE GetContentDesc(D3D11_VIDEO_PROCESSOR_CONTENT_DESC* pDesc) override;
    void STDMETHODCALLTYPE GetRateConversionCaps(D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS* pCaps) override;

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
    ID3D11VideoProcessor *impl() const;

private:
    ID3D11VideoProcessor *impl_;
};
      