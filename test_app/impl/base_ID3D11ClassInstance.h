#pragma once

#include "impl_ID3D11DeviceChild.h"

struct base_ID3D11ClassInstance
    : impl_ID3D11DeviceChild
    , ID3D11ClassInstance
{
    explicit base_ID3D11ClassInstance(ID3D11ClassInstance *impl);

    void STDMETHODCALLTYPE GetClassLinkage(ID3D11ClassLinkage** ppLinkage) override;
    void STDMETHODCALLTYPE GetDesc(D3D11_CLASS_INSTANCE_DESC* pDesc) override;
    void STDMETHODCALLTYPE GetInstanceName(LPSTR pInstanceName, SIZE_T* pBufferLength) override;
    void STDMETHODCALLTYPE GetTypeName(LPSTR pTypeName, SIZE_T* pBufferLength) override;

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
    ID3D11ClassInstance *impl() const;

private:
    ID3D11ClassInstance *impl_;
};
      