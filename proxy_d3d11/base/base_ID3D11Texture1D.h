#pragma once

struct base_ID3D11Texture1D
    : ID3D11Texture1D
{
    explicit base_ID3D11Texture1D(ID3D11Texture1D *impl);
    virtual ~base_ID3D11Texture1D() {}

    void STDMETHODCALLTYPE GetDesc(D3D11_TEXTURE1D_DESC* pDesc) override;

    // parent methods
public:
    void STDMETHODCALLTYPE GetType(D3D11_RESOURCE_DIMENSION* pResourceDimension) override;
    void STDMETHODCALLTYPE SetEvictionPriority(UINT EvictionPriority) override;
    UINT STDMETHODCALLTYPE GetEvictionPriority() override;
    void STDMETHODCALLTYPE GetDevice(ID3D11Device** ppDevice) override;
    HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, void const* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, IUnknown const* pData) override;
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

public:
    ID3D11Texture1D *impl() const;

private:
    ID3D11Texture1D *impl_;
    unique_ptr<ID3D11Resource> parent_base_;
};
      