#pragma once

struct base_ID3D11InputLayout
    : ID3D11InputLayout
{
    explicit base_ID3D11InputLayout(ID3D11InputLayout *impl);
    virtual ~base_ID3D11InputLayout() {}

    

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
    ID3D11InputLayout *impl() const;

private:
    ID3D11InputLayout *impl_;
    unique_ptr<ID3D11DeviceChild> parent_base_;
};
      