#pragma once

#include "impl_ID3D11DeviceChild.h"

struct base_ID3D11View
    : impl_ID3D11DeviceChild
    , ID3D11View
{
    explicit base_ID3D11View(ID3D11View *impl);

    void STDMETHODCALLTYPE GetResource(ID3D11Resource** ppResource) override;

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
    ID3D11View *impl() const;

private:
    ID3D11View *impl_;
};
      