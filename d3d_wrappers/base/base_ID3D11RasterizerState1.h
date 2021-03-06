#pragma once

struct base_ID3D11RasterizerState1
    : ID3D11RasterizerState1
{
    explicit base_ID3D11RasterizerState1(ID3D11RasterizerState1 *impl);
    virtual ~base_ID3D11RasterizerState1() {}

    void STDMETHODCALLTYPE GetDesc1(D3D11_RASTERIZER_DESC1* pDesc) override;

    // parent methods
public:
    void STDMETHODCALLTYPE GetDesc(D3D11_RASTERIZER_DESC* pDesc) override;
    void STDMETHODCALLTYPE GetDevice(ID3D11Device** ppDevice) override;
    HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, void const* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, IUnknown const* pData) override;
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

public:
    ID3D11RasterizerState1 *impl() const;

private:
    ID3D11RasterizerState1 *impl_;
    unique_ptr<ID3D11RasterizerState> parent_base_;
};
      