#pragma once

struct base_ID3D10Predicate
    : ID3D10Predicate
{
    explicit base_ID3D10Predicate(ID3D10Predicate *impl);
    virtual ~base_ID3D10Predicate() {}

    

    // parent methods
public:
    void STDMETHODCALLTYPE GetDesc(D3D10_QUERY_DESC* pDesc) override;
    void STDMETHODCALLTYPE Begin() override;
    void STDMETHODCALLTYPE End() override;
    HRESULT STDMETHODCALLTYPE GetData(void* pData, UINT DataSize, UINT GetDataFlags) override;
    UINT STDMETHODCALLTYPE GetDataSize() override;
    void STDMETHODCALLTYPE GetDevice(ID3D10Device** ppDevice) override;
    HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, void const* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, IUnknown const* pData) override;
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

public:
    ID3D10Predicate *impl() const;

private:
    ID3D10Predicate *impl_;
    unique_ptr<ID3D10Query> parent_base_;
};
      