#pragma once

struct base_ID3D10Counter
    : ID3D10Counter
{
    explicit base_ID3D10Counter(ID3D10Counter *impl);
    virtual ~base_ID3D10Counter() {}

    void STDMETHODCALLTYPE GetDesc(D3D10_COUNTER_DESC* pDesc) override;

    // parent methods
public:
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
    ID3D10Counter *impl() const;

private:
    ID3D10Counter *impl_;
    unique_ptr<ID3D10Asynchronous> parent_base_;
};
      