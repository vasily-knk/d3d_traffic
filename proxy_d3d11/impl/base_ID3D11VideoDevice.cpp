#include "stdafx.h"

#include "base_ID3D11VideoDevice.h"
#include "../wrappers.h"

base_ID3D11VideoDevice::base_ID3D11VideoDevice(ID3D11VideoDevice *impl)
    : impl_IUnknown(impl)
    , impl_(impl)
{

}

HRESULT base_ID3D11VideoDevice::CreateVideoDecoder(D3D11_VIDEO_DECODER_DESC const* pVideoDesc, D3D11_VIDEO_DECODER_CONFIG const* pConfig, ID3D11VideoDecoder** ppDecoder)
{
    
    auto result_ = impl_->CreateVideoDecoder(pVideoDesc, pConfig, ppDecoder);
    if (ppDecoder != nullptr) *ppDecoder = wrap(*ppDecoder);
    return result_;
}
     
HRESULT base_ID3D11VideoDevice::CreateVideoProcessor(ID3D11VideoProcessorEnumerator* pEnum, UINT RateConversionIndex, ID3D11VideoProcessor** ppVideoProcessor)
{
    pEnum = unwrap(pEnum);
    auto result_ = impl_->CreateVideoProcessor(pEnum, RateConversionIndex, ppVideoProcessor);
    if (ppVideoProcessor != nullptr) *ppVideoProcessor = wrap(*ppVideoProcessor);
    return result_;
}
     
HRESULT base_ID3D11VideoDevice::CreateAuthenticatedChannel(D3D11_AUTHENTICATED_CHANNEL_TYPE ChannelType, ID3D11AuthenticatedChannel** ppAuthenticatedChannel)
{
    
    auto result_ = impl_->CreateAuthenticatedChannel(ChannelType, ppAuthenticatedChannel);
    if (ppAuthenticatedChannel != nullptr) *ppAuthenticatedChannel = wrap(*ppAuthenticatedChannel);
    return result_;
}
     
HRESULT base_ID3D11VideoDevice::CreateCryptoSession(GUID const* pCryptoType, GUID const* pDecoderProfile, GUID const* pKeyExchangeType, ID3D11CryptoSession** ppCryptoSession)
{
    
    auto result_ = impl_->CreateCryptoSession(pCryptoType, pDecoderProfile, pKeyExchangeType, ppCryptoSession);
    if (ppCryptoSession != nullptr) *ppCryptoSession = wrap(*ppCryptoSession);
    return result_;
}
     
HRESULT base_ID3D11VideoDevice::CreateVideoDecoderOutputView(ID3D11Resource* pResource, D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC const* pDesc, ID3D11VideoDecoderOutputView** ppVDOVView)
{
    pResource = unwrap(pResource);
    auto result_ = impl_->CreateVideoDecoderOutputView(pResource, pDesc, ppVDOVView);
    if (ppVDOVView != nullptr) *ppVDOVView = wrap(*ppVDOVView);
    return result_;
}
     
HRESULT base_ID3D11VideoDevice::CreateVideoProcessorInputView(ID3D11Resource* pResource, ID3D11VideoProcessorEnumerator* pEnum, D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC const* pDesc, ID3D11VideoProcessorInputView** ppVPIView)
{
    pResource = unwrap(pResource);
    pEnum = unwrap(pEnum);
    auto result_ = impl_->CreateVideoProcessorInputView(pResource, pEnum, pDesc, ppVPIView);
    if (ppVPIView != nullptr) *ppVPIView = wrap(*ppVPIView);
    return result_;
}
     
HRESULT base_ID3D11VideoDevice::CreateVideoProcessorOutputView(ID3D11Resource* pResource, ID3D11VideoProcessorEnumerator* pEnum, D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC const* pDesc, ID3D11VideoProcessorOutputView** ppVPOView)
{
    pResource = unwrap(pResource);
    pEnum = unwrap(pEnum);
    auto result_ = impl_->CreateVideoProcessorOutputView(pResource, pEnum, pDesc, ppVPOView);
    if (ppVPOView != nullptr) *ppVPOView = wrap(*ppVPOView);
    return result_;
}
     
HRESULT base_ID3D11VideoDevice::CreateVideoProcessorEnumerator(D3D11_VIDEO_PROCESSOR_CONTENT_DESC const* pDesc, ID3D11VideoProcessorEnumerator** ppEnum)
{
    
    auto result_ = impl_->CreateVideoProcessorEnumerator(pDesc, ppEnum);
    if (ppEnum != nullptr) *ppEnum = wrap(*ppEnum);
    return result_;
}
     
UINT base_ID3D11VideoDevice::GetVideoDecoderProfileCount()
{
    
    auto result_ = impl_->GetVideoDecoderProfileCount();
    
    return result_;
}
     
HRESULT base_ID3D11VideoDevice::GetVideoDecoderProfile(UINT Index, GUID* pDecoderProfile)
{
    
    auto result_ = impl_->GetVideoDecoderProfile(Index, pDecoderProfile);
    
    return result_;
}
     
HRESULT base_ID3D11VideoDevice::CheckVideoDecoderFormat(GUID const* pDecoderProfile, DXGI_FORMAT Format, BOOL* pSupported)
{
    
    auto result_ = impl_->CheckVideoDecoderFormat(pDecoderProfile, Format, pSupported);
    
    return result_;
}
     
HRESULT base_ID3D11VideoDevice::GetVideoDecoderConfigCount(D3D11_VIDEO_DECODER_DESC const* pDesc, UINT* pCount)
{
    
    auto result_ = impl_->GetVideoDecoderConfigCount(pDesc, pCount);
    
    return result_;
}
     
HRESULT base_ID3D11VideoDevice::GetVideoDecoderConfig(D3D11_VIDEO_DECODER_DESC const* pDesc, UINT Index, D3D11_VIDEO_DECODER_CONFIG* pConfig)
{
    
    auto result_ = impl_->GetVideoDecoderConfig(pDesc, Index, pConfig);
    
    return result_;
}
     
HRESULT base_ID3D11VideoDevice::GetContentProtectionCaps(GUID const* pCryptoType, GUID const* pDecoderProfile, D3D11_VIDEO_CONTENT_PROTECTION_CAPS* pCaps)
{
    
    auto result_ = impl_->GetContentProtectionCaps(pCryptoType, pDecoderProfile, pCaps);
    
    return result_;
}
     
HRESULT base_ID3D11VideoDevice::CheckCryptoKeyExchange(GUID const* pCryptoType, GUID const* pDecoderProfile, UINT Index, GUID* pKeyExchangeType)
{
    
    auto result_ = impl_->CheckCryptoKeyExchange(pCryptoType, pDecoderProfile, Index, pKeyExchangeType);
    
    return result_;
}
     
HRESULT base_ID3D11VideoDevice::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    
    auto result_ = impl_->SetPrivateData(guid, DataSize, pData);
    
    return result_;
}
     
HRESULT base_ID3D11VideoDevice::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    pData = unwrap(pData);
    auto result_ = impl_->SetPrivateDataInterface(guid, pData);
    
    return result_;
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
      
