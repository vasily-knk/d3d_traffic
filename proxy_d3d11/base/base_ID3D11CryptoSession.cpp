#include "stdafx.h"

#include "base_ID3D11CryptoSession.h"
#include "../wrappers.h"

ID3D11CryptoSession *unwrap_inner(ID3D11CryptoSession *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11CryptoSession *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11CryptoSession *create_wrapper_inner(ID3D11CryptoSession *impl)
{
    return new base_ID3D11CryptoSession(impl);
}
       

base_ID3D11CryptoSession::base_ID3D11CryptoSession(ID3D11CryptoSession *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
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
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11CryptoSession::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11CryptoSession::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11CryptoSession::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11CryptoSession::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11CryptoSession::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11CryptoSession::Release()
{
    return parent_base_->Release();
}
     

ID3D11CryptoSession *base_ID3D11CryptoSession::impl() const
{
    return impl_;
}
      
