#include "stdafx.h"

#include "base_ID3D11AuthenticatedChannel.h"
#include "../wrappers.h"

base_ID3D11AuthenticatedChannel::base_ID3D11AuthenticatedChannel(ID3D11AuthenticatedChannel *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
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
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11AuthenticatedChannel::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11AuthenticatedChannel::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11AuthenticatedChannel::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11AuthenticatedChannel::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11AuthenticatedChannel::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11AuthenticatedChannel::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11AuthenticatedChannel *base_ID3D11AuthenticatedChannel::impl() const
{
    return impl_;
}
      
