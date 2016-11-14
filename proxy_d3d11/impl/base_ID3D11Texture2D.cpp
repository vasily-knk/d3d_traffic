#include "stdafx.h"

#include "base_ID3D11Texture2D.h"
#include "../wrappers.h"

ID3D11Texture2D *unwrap_inner(ID3D11Texture2D *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11Texture2D *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D11Texture2D::base_ID3D11Texture2D(ID3D11Texture2D *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11Resource>(impl))
{

}

void base_ID3D11Texture2D::GetDesc(D3D11_TEXTURE2D_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D11Texture2D::GetType(D3D11_RESOURCE_DIMENSION* pResourceDimension)
{
    return parent_base_->GetType(pResourceDimension);
}
     
void base_ID3D11Texture2D::SetEvictionPriority(UINT EvictionPriority)
{
    return parent_base_->SetEvictionPriority(EvictionPriority);
}
     
UINT base_ID3D11Texture2D::GetEvictionPriority()
{
    return parent_base_->GetEvictionPriority();
}
     
void base_ID3D11Texture2D::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11Texture2D::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11Texture2D::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11Texture2D::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11Texture2D::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11Texture2D::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11Texture2D::Release()
{
    return parent_base_->Release();
}
     

ID3D11Texture2D *base_ID3D11Texture2D::impl() const
{
    return impl_;
}
      
