#pragma once

struct base_ID3D11RasterizerState
    : ID3D11RasterizerState
{
    explicit base_ID3D11RasterizerState(ID3D11RasterizerState *impl);
    virtual ~base_ID3D11RasterizerState() {}

    void STDMETHODCALLTYPE GetDesc(D3D11_RASTERIZER_DESC* pDesc) override;

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
    ID3D11RasterizerState *impl() const;

private:
    ID3D11RasterizerState *impl_;
    unique_ptr<ID3D11DeviceChild> parent_base_;
};
      