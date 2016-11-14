#pragma once

struct base_ID3D10Buffer
    : ID3D10Buffer
{
    explicit base_ID3D10Buffer(ID3D10Buffer *impl);
    virtual ~base_ID3D10Buffer() {}

    HRESULT STDMETHODCALLTYPE Map(D3D10_MAP MapType, UINT MapFlags, void** ppData) override;
    void STDMETHODCALLTYPE Unmap() override;
    void STDMETHODCALLTYPE GetDesc(D3D10_BUFFER_DESC* pDesc) override;

    // parent methods
public:
    void STDMETHODCALLTYPE GetType(D3D10_RESOURCE_DIMENSION* rType) override;
    void STDMETHODCALLTYPE SetEvictionPriority(UINT EvictionPriority) override;
    UINT STDMETHODCALLTYPE GetEvictionPriority() override;
    void STDMETHODCALLTYPE GetDevice(ID3D10Device** ppDevice) override;
    HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, void const* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, IUnknown const* pData) override;
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

public:
    ID3D10Buffer *impl() const;

private:
    ID3D10Buffer *impl_;
    unique_ptr<ID3D10Resource> parent_base_;
};
      