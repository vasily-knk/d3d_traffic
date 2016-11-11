#include "stdafx.h"

#include "base_ID3D11VideoDevice.h"

base_ID3D11VideoDevice::base_ID3D11VideoDevice(ID3D11VideoDevice *impl)
    : impl_IUnknown(impl)
    , impl_(impl)
{

}

HRESULT base_ID3D11VideoDevice::CreateVideoDecoder(D3D11_VIDEO_DECODER_DESC const* pVideoDesc, D3D11_VIDEO_DECODER_CONFIG const* pConfig, ID3D11VideoDecoder** ppDecoder)
{
    return impl_->CreateVideoDecoder(pVideoDesc, pConfig, ppDecoder);
}
     
HRESULT base_ID3D11VideoDevice::CreateVideoProcessor(ID3D11VideoProcessorEnumerator* pEnum, UINT RateConversionIndex, ID3D11VideoProcessor** ppVideoProcessor)
{
    return impl_->CreateVideoProcessor(pEnum, RateConversionIndex, ppVideoProcessor);
}
     
HRESULT base_ID3D11VideoDevice::CreateAuthenticatedChannel(D3D11_AUTHENTICATED_CHANNEL_TYPE ChannelType, ID3D11AuthenticatedChannel** ppAuthenticatedChannel)
{
    return impl_->CreateAuthenticatedChannel(ChannelType, ppAuthenticatedChannel);
}
     
HRESULT base_ID3D11VideoDevice::CreateCryptoSession(GUID const* pCryptoType, GUID const* pDecoderProfile, GUID const* pKeyExchangeType, ID3D11CryptoSession** ppCryptoSession)
{
    return impl_->CreateCryptoSession(pCryptoType, pDecoderProfile, pKeyExchangeType, ppCryptoSession);
}
     
HRESULT base_ID3D11VideoDevice::CreateVideoDecoderOutputView(ID3D11Resource* pResource, D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC const* pDesc, ID3D11VideoDecoderOutputView** ppVDOVView)
{
    return impl_->CreateVideoDecoderOutputView(pResource, pDesc, ppVDOVView);
}
     
HRESULT base_ID3D11VideoDevice::CreateVideoProcessorInputView(ID3D11Resource* pResource, ID3D11VideoProcessorEnumerator* pEnum, D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC const* pDesc, ID3D11VideoProcessorInputView** ppVPIView)
{
    return impl_->CreateVideoProcessorInputView(pResource, pEnum, pDesc, ppVPIView);
}
     
HRESULT base_ID3D11VideoDevice::CreateVideoProcessorOutputView(ID3D11Resource* pResource, ID3D11VideoProcessorEnumerator* pEnum, D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC const* pDesc, ID3D11VideoProcessorOutputView** ppVPOView)
{
    return impl_->CreateVideoProcessorOutputView(pResource, pEnum, pDesc, ppVPOView);
}
     
HRESULT base_ID3D11VideoDevice::CreateVideoProcessorEnumerator(D3D11_VIDEO_PROCESSOR_CONTENT_DESC const* pDesc, ID3D11VideoProcessorEnumerator** ppEnum)
{
    return impl_->CreateVideoProcessorEnumerator(pDesc, ppEnum);
}
     
UINT base_ID3D11VideoDevice::GetVideoDecoderProfileCount()
{
    return impl_->GetVideoDecoderProfileCount();
}
     
HRESULT base_ID3D11VideoDevice::GetVideoDecoderProfile(UINT Index, GUID* pDecoderProfile)
{
    return impl_->GetVideoDecoderProfile(Index, pDecoderProfile);
}
     
HRESULT base_ID3D11VideoDevice::CheckVideoDecoderFormat(GUID const* pDecoderProfile, DXGI_FORMAT Format, BOOL* pSupported)
{
    return impl_->CheckVideoDecoderFormat(pDecoderProfile, Format, pSupported);
}
     
HRESULT base_ID3D11VideoDevice::GetVideoDecoderConfigCount(D3D11_VIDEO_DECODER_DESC const* pDesc, UINT* pCount)
{
    return impl_->GetVideoDecoderConfigCount(pDesc, pCount);
}
     
HRESULT base_ID3D11VideoDevice::GetVideoDecoderConfig(D3D11_VIDEO_DECODER_DESC const* pDesc, UINT Index, D3D11_VIDEO_DECODER_CONFIG* pConfig)
{
    return impl_->GetVideoDecoderConfig(pDesc, Index, pConfig);
}
     
HRESULT base_ID3D11VideoDevice::GetContentProtectionCaps(GUID const* pCryptoType, GUID const* pDecoderProfile, D3D11_VIDEO_CONTENT_PROTECTION_CAPS* pCaps)
{
    return impl_->GetContentProtectionCaps(pCryptoType, pDecoderProfile, pCaps);
}
     
HRESULT base_ID3D11VideoDevice::CheckCryptoKeyExchange(GUID const* pCryptoType, GUID const* pDecoderProfile, UINT Index, GUID* pKeyExchangeType)
{
    return impl_->CheckCryptoKeyExchange(pCryptoType, pDecoderProfile, Index, pKeyExchangeType);
}
     
HRESULT base_ID3D11VideoDevice::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11VideoDevice::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_->SetPrivateDataInterface(guid, pData);
}
     

HRESULT base_ID3D11VideoDevice::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_IUnknown::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11VideoDevice::AddRef()
{
    return impl_IUnknown::AddRef();
}
     
ULONG base_ID3D11VideoDevice::Release()
{
    return impl_IUnknown::Release();
}
     

ID3D11VideoDevice *base_ID3D11VideoDevice::impl() const
{
    return impl_;
}
      
