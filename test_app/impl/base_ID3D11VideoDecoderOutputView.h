#pragma once

#include "impl_ID3D11View.h"

struct base_ID3D11VideoDecoderOutputView
    : impl_ID3D11View
    , ID3D11VideoDecoderOutputView
{
    explicit base_ID3D11VideoDecoderOutputView(ID3D11VideoDecoderOutputView *impl);

    void STDMETHODCALLTYPE GetDesc(D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC* pDesc) override;

    // parent methods
public:
    void STDMETHODCALLTYPE GetResource(ID3D11Resource** ppResource) override;
    void STDMETHODCALLTYPE GetDevice(ID3D11Device** ppDevice) override;
    HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, void const* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, IUnknown const* pData) override;
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

public:
    ID3D11VideoDecoderOutputView *impl() const;

private:
    ID3D11VideoDecoderOutputView *impl_;
};
      