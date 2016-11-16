#pragma once

struct base_ID3D11VideoDevice
    : ID3D11VideoDevice
{
    explicit base_ID3D11VideoDevice(ID3D11VideoDevice *impl);
    virtual ~base_ID3D11VideoDevice() {}

    HRESULT STDMETHODCALLTYPE CreateVideoDecoder(D3D11_VIDEO_DECODER_DESC const* pVideoDesc, D3D11_VIDEO_DECODER_CONFIG const* pConfig, ID3D11VideoDecoder** ppDecoder) override;
    HRESULT STDMETHODCALLTYPE CreateVideoProcessor(ID3D11VideoProcessorEnumerator* pEnum, UINT RateConversionIndex, ID3D11VideoProcessor** ppVideoProcessor) override;
    HRESULT STDMETHODCALLTYPE CreateAuthenticatedChannel(D3D11_AUTHENTICATED_CHANNEL_TYPE ChannelType, ID3D11AuthenticatedChannel** ppAuthenticatedChannel) override;
    HRESULT STDMETHODCALLTYPE CreateCryptoSession(GUID const* pCryptoType, GUID const* pDecoderProfile, GUID const* pKeyExchangeType, ID3D11CryptoSession** ppCryptoSession) override;
    HRESULT STDMETHODCALLTYPE CreateVideoDecoderOutputView(ID3D11Resource* pResource, D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC const* pDesc, ID3D11VideoDecoderOutputView** ppVDOVView) override;
    HRESULT STDMETHODCALLTYPE CreateVideoProcessorInputView(ID3D11Resource* pResource, ID3D11VideoProcessorEnumerator* pEnum, D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC const* pDesc, ID3D11VideoProcessorInputView** ppVPIView) override;
    HRESULT STDMETHODCALLTYPE CreateVideoProcessorOutputView(ID3D11Resource* pResource, ID3D11VideoProcessorEnumerator* pEnum, D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC const* pDesc, ID3D11VideoProcessorOutputView** ppVPOView) override;
    HRESULT STDMETHODCALLTYPE CreateVideoProcessorEnumerator(D3D11_VIDEO_PROCESSOR_CONTENT_DESC const* pDesc, ID3D11VideoProcessorEnumerator** ppEnum) override;
    UINT STDMETHODCALLTYPE GetVideoDecoderProfileCount() override;
    HRESULT STDMETHODCALLTYPE GetVideoDecoderProfile(UINT Index, GUID* pDecoderProfile) override;
    HRESULT STDMETHODCALLTYPE CheckVideoDecoderFormat(GUID const* pDecoderProfile, DXGI_FORMAT Format, BOOL* pSupported) override;
    HRESULT STDMETHODCALLTYPE GetVideoDecoderConfigCount(D3D11_VIDEO_DECODER_DESC const* pDesc, UINT* pCount) override;
    HRESULT STDMETHODCALLTYPE GetVideoDecoderConfig(D3D11_VIDEO_DECODER_DESC const* pDesc, UINT Index, D3D11_VIDEO_DECODER_CONFIG* pConfig) override;
    HRESULT STDMETHODCALLTYPE GetContentProtectionCaps(GUID const* pCryptoType, GUID const* pDecoderProfile, D3D11_VIDEO_CONTENT_PROTECTION_CAPS* pCaps) override;
    HRESULT STDMETHODCALLTYPE CheckCryptoKeyExchange(GUID const* pCryptoType, GUID const* pDecoderProfile, UINT Index, GUID* pKeyExchangeType) override;
    HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, void const* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, IUnknown const* pData) override;

    // parent methods
public:
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

public:
    ID3D11VideoDevice *impl() const;

private:
    ID3D11VideoDevice *impl_;
    unique_ptr<IUnknown> parent_base_;
};
      