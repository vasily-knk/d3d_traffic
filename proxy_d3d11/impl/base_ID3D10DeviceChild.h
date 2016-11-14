#pragma once

struct base_ID3D10DeviceChild
    : ID3D10DeviceChild
{
    explicit base_ID3D10DeviceChild(ID3D10DeviceChild *impl);
    virtual ~base_ID3D10DeviceChild() {}

    void STDMETHODCALLTYPE GetDevice(ID3D10Device** ppDevice) override;
    HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, void const* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, IUnknown const* pData) override;

    // parent methods
public:
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

public:
    ID3D10DeviceChild *impl() const;

private:
    ID3D10DeviceChild *impl_;
    unique_ptr<IUnknown> parent_base_;
};
      