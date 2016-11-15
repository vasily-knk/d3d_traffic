#include "stdafx.h"

#include "base_ID3D11VideoContext.h"
#include "../wrappers.h"

ID3D11VideoContext *unwrap_inner(ID3D11VideoContext *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11VideoContext *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11VideoContext *create_wrapper_inner(ID3D11VideoContext *impl)
{
    return new base_ID3D11VideoContext(impl);
}
       

base_ID3D11VideoContext::base_ID3D11VideoContext(ID3D11VideoContext *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}

HRESULT base_ID3D11VideoContext::GetDecoderBuffer(ID3D11VideoDecoder* pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, UINT* pBufferSize, void** ppBuffer)
{
    pDecoder = unwrap(pDecoder);
    auto result_ = impl_->GetDecoderBuffer(pDecoder, Type, pBufferSize, ppBuffer);
    
    return result_;
}
     
HRESULT base_ID3D11VideoContext::ReleaseDecoderBuffer(ID3D11VideoDecoder* pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type)
{
    pDecoder = unwrap(pDecoder);
    auto result_ = impl_->ReleaseDecoderBuffer(pDecoder, Type);
    
    return result_;
}
     
HRESULT base_ID3D11VideoContext::DecoderBeginFrame(ID3D11VideoDecoder* pDecoder, ID3D11VideoDecoderOutputView* pView, UINT ContentKeySize, void const* pContentKey)
{
    pDecoder = unwrap(pDecoder);
    pView = unwrap(pView);
    auto result_ = impl_->DecoderBeginFrame(pDecoder, pView, ContentKeySize, pContentKey);
    
    return result_;
}
     
HRESULT base_ID3D11VideoContext::DecoderEndFrame(ID3D11VideoDecoder* pDecoder)
{
    pDecoder = unwrap(pDecoder);
    auto result_ = impl_->DecoderEndFrame(pDecoder);
    
    return result_;
}
     
HRESULT base_ID3D11VideoContext::SubmitDecoderBuffers(ID3D11VideoDecoder* pDecoder, UINT NumBuffers, D3D11_VIDEO_DECODER_BUFFER_DESC const* pBufferDesc)
{
    pDecoder = unwrap(pDecoder);
    auto result_ = impl_->SubmitDecoderBuffers(pDecoder, NumBuffers, pBufferDesc);
    
    return result_;
}
     
APP_DEPRECATED_HRESULT base_ID3D11VideoContext::DecoderExtension(ID3D11VideoDecoder* pDecoder, D3D11_VIDEO_DECODER_EXTENSION const* pExtensionData)
{
    pDecoder = unwrap(pDecoder);
    auto result_ = impl_->DecoderExtension(pDecoder, pExtensionData);
    
    return result_;
}
     
void base_ID3D11VideoContext::VideoProcessorSetOutputTargetRect(ID3D11VideoProcessor* pVideoProcessor, BOOL Enable, RECT const* pRect)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetOutputTargetRect(pVideoProcessor, Enable, pRect);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorSetOutputBackgroundColor(ID3D11VideoProcessor* pVideoProcessor, BOOL YCbCr, D3D11_VIDEO_COLOR const* pColor)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetOutputBackgroundColor(pVideoProcessor, YCbCr, pColor);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorSetOutputColorSpace(ID3D11VideoProcessor* pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE const* pColorSpace)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetOutputColorSpace(pVideoProcessor, pColorSpace);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorSetOutputAlphaFillMode(ID3D11VideoProcessor* pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode, UINT StreamIndex)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetOutputAlphaFillMode(pVideoProcessor, AlphaFillMode, StreamIndex);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorSetOutputConstriction(ID3D11VideoProcessor* pVideoProcessor, BOOL Enable, SIZE Size)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetOutputConstriction(pVideoProcessor, Enable, Size);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorSetOutputStereoMode(ID3D11VideoProcessor* pVideoProcessor, BOOL Enable)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetOutputStereoMode(pVideoProcessor, Enable);
    
    
}
     
APP_DEPRECATED_HRESULT base_ID3D11VideoContext::VideoProcessorSetOutputExtension(ID3D11VideoProcessor* pVideoProcessor, GUID const* pExtensionGuid, UINT DataSize, void* pData)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    auto result_ = impl_->VideoProcessorSetOutputExtension(pVideoProcessor, pExtensionGuid, DataSize, pData);
    
    return result_;
}
     
void base_ID3D11VideoContext::VideoProcessorGetOutputTargetRect(ID3D11VideoProcessor* pVideoProcessor, BOOL* Enabled, RECT* pRect)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetOutputTargetRect(pVideoProcessor, Enabled, pRect);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorGetOutputBackgroundColor(ID3D11VideoProcessor* pVideoProcessor, BOOL* pYCbCr, D3D11_VIDEO_COLOR* pColor)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetOutputBackgroundColor(pVideoProcessor, pYCbCr, pColor);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorGetOutputColorSpace(ID3D11VideoProcessor* pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE* pColorSpace)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetOutputColorSpace(pVideoProcessor, pColorSpace);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorGetOutputAlphaFillMode(ID3D11VideoProcessor* pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE* pAlphaFillMode, UINT* pStreamIndex)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetOutputAlphaFillMode(pVideoProcessor, pAlphaFillMode, pStreamIndex);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorGetOutputConstriction(ID3D11VideoProcessor* pVideoProcessor, BOOL* pEnabled, SIZE* pSize)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetOutputConstriction(pVideoProcessor, pEnabled, pSize);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorGetOutputStereoMode(ID3D11VideoProcessor* pVideoProcessor, BOOL* pEnabled)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetOutputStereoMode(pVideoProcessor, pEnabled);
    
    
}
     
APP_DEPRECATED_HRESULT base_ID3D11VideoContext::VideoProcessorGetOutputExtension(ID3D11VideoProcessor* pVideoProcessor, GUID const* pExtensionGuid, UINT DataSize, void* pData)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    auto result_ = impl_->VideoProcessorGetOutputExtension(pVideoProcessor, pExtensionGuid, DataSize, pData);
    
    return result_;
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamFrameFormat(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT FrameFormat)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetStreamFrameFormat(pVideoProcessor, StreamIndex, FrameFormat);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamColorSpace(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE const* pColorSpace)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetStreamColorSpace(pVideoProcessor, StreamIndex, pColorSpace);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamOutputRate(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate, BOOL RepeatFrame, DXGI_RATIONAL const* pCustomRate)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetStreamOutputRate(pVideoProcessor, StreamIndex, OutputRate, RepeatFrame, pCustomRate);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamSourceRect(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, RECT const* pRect)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetStreamSourceRect(pVideoProcessor, StreamIndex, Enable, pRect);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamDestRect(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, RECT const* pRect)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetStreamDestRect(pVideoProcessor, StreamIndex, Enable, pRect);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamAlpha(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Alpha)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetStreamAlpha(pVideoProcessor, StreamIndex, Enable, Alpha);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamPalette(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, UINT Count, UINT const* pEntries)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetStreamPalette(pVideoProcessor, StreamIndex, Count, pEntries);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamPixelAspectRatio(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, DXGI_RATIONAL const* pSourceAspectRatio, DXGI_RATIONAL const* pDestinationAspectRatio)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetStreamPixelAspectRatio(pVideoProcessor, StreamIndex, Enable, pSourceAspectRatio, pDestinationAspectRatio);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamLumaKey(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Lower, FLOAT Upper)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetStreamLumaKey(pVideoProcessor, StreamIndex, Enable, Lower, Upper);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamStereoFormat(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format, BOOL LeftViewFrame0, BOOL BaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode, int MonoOffset)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetStreamStereoFormat(pVideoProcessor, StreamIndex, Enable, Format, LeftViewFrame0, BaseViewFrame0, FlipMode, MonoOffset);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamAutoProcessingMode(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetStreamAutoProcessingMode(pVideoProcessor, StreamIndex, Enable);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamFilter(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL Enable, int Level)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetStreamFilter(pVideoProcessor, StreamIndex, Filter, Enable, Level);
    
    
}
     
APP_DEPRECATED_HRESULT base_ID3D11VideoContext::VideoProcessorSetStreamExtension(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, GUID const* pExtensionGuid, UINT DataSize, void* pData)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    auto result_ = impl_->VideoProcessorSetStreamExtension(pVideoProcessor, StreamIndex, pExtensionGuid, DataSize, pData);
    
    return result_;
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamFrameFormat(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT* pFrameFormat)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetStreamFrameFormat(pVideoProcessor, StreamIndex, pFrameFormat);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamColorSpace(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE* pColorSpace)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetStreamColorSpace(pVideoProcessor, StreamIndex, pColorSpace);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamOutputRate(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE* pOutputRate, BOOL* pRepeatFrame, DXGI_RATIONAL* pCustomRate)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetStreamOutputRate(pVideoProcessor, StreamIndex, pOutputRate, pRepeatFrame, pCustomRate);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamSourceRect(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled, RECT* pRect)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetStreamSourceRect(pVideoProcessor, StreamIndex, pEnabled, pRect);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamDestRect(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled, RECT* pRect)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetStreamDestRect(pVideoProcessor, StreamIndex, pEnabled, pRect);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamAlpha(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled, FLOAT* pAlpha)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetStreamAlpha(pVideoProcessor, StreamIndex, pEnabled, pAlpha);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamPalette(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, UINT Count, UINT* pEntries)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetStreamPalette(pVideoProcessor, StreamIndex, Count, pEntries);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamPixelAspectRatio(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled, DXGI_RATIONAL* pSourceAspectRatio, DXGI_RATIONAL* pDestinationAspectRatio)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetStreamPixelAspectRatio(pVideoProcessor, StreamIndex, pEnabled, pSourceAspectRatio, pDestinationAspectRatio);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamLumaKey(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled, FLOAT* pLower, FLOAT* pUpper)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetStreamLumaKey(pVideoProcessor, StreamIndex, pEnabled, pLower, pUpper);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamStereoFormat(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT* pFormat, BOOL* pLeftViewFrame0, BOOL* pBaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE* pFlipMode, int* MonoOffset)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetStreamStereoFormat(pVideoProcessor, StreamIndex, pEnable, pFormat, pLeftViewFrame0, pBaseViewFrame0, pFlipMode, MonoOffset);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamAutoProcessingMode(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetStreamAutoProcessingMode(pVideoProcessor, StreamIndex, pEnabled);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamFilter(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL* pEnabled, int* pLevel)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetStreamFilter(pVideoProcessor, StreamIndex, Filter, pEnabled, pLevel);
    
    
}
     
APP_DEPRECATED_HRESULT base_ID3D11VideoContext::VideoProcessorGetStreamExtension(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, GUID const* pExtensionGuid, UINT DataSize, void* pData)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    auto result_ = impl_->VideoProcessorGetStreamExtension(pVideoProcessor, StreamIndex, pExtensionGuid, DataSize, pData);
    
    return result_;
}
     
HRESULT base_ID3D11VideoContext::VideoProcessorBlt(ID3D11VideoProcessor* pVideoProcessor, ID3D11VideoProcessorOutputView* pView, UINT OutputFrame, UINT StreamCount, D3D11_VIDEO_PROCESSOR_STREAM const* pStreams)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    pView = unwrap(pView);
    auto result_ = impl_->VideoProcessorBlt(pVideoProcessor, pView, OutputFrame, StreamCount, pStreams);
    
    return result_;
}
     
HRESULT base_ID3D11VideoContext::NegotiateCryptoSessionKeyExchange(ID3D11CryptoSession* pCryptoSession, UINT DataSize, void* pData)
{
    pCryptoSession = unwrap(pCryptoSession);
    auto result_ = impl_->NegotiateCryptoSessionKeyExchange(pCryptoSession, DataSize, pData);
    
    return result_;
}
     
void base_ID3D11VideoContext::EncryptionBlt(ID3D11CryptoSession* pCryptoSession, ID3D11Texture2D* pSrcSurface, ID3D11Texture2D* pDstSurface, UINT IVSize, void* pIV)
{
    pCryptoSession = unwrap(pCryptoSession);
    pSrcSurface = unwrap(pSrcSurface);
    pDstSurface = unwrap(pDstSurface);
    impl_->EncryptionBlt(pCryptoSession, pSrcSurface, pDstSurface, IVSize, pIV);
    
    
}
     
void base_ID3D11VideoContext::DecryptionBlt(ID3D11CryptoSession* pCryptoSession, ID3D11Texture2D* pSrcSurface, ID3D11Texture2D* pDstSurface, D3D11_ENCRYPTED_BLOCK_INFO* pEncryptedBlockInfo, UINT ContentKeySize, void const* pContentKey, UINT IVSize, void* pIV)
{
    pCryptoSession = unwrap(pCryptoSession);
    pSrcSurface = unwrap(pSrcSurface);
    pDstSurface = unwrap(pDstSurface);
    impl_->DecryptionBlt(pCryptoSession, pSrcSurface, pDstSurface, pEncryptedBlockInfo, ContentKeySize, pContentKey, IVSize, pIV);
    
    
}
     
void base_ID3D11VideoContext::StartSessionKeyRefresh(ID3D11CryptoSession* pCryptoSession, UINT RandomNumberSize, void* pRandomNumber)
{
    pCryptoSession = unwrap(pCryptoSession);
    impl_->StartSessionKeyRefresh(pCryptoSession, RandomNumberSize, pRandomNumber);
    
    
}
     
void base_ID3D11VideoContext::FinishSessionKeyRefresh(ID3D11CryptoSession* pCryptoSession)
{
    pCryptoSession = unwrap(pCryptoSession);
    impl_->FinishSessionKeyRefresh(pCryptoSession);
    
    
}
     
HRESULT base_ID3D11VideoContext::GetEncryptionBltKey(ID3D11CryptoSession* pCryptoSession, UINT KeySize, void* pReadbackKey)
{
    pCryptoSession = unwrap(pCryptoSession);
    auto result_ = impl_->GetEncryptionBltKey(pCryptoSession, KeySize, pReadbackKey);
    
    return result_;
}
     
HRESULT base_ID3D11VideoContext::NegotiateAuthenticatedChannelKeyExchange(ID3D11AuthenticatedChannel* pChannel, UINT DataSize, void* pData)
{
    pChannel = unwrap(pChannel);
    auto result_ = impl_->NegotiateAuthenticatedChannelKeyExchange(pChannel, DataSize, pData);
    
    return result_;
}
     
HRESULT base_ID3D11VideoContext::QueryAuthenticatedChannel(ID3D11AuthenticatedChannel* pChannel, UINT InputSize, void const* pInput, UINT OutputSize, void* pOutput)
{
    pChannel = unwrap(pChannel);
    auto result_ = impl_->QueryAuthenticatedChannel(pChannel, InputSize, pInput, OutputSize, pOutput);
    
    return result_;
}
     
HRESULT base_ID3D11VideoContext::ConfigureAuthenticatedChannel(ID3D11AuthenticatedChannel* pChannel, UINT InputSize, void const* pInput, D3D11_AUTHENTICATED_CONFIGURE_OUTPUT* pOutput)
{
    pChannel = unwrap(pChannel);
    auto result_ = impl_->ConfigureAuthenticatedChannel(pChannel, InputSize, pInput, pOutput);
    
    return result_;
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamRotation(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_ROTATION Rotation)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorSetStreamRotation(pVideoProcessor, StreamIndex, Enable, Rotation);
    
    
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamRotation(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnable, D3D11_VIDEO_PROCESSOR_ROTATION* pRotation)
{
    pVideoProcessor = unwrap(pVideoProcessor);
    impl_->VideoProcessorGetStreamRotation(pVideoProcessor, StreamIndex, pEnable, pRotation);
    
    
}
     

void base_ID3D11VideoContext::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11VideoContext::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11VideoContext::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11VideoContext::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11VideoContext::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11VideoContext::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11VideoContext::Release()
{
    return parent_base_->Release();
}
     

ID3D11VideoContext *base_ID3D11VideoContext::impl() const
{
    return impl_;
}
      
