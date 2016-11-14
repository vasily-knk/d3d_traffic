#include "stdafx.h"

#include "base_ID3D11Resource.h"
#include "../wrappers.h"

ID3D11Resource *unwrap_inner(ID3D11Resource *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11Resource *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D11Resource::base_ID3D11Resource(ID3D11Resource *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}

void base_ID3D11Resource::GetType(D3D11_RESOURCE_DIMENSION* pResourceDimension)
{
    
    impl_->GetType(pResourceDimension);
    
    
}
     
void base_ID3D11Resource::SetEvictionPriority(UINT EvictionPriority)
{
    
    impl_->SetEvictionPriority(EvictionPriority);
    
    
}
     
UINT base_ID3D11Resource::GetEvictionPriority()
{
    
    auto result_ = impl_->GetEvictionPriority();
    
    return result_;
}
     

void base_ID3D11Resource::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11Resource::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11Resource::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11Resource::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11Resource::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11Resource::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11Resource::Release()
{
    return parent_base_->Release();
}
     

ID3D11Resource *base_ID3D11Resource::impl() const
{
    return impl_;
}
      
