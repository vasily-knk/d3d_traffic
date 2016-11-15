#pragma once

struct base_ID3D11DeviceChild
    : ID3D11DeviceChild
{
    explicit base_ID3D11DeviceChild(ID3D11DeviceChild *impl);
    virtual ~base_ID3D11DeviceChild() {}

    void STDMETHODCALLTYPE GetDevice(ID3D11Device** ppDevice) override;
    HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, void const* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, IUnknown const* pData) override;

    // parent methods
public:
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

public:
    ID3D11DeviceChild *impl() const;

private:
    ID3D11DeviceChild *impl_;
    unique_ptr<IUnknown> parent_base_;
};
      