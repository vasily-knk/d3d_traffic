#pragma once

struct base_ID3D11VideoDecoder
    : ID3D11VideoDecoder
{
    explicit base_ID3D11VideoDecoder(ID3D11VideoDecoder *impl);
    virtual ~base_ID3D11VideoDecoder() {}

    HRESULT STDMETHODCALLTYPE GetCreationParameters(D3D11_VIDEO_DECODER_DESC* pVideoDesc, D3D11_VIDEO_DECODER_CONFIG* pConfig) override;
    HRESULT STDMETHODCALLTYPE GetDriverHandle(HANDLE* pDriverHandle) override;

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
    ID3D11VideoDecoder *impl() const;

private:
    ID3D11VideoDecoder *impl_;
    unique_ptr<ID3D11DeviceChild> parent_base_;
};
      