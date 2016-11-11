#pragma once

#include "impl_ID3D11DeviceChild.h"

struct base_ID3D11VideoContext
    : impl_ID3D11DeviceChild
    , ID3D11VideoContext
{
    explicit base_ID3D11VideoContext(ID3D11VideoContext *impl);

    HRESULT STDMETHODCALLTYPE GetDecoderBuffer(ID3D11VideoDecoder* pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, UINT* pBufferSize, void** ppBuffer) override;
    HRESULT STDMETHODCALLTYPE ReleaseDecoderBuffer(ID3D11VideoDecoder* pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type) override;
    HRESULT STDMETHODCALLTYPE DecoderBeginFrame(ID3D11VideoDecoder* pDecoder, ID3D11VideoDecoderOutputView* pView, UINT ContentKeySize, void const* pContentKey) override;
    HRESULT STDMETHODCALLTYPE DecoderEndFrame(ID3D11VideoDecoder* pDecoder) override;
    HRESULT STDMETHODCALLTYPE SubmitDecoderBuffers(ID3D11VideoDecoder* pDecoder, UINT NumBuffers, D3D11_VIDEO_DECODER_BUFFER_DESC const* pBufferDesc) override;
    APP_DEPRECATED_HRESULT STDMETHODCALLTYPE DecoderExtension(ID3D11VideoDecoder* pDecoder, D3D11_VIDEO_DECODER_EXTENSION const* pExtensionData) override;
    void STDMETHODCALLTYPE VideoProcessorSetOutputTargetRect(ID3D11VideoProcessor* pVideoProcessor, BOOL Enable, RECT const* pRect) override;
    void STDMETHODCALLTYPE VideoProcessorSetOutputBackgroundColor(ID3D11VideoProcessor* pVideoProcessor, BOOL YCbCr, D3D11_VIDEO_COLOR const* pColor) override;
    void STDMETHODCALLTYPE VideoProcessorSetOutputColorSpace(ID3D11VideoProcessor* pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE const* pColorSpace) override;
    void STDMETHODCALLTYPE VideoProcessorSetOutputAlphaFillMode(ID3D11VideoProcessor* pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode, UINT StreamIndex) override;
    void STDMETHODCALLTYPE VideoProcessorSetOutputConstriction(ID3D11VideoProcessor* pVideoProcessor, BOOL Enable, SIZE Size) override;
    void STDMETHODCALLTYPE VideoProcessorSetOutputStereoMode(ID3D11VideoProcessor* pVideoProcessor, BOOL Enable) override;
    APP_DEPRECATED_HRESULT STDMETHODCALLTYPE VideoProcessorSetOutputExtension(ID3D11VideoProcessor* pVideoProcessor, GUID const* pExtensionGuid, UINT DataSize, void* pData) override;
    void STDMETHODCALLTYPE VideoProcessorGetOutputTargetRect(ID3D11VideoProcessor* pVideoProcessor, BOOL* Enabled, RECT* pRect) override;
    void STDMETHODCALLTYPE VideoProcessorGetOutputBackgroundColor(ID3D11VideoProcessor* pVideoProcessor, BOOL* pYCbCr, D3D11_VIDEO_COLOR* pColor) override;
    void STDMETHODCALLTYPE VideoProcessorGetOutputColorSpace(ID3D11VideoProcessor* pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE* pColorSpace) override;
    void STDMETHODCALLTYPE VideoProcessorGetOutputAlphaFillMode(ID3D11VideoProcessor* pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE* pAlphaFillMode, UINT* pStreamIndex) override;
    void STDMETHODCALLTYPE VideoProcessorGetOutputConstriction(ID3D11VideoProcessor* pVideoProcessor, BOOL* pEnabled, SIZE* pSize) override;
    void STDMETHODCALLTYPE VideoProcessorGetOutputStereoMode(ID3D11VideoProcessor* pVideoProcessor, BOOL* pEnabled) override;
    APP_DEPRECATED_HRESULT STDMETHODCALLTYPE VideoProcessorGetOutputExtension(ID3D11VideoProcessor* pVideoProcessor, GUID const* pExtensionGuid, UINT DataSize, void* pData) override;
    void STDMETHODCALLTYPE VideoProcessorSetStreamFrameFormat(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT FrameFormat) override;
    void STDMETHODCALLTYPE VideoProcessorSetStreamColorSpace(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE const* pColorSpace) override;
    void STDMETHODCALLTYPE VideoProcessorSetStreamOutputRate(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate, BOOL RepeatFrame, DXGI_RATIONAL const* pCustomRate) override;
    void STDMETHODCALLTYPE VideoProcessorSetStreamSourceRect(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, RECT const* pRect) override;
    void STDMETHODCALLTYPE VideoProcessorSetStreamDestRect(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, RECT const* pRect) override;
    void STDMETHODCALLTYPE VideoProcessorSetStreamAlpha(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Alpha) override;
    void STDMETHODCALLTYPE VideoProcessorSetStreamPalette(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, UINT Count, UINT const* pEntries) override;
    void STDMETHODCALLTYPE VideoProcessorSetStreamPixelAspectRatio(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, DXGI_RATIONAL const* pSourceAspectRatio, DXGI_RATIONAL const* pDestinationAspectRatio) override;
    void STDMETHODCALLTYPE VideoProcessorSetStreamLumaKey(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Lower, FLOAT Upper) override;
    void STDMETHODCALLTYPE VideoProcessorSetStreamStereoFormat(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format, BOOL LeftViewFrame0, BOOL BaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode, int MonoOffset) override;
    void STDMETHODCALLTYPE VideoProcessorSetStreamAutoProcessingMode(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable) override;
    void STDMETHODCALLTYPE VideoProcessorSetStreamFilter(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL Enable, int Level) override;
    APP_DEPRECATED_HRESULT STDMETHODCALLTYPE VideoProcessorSetStreamExtension(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, GUID const* pExtensionGuid, UINT DataSize, void* pData) override;
    void STDMETHODCALLTYPE VideoProcessorGetStreamFrameFormat(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT* pFrameFormat) override;
    void STDMETHODCALLTYPE VideoProcessorGetStreamColorSpace(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE* pColorSpace) override;
    void STDMETHODCALLTYPE VideoProcessorGetStreamOutputRate(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE* pOutputRate, BOOL* pRepeatFrame, DXGI_RATIONAL* pCustomRate) override;
    void STDMETHODCALLTYPE VideoProcessorGetStreamSourceRect(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled, RECT* pRect) override;
    void STDMETHODCALLTYPE VideoProcessorGetStreamDestRect(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled, RECT* pRect) override;
    void STDMETHODCALLTYPE VideoProcessorGetStreamAlpha(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled, FLOAT* pAlpha) override;
    void STDMETHODCALLTYPE VideoProcessorGetStreamPalette(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, UINT Count, UINT* pEntries) override;
    void STDMETHODCALLTYPE VideoProcessorGetStreamPixelAspectRatio(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled, DXGI_RATIONAL* pSourceAspectRatio, DXGI_RATIONAL* pDestinationAspectRatio) override;
    void STDMETHODCALLTYPE VideoProcessorGetStreamLumaKey(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled, FLOAT* pLower, FLOAT* pUpper) override;
    void STDMETHODCALLTYPE VideoProcessorGetStreamStereoFormat(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT* pFormat, BOOL* pLeftViewFrame0, BOOL* pBaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE* pFlipMode, int* MonoOffset) override;
    void STDMETHODCALLTYPE VideoProcessorGetStreamAutoProcessingMode(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled) override;
    void STDMETHODCALLTYPE VideoProcessorGetStreamFilter(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL* pEnabled, int* pLevel) override;
    APP_DEPRECATED_HRESULT STDMETHODCALLTYPE VideoProcessorGetStreamExtension(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, GUID const* pExtensionGuid, UINT DataSize, void* pData) override;
    HRESULT STDMETHODCALLTYPE VideoProcessorBlt(ID3D11VideoProcessor* pVideoProcessor, ID3D11VideoProcessorOutputView* pView, UINT OutputFrame, UINT StreamCount, D3D11_VIDEO_PROCESSOR_STREAM const* pStreams) override;
    HRESULT STDMETHODCALLTYPE NegotiateCryptoSessionKeyExchange(ID3D11CryptoSession* pCryptoSession, UINT DataSize, void* pData) override;
    void STDMETHODCALLTYPE EncryptionBlt(ID3D11CryptoSession* pCryptoSession, ID3D11Texture2D* pSrcSurface, ID3D11Texture2D* pDstSurface, UINT IVSize, void* pIV) override;
    void STDMETHODCALLTYPE DecryptionBlt(ID3D11CryptoSession* pCryptoSession, ID3D11Texture2D* pSrcSurface, ID3D11Texture2D* pDstSurface, D3D11_ENCRYPTED_BLOCK_INFO* pEncryptedBlockInfo, UINT ContentKeySize, void const* pContentKey, UINT IVSize, void* pIV) override;
    void STDMETHODCALLTYPE StartSessionKeyRefresh(ID3D11CryptoSession* pCryptoSession, UINT RandomNumberSize, void* pRandomNumber) override;
    void STDMETHODCALLTYPE FinishSessionKeyRefresh(ID3D11CryptoSession* pCryptoSession) override;
    HRESULT STDMETHODCALLTYPE GetEncryptionBltKey(ID3D11CryptoSession* pCryptoSession, UINT KeySize, void* pReadbackKey) override;
    HRESULT STDMETHODCALLTYPE NegotiateAuthenticatedChannelKeyExchange(ID3D11AuthenticatedChannel* pChannel, UINT DataSize, void* pData) override;
    HRESULT STDMETHODCALLTYPE QueryAuthenticatedChannel(ID3D11AuthenticatedChannel* pChannel, UINT InputSize, void const* pInput, UINT OutputSize, void* pOutput) override;
    HRESULT STDMETHODCALLTYPE ConfigureAuthenticatedChannel(ID3D11AuthenticatedChannel* pChannel, UINT InputSize, void const* pInput, D3D11_AUTHENTICATED_CONFIGURE_OUTPUT* pOutput) override;
    void STDMETHODCALLTYPE VideoProcessorSetStreamRotation(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_ROTATION Rotation) override;
    void STDMETHODCALLTYPE VideoProcessorGetStreamRotation(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnable, D3D11_VIDEO_PROCESSOR_ROTATION* pRotation) override;

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
    ID3D11VideoContext *impl() const;

private:
    ID3D11VideoContext *impl_;
};
      