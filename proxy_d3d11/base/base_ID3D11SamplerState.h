#pragma once

struct base_ID3D11SamplerState
    : ID3D11SamplerState
{
    explicit base_ID3D11SamplerState(ID3D11SamplerState *impl);
    virtual ~base_ID3D11SamplerState() {}

    void STDMETHODCALLTYPE GetDesc(D3D11_SAMPLER_DESC* pDesc) override;

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
    ID3D11SamplerState *impl() const;

private:
    ID3D11SamplerState *impl_;
    unique_ptr<ID3D11DeviceChild> parent_base_;
};
      