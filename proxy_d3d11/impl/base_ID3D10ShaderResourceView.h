#pragma once

struct base_ID3D10ShaderResourceView
    : ID3D10ShaderResourceView
{
    explicit base_ID3D10ShaderResourceView(ID3D10ShaderResourceView *impl);
    virtual ~base_ID3D10ShaderResourceView() {}

    void STDMETHODCALLTYPE GetDesc(D3D10_SHADER_RESOURCE_VIEW_DESC* pDesc) override;

    // parent methods
public:
    void STDMETHODCALLTYPE GetResource(ID3D10Resource** ppResource) override;
    void STDMETHODCALLTYPE GetDevice(ID3D10Device** ppDevice) override;
    HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, void const* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, IUnknown const* pData) override;
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

public:
    ID3D10ShaderResourceView *impl() const;

private:
    ID3D10ShaderResourceView *impl_;
    unique_ptr<ID3D10View> parent_base_;
};
      