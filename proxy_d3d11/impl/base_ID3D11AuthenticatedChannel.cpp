#include "stdafx.h"

#include "base_ID3D11AuthenticatedChannel.h"
#include "../wrappers.h"

ID3D11AuthenticatedChannel *unwrap_inner(ID3D11AuthenticatedChannel *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11AuthenticatedChannel *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D11AuthenticatedChannel::base_ID3D11AuthenticatedChannel(ID3D11AuthenticatedChannel *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}

HRESULT base_ID3D11AuthenticatedChannel::GetCertificateSize(UINT* pCertificateSize)
{
    
    auto result_ = impl_->GetCertificateSize(pCertificateSize);
    
    return result_;
}
     
HRESULT base_ID3D11AuthenticatedChannel::GetCertificate(UINT CertificateSize, BYTE* pCertificate)
{
    
    auto result_ = impl_->GetCertificate(CertificateSize, pCertificate);
    
    return result_;
}
     
void base_ID3D11AuthenticatedChannel::GetChannelHandle(HANDLE* pChannelHandle)
{
    
    impl_->GetChannelHandle(pChannelHandle);
    
    
}
     

void base_ID3D11AuthenticatedChannel::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11AuthenticatedChannel::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11AuthenticatedChannel::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11AuthenticatedChannel::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11AuthenticatedChannel::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11AuthenticatedChannel::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11AuthenticatedChannel::Release()
{
    return parent_base_->Release();
}
     

ID3D11AuthenticatedChannel *base_ID3D11AuthenticatedChannel::impl() const
{
    return impl_;
}
      
