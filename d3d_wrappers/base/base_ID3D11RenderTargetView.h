#pragma once

struct base_ID3D11RenderTargetView
    : ID3D11RenderTargetView
{
    explicit base_ID3D11RenderTargetView(ID3D11RenderTargetView *impl);
    virtual ~base_ID3D11RenderTargetView() {}

    void STDMETHODCALLTYPE GetDesc(D3D11_RENDER_TARGET_VIEW_DESC* pDesc) override;

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
    ID3D11RenderTargetView *impl() const;

private:
    ID3D11RenderTargetView *impl_;
    unique_ptr<ID3D11View> parent_base_;
};
      