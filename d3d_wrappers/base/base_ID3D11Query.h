#pragma once

struct base_ID3D11Query
    : ID3D11Query
{
    explicit base_ID3D11Query(ID3D11Query *impl);
    virtual ~base_ID3D11Query() {}

    void STDMETHODCALLTYPE GetDesc(D3D11_QUERY_DESC* pDesc) override;

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
    ID3D11Query *impl() const;

private:
    ID3D11Query *impl_;
    unique_ptr<ID3D11Asynchronous> parent_base_;
};
      