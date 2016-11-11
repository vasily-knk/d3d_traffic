#include "stdafx.h"

#include "base_ID3D11VideoContext.h"

base_ID3D11VideoContext::base_ID3D11VideoContext(ID3D11VideoContext *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
{

}

HRESULT base_ID3D11VideoContext::GetDecoderBuffer(ID3D11VideoDecoder* pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, UINT* pBufferSize, void** ppBuffer)
{
    return impl_->GetDecoderBuffer(pDecoder, Type, pBufferSize, ppBuffer);
}
     
HRESULT base_ID3D11VideoContext::ReleaseDecoderBuffer(ID3D11VideoDecoder* pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type)
{
    return impl_->ReleaseDecoderBuffer(pDecoder, Type);
}
     
HRESULT base_ID3D11VideoContext::DecoderBeginFrame(ID3D11VideoDecoder* pDecoder, ID3D11VideoDecoderOutputView* pView, UINT ContentKeySize, void const* pContentKey)
{
    return impl_->DecoderBeginFrame(pDecoder, pView, ContentKeySize, pContentKey);
}
     
HRESULT base_ID3D11VideoContext::DecoderEndFrame(ID3D11VideoDecoder* pDecoder)
{
    return impl_->DecoderEndFrame(pDecoder);
}
     
HRESULT base_ID3D11VideoContext::SubmitDecoderBuffers(ID3D11VideoDecoder* pDecoder, UINT NumBuffers, D3D11_VIDEO_DECODER_BUFFER_DESC const* pBufferDesc)
{
    return impl_->SubmitDecoderBuffers(pDecoder, NumBuffers, pBufferDesc);
}
     
APP_DEPRECATED_HRESULT base_ID3D11VideoContext::DecoderExtension(ID3D11VideoDecoder* pDecoder, D3D11_VIDEO_DECODER_EXTENSION const* pExtensionData)
{
    return impl_->DecoderExtension(pDecoder, pExtensionData);
}
     
void base_ID3D11VideoContext::VideoProcessorSetOutputTargetRect(ID3D11VideoProcessor* pVideoProcessor, BOOL Enable, RECT const* pRect)
{
    return impl_->VideoProcessorSetOutputTargetRect(pVideoProcessor, Enable, pRect);
}
     
void base_ID3D11VideoContext::VideoProcessorSetOutputBackgroundColor(ID3D11VideoProcessor* pVideoProcessor, BOOL YCbCr, D3D11_VIDEO_COLOR const* pColor)
{
    return impl_->VideoProcessorSetOutputBackgroundColor(pVideoProcessor, YCbCr, pColor);
}
     
void base_ID3D11VideoContext::VideoProcessorSetOutputColorSpace(ID3D11VideoProcessor* pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE const* pColorSpace)
{
    return impl_->VideoProcessorSetOutputColorSpace(pVideoProcessor, pColorSpace);
}
     
void base_ID3D11VideoContext::VideoProcessorSetOutputAlphaFillMode(ID3D11VideoProcessor* pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode, UINT StreamIndex)
{
    return impl_->VideoProcessorSetOutputAlphaFillMode(pVideoProcessor, AlphaFillMode, StreamIndex);
}
     
void base_ID3D11VideoContext::VideoProcessorSetOutputConstriction(ID3D11VideoProcessor* pVideoProcessor, BOOL Enable, SIZE Size)
{
    return impl_->VideoProcessorSetOutputConstriction(pVideoProcessor, Enable, Size);
}
     
void base_ID3D11VideoContext::VideoProcessorSetOutputStereoMode(ID3D11VideoProcessor* pVideoProcessor, BOOL Enable)
{
    return impl_->VideoProcessorSetOutputStereoMode(pVideoProcessor, Enable);
}
     
APP_DEPRECATED_HRESULT base_ID3D11VideoContext::VideoProcessorSetOutputExtension(ID3D11VideoProcessor* pVideoProcessor, GUID const* pExtensionGuid, UINT DataSize, void* pData)
{
    return impl_->VideoProcessorSetOutputExtension(pVideoProcessor, pExtensionGuid, DataSize, pData);
}
     
void base_ID3D11VideoContext::VideoProcessorGetOutputTargetRect(ID3D11VideoProcessor* pVideoProcessor, BOOL* Enabled, RECT* pRect)
{
    return impl_->VideoProcessorGetOutputTargetRect(pVideoProcessor, Enabled, pRect);
}
     
void base_ID3D11VideoContext::VideoProcessorGetOutputBackgroundColor(ID3D11VideoProcessor* pVideoProcessor, BOOL* pYCbCr, D3D11_VIDEO_COLOR* pColor)
{
    return impl_->VideoProcessorGetOutputBackgroundColor(pVideoProcessor, pYCbCr, pColor);
}
     
void base_ID3D11VideoContext::VideoProcessorGetOutputColorSpace(ID3D11VideoProcessor* pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE* pColorSpace)
{
    return impl_->VideoProcessorGetOutputColorSpace(pVideoProcessor, pColorSpace);
}
     
void base_ID3D11VideoContext::VideoProcessorGetOutputAlphaFillMode(ID3D11VideoProcessor* pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE* pAlphaFillMode, UINT* pStreamIndex)
{
    return impl_->VideoProcessorGetOutputAlphaFillMode(pVideoProcessor, pAlphaFillMode, pStreamIndex);
}
     
void base_ID3D11VideoContext::VideoProcessorGetOutputConstriction(ID3D11VideoProcessor* pVideoProcessor, BOOL* pEnabled, SIZE* pSize)
{
    return impl_->VideoProcessorGetOutputConstriction(pVideoProcessor, pEnabled, pSize);
}
     
void base_ID3D11VideoContext::VideoProcessorGetOutputStereoMode(ID3D11VideoProcessor* pVideoProcessor, BOOL* pEnabled)
{
    return impl_->VideoProcessorGetOutputStereoMode(pVideoProcessor, pEnabled);
}
     
APP_DEPRECATED_HRESULT base_ID3D11VideoContext::VideoProcessorGetOutputExtension(ID3D11VideoProcessor* pVideoProcessor, GUID const* pExtensionGuid, UINT DataSize, void* pData)
{
    return impl_->VideoProcessorGetOutputExtension(pVideoProcessor, pExtensionGuid, DataSize, pData);
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamFrameFormat(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT FrameFormat)
{
    return impl_->VideoProcessorSetStreamFrameFormat(pVideoProcessor, StreamIndex, FrameFormat);
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamColorSpace(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE const* pColorSpace)
{
    return impl_->VideoProcessorSetStreamColorSpace(pVideoProcessor, StreamIndex, pColorSpace);
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamOutputRate(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate, BOOL RepeatFrame, DXGI_RATIONAL const* pCustomRate)
{
    return impl_->VideoProcessorSetStreamOutputRate(pVideoProcessor, StreamIndex, OutputRate, RepeatFrame, pCustomRate);
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamSourceRect(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, RECT const* pRect)
{
    return impl_->VideoProcessorSetStreamSourceRect(pVideoProcessor, StreamIndex, Enable, pRect);
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamDestRect(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, RECT const* pRect)
{
    return impl_->VideoProcessorSetStreamDestRect(pVideoProcessor, StreamIndex, Enable, pRect);
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamAlpha(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Alpha)
{
    return impl_->VideoProcessorSetStreamAlpha(pVideoProcessor, StreamIndex, Enable, Alpha);
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamPalette(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, UINT Count, UINT const* pEntries)
{
    return impl_->VideoProcessorSetStreamPalette(pVideoProcessor, StreamIndex, Count, pEntries);
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamPixelAspectRatio(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, DXGI_RATIONAL const* pSourceAspectRatio, DXGI_RATIONAL const* pDestinationAspectRatio)
{
    return impl_->VideoProcessorSetStreamPixelAspectRatio(pVideoProcessor, StreamIndex, Enable, pSourceAspectRatio, pDestinationAspectRatio);
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamLumaKey(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Lower, FLOAT Upper)
{
    return impl_->VideoProcessorSetStreamLumaKey(pVideoProcessor, StreamIndex, Enable, Lower, Upper);
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamStereoFormat(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format, BOOL LeftViewFrame0, BOOL BaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode, int MonoOffset)
{
    return impl_->VideoProcessorSetStreamStereoFormat(pVideoProcessor, StreamIndex, Enable, Format, LeftViewFrame0, BaseViewFrame0, FlipMode, MonoOffset);
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamAutoProcessingMode(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable)
{
    return impl_->VideoProcessorSetStreamAutoProcessingMode(pVideoProcessor, StreamIndex, Enable);
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamFilter(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL Enable, int Level)
{
    return impl_->VideoProcessorSetStreamFilter(pVideoProcessor, StreamIndex, Filter, Enable, Level);
}
     
APP_DEPRECATED_HRESULT base_ID3D11VideoContext::VideoProcessorSetStreamExtension(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, GUID const* pExtensionGuid, UINT DataSize, void* pData)
{
    return impl_->VideoProcessorSetStreamExtension(pVideoProcessor, StreamIndex, pExtensionGuid, DataSize, pData);
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamFrameFormat(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT* pFrameFormat)
{
    return impl_->VideoProcessorGetStreamFrameFormat(pVideoProcessor, StreamIndex, pFrameFormat);
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamColorSpace(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE* pColorSpace)
{
    return impl_->VideoProcessorGetStreamColorSpace(pVideoProcessor, StreamIndex, pColorSpace);
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamOutputRate(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE* pOutputRate, BOOL* pRepeatFrame, DXGI_RATIONAL* pCustomRate)
{
    return impl_->VideoProcessorGetStreamOutputRate(pVideoProcessor, StreamIndex, pOutputRate, pRepeatFrame, pCustomRate);
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamSourceRect(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled, RECT* pRect)
{
    return impl_->VideoProcessorGetStreamSourceRect(pVideoProcessor, StreamIndex, pEnabled, pRect);
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamDestRect(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled, RECT* pRect)
{
    return impl_->VideoProcessorGetStreamDestRect(pVideoProcessor, StreamIndex, pEnabled, pRect);
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamAlpha(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled, FLOAT* pAlpha)
{
    return impl_->VideoProcessorGetStreamAlpha(pVideoProcessor, StreamIndex, pEnabled, pAlpha);
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamPalette(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, UINT Count, UINT* pEntries)
{
    return impl_->VideoProcessorGetStreamPalette(pVideoProcessor, StreamIndex, Count, pEntries);
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamPixelAspectRatio(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled, DXGI_RATIONAL* pSourceAspectRatio, DXGI_RATIONAL* pDestinationAspectRatio)
{
    return impl_->VideoProcessorGetStreamPixelAspectRatio(pVideoProcessor, StreamIndex, pEnabled, pSourceAspectRatio, pDestinationAspectRatio);
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamLumaKey(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled, FLOAT* pLower, FLOAT* pUpper)
{
    return impl_->VideoProcessorGetStreamLumaKey(pVideoProcessor, StreamIndex, pEnabled, pLower, pUpper);
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamStereoFormat(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT* pFormat, BOOL* pLeftViewFrame0, BOOL* pBaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE* pFlipMode, int* MonoOffset)
{
    return impl_->VideoProcessorGetStreamStereoFormat(pVideoProcessor, StreamIndex, pEnable, pFormat, pLeftViewFrame0, pBaseViewFrame0, pFlipMode, MonoOffset);
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamAutoProcessingMode(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnabled)
{
    return impl_->VideoProcessorGetStreamAutoProcessingMode(pVideoProcessor, StreamIndex, pEnabled);
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamFilter(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL* pEnabled, int* pLevel)
{
    return impl_->VideoProcessorGetStreamFilter(pVideoProcessor, StreamIndex, Filter, pEnabled, pLevel);
}
     
APP_DEPRECATED_HRESULT base_ID3D11VideoContext::VideoProcessorGetStreamExtension(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, GUID const* pExtensionGuid, UINT DataSize, void* pData)
{
    return impl_->VideoProcessorGetStreamExtension(pVideoProcessor, StreamIndex, pExtensionGuid, DataSize, pData);
}
     
HRESULT base_ID3D11VideoContext::VideoProcessorBlt(ID3D11VideoProcessor* pVideoProcessor, ID3D11VideoProcessorOutputView* pView, UINT OutputFrame, UINT StreamCount, D3D11_VIDEO_PROCESSOR_STREAM const* pStreams)
{
    return impl_->VideoProcessorBlt(pVideoProcessor, pView, OutputFrame, StreamCount, pStreams);
}
     
HRESULT base_ID3D11VideoContext::NegotiateCryptoSessionKeyExchange(ID3D11CryptoSession* pCryptoSession, UINT DataSize, void* pData)
{
    return impl_->NegotiateCryptoSessionKeyExchange(pCryptoSession, DataSize, pData);
}
     
void base_ID3D11VideoContext::EncryptionBlt(ID3D11CryptoSession* pCryptoSession, ID3D11Texture2D* pSrcSurface, ID3D11Texture2D* pDstSurface, UINT IVSize, void* pIV)
{
    return impl_->EncryptionBlt(pCryptoSession, pSrcSurface, pDstSurface, IVSize, pIV);
}
     
void base_ID3D11VideoContext::DecryptionBlt(ID3D11CryptoSession* pCryptoSession, ID3D11Texture2D* pSrcSurface, ID3D11Texture2D* pDstSurface, D3D11_ENCRYPTED_BLOCK_INFO* pEncryptedBlockInfo, UINT ContentKeySize, void const* pContentKey, UINT IVSize, void* pIV)
{
    return impl_->DecryptionBlt(pCryptoSession, pSrcSurface, pDstSurface, pEncryptedBlockInfo, ContentKeySize, pContentKey, IVSize, pIV);
}
     
void base_ID3D11VideoContext::StartSessionKeyRefresh(ID3D11CryptoSession* pCryptoSession, UINT RandomNumberSize, void* pRandomNumber)
{
    return impl_->StartSessionKeyRefresh(pCryptoSession, RandomNumberSize, pRandomNumber);
}
     
void base_ID3D11VideoContext::FinishSessionKeyRefresh(ID3D11CryptoSession* pCryptoSession)
{
    return impl_->FinishSessionKeyRefresh(pCryptoSession);
}
     
HRESULT base_ID3D11VideoContext::GetEncryptionBltKey(ID3D11CryptoSession* pCryptoSession, UINT KeySize, void* pReadbackKey)
{
    return impl_->GetEncryptionBltKey(pCryptoSession, KeySize, pReadbackKey);
}
     
HRESULT base_ID3D11VideoContext::NegotiateAuthenticatedChannelKeyExchange(ID3D11AuthenticatedChannel* pChannel, UINT DataSize, void* pData)
{
    return impl_->NegotiateAuthenticatedChannelKeyExchange(pChannel, DataSize, pData);
}
     
HRESULT base_ID3D11VideoContext::QueryAuthenticatedChannel(ID3D11AuthenticatedChannel* pChannel, UINT InputSize, void const* pInput, UINT OutputSize, void* pOutput)
{
    return impl_->QueryAuthenticatedChannel(pChannel, InputSize, pInput, OutputSize, pOutput);
}
     
HRESULT base_ID3D11VideoContext::ConfigureAuthenticatedChannel(ID3D11AuthenticatedChannel* pChannel, UINT InputSize, void const* pInput, D3D11_AUTHENTICATED_CONFIGURE_OUTPUT* pOutput)
{
    return impl_->ConfigureAuthenticatedChannel(pChannel, InputSize, pInput, pOutput);
}
     
void base_ID3D11VideoContext::VideoProcessorSetStreamRotation(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_ROTATION Rotation)
{
    return impl_->VideoProcessorSetStreamRotation(pVideoProcessor, StreamIndex, Enable, Rotation);
}
     
void base_ID3D11VideoContext::VideoProcessorGetStreamRotation(ID3D11VideoProcessor* pVideoProcessor, UINT StreamIndex, BOOL* pEnable, D3D11_VIDEO_PROCESSOR_ROTATION* pRotation)
{
    return impl_->VideoProcessorGetStreamRotation(pVideoProcessor, StreamIndex, pEnable, pRotation);
}
     

void base_ID3D11VideoContext::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11VideoContext::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11VideoContext::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11VideoContext::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11VideoContext::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11VideoContext::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11VideoContext::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11VideoContext *base_ID3D11VideoContext::impl() const
{
    return impl_;
}
      
