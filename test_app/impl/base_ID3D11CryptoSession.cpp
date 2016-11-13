#include "stdafx.h"

#include "base_ID3D11CryptoSession.h"
#include "../wrappers.h"

base_ID3D11CryptoSession::base_ID3D11CryptoSession(ID3D11CryptoSession *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
{

}

void base_ID3D11CryptoSession::GetCryptoType(GUID* pCryptoType)
{
    
    impl_->GetCryptoType(pCryptoType);
    
    
}
     
void base_ID3D11CryptoSession::GetDecoderProfile(GUID* pDecoderProfile)
{
    
    impl_->GetDecoderProfile(pDecoderProfile);
    
    
}
     
HRESULT base_ID3D11CryptoSession::GetCertificateSize(UINT* pCertificateSize)
{
    
    auto result_ = impl_->GetCertificateSize(pCertificateSize);
    
    return result_;
}
     
HRESULT base_ID3D11CryptoSession::GetCertificate(UINT CertificateSize, BYTE* pCertificate)
{
    
    auto result_ = impl_->GetCertificate(CertificateSize, pCertificate);
    
    return result_;
}
     
void base_ID3D11CryptoSession::GetCryptoSessionHandle(HANDLE* pCryptoSessionHandle)
{
    
    impl_->GetCryptoSessionHandle(pCryptoSessionHandle);
    
    
}
     

void base_ID3D11CryptoSession::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11CryptoSession::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11CryptoSession::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11CryptoSession::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11CryptoSession::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11CryptoSession::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11CryptoSession::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11CryptoSession *base_ID3D11CryptoSession::impl() const
{
    return impl_;
}
      
