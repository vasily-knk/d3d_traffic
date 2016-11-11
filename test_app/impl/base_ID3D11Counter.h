#pragma once

#include "impl_ID3D11Asynchronous.h"

struct base_ID3D11Counter
    : impl_ID3D11Asynchronous
    , ID3D11Counter
{
    explicit base_ID3D11Counter(ID3D11Counter *impl);

    void STDMETHODCALLTYPE GetDesc(D3D11_COUNTER_DESC* pDesc) override;

    // parent methods
public:
    UINT STDMETHODCALLTYPE GetDataSize() override;
    void STDMETHODCALLTYPE GetDevice(ID3D11Device** ppDevice) override;
    HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, void const* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, IUnknown const* pData) override;
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

public:
    ID3D11Counter *impl() const;

private:
    ID3D11Counter *impl_;
};
      