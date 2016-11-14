#include "stdafx.h"

#include "base_ID3D10Texture1D.h"
#include "../wrappers.h"

ID3D10Texture1D *unwrap_inner(ID3D10Texture1D *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10Texture1D *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10Texture1D::base_ID3D10Texture1D(ID3D10Texture1D *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10Resource>(impl))
{

}

HRESULT base_ID3D10Texture1D::Map(UINT Subresource, D3D10_MAP MapType, UINT MapFlags, void** ppData)
{
    
    auto result_ = impl_->Map(Subresource, MapType, MapFlags, ppData);
    
    return result_;
}
     
void base_ID3D10Texture1D::Unmap(UINT Subresource)
{
    
    impl_->Unmap(Subresource);
    
    
}
     
void base_ID3D10Texture1D::GetDesc(D3D10_TEXTURE1D_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D10Texture1D::GetType(D3D10_RESOURCE_DIMENSION* rType)
{
    return parent_base_->GetType(rType);
}
     
void base_ID3D10Texture1D::SetEvictionPriority(UINT EvictionPriority)
{
    return parent_base_->SetEvictionPriority(EvictionPriority);
}
     
UINT base_ID3D10Texture1D::GetEvictionPriority()
{
    return parent_base_->GetEvictionPriority();
}
     
void base_ID3D10Texture1D::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10Texture1D::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10Texture1D::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10Texture1D::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10Texture1D::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10Texture1D::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10Texture1D::Release()
{
    return parent_base_->Release();
}
     

ID3D10Texture1D *base_ID3D10Texture1D::impl() const
{
    return impl_;
}
      
