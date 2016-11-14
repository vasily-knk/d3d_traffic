#include "stdafx.h"

#include "base_ID3D10Resource.h"
#include "../wrappers.h"

ID3D10Resource *unwrap_inner(ID3D10Resource *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10Resource *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10Resource::base_ID3D10Resource(ID3D10Resource *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10DeviceChild>(impl))
{

}

void base_ID3D10Resource::GetType(D3D10_RESOURCE_DIMENSION* rType)
{
    
    impl_->GetType(rType);
    
    
}
     
void base_ID3D10Resource::SetEvictionPriority(UINT EvictionPriority)
{
    
    impl_->SetEvictionPriority(EvictionPriority);
    
    
}
     
UINT base_ID3D10Resource::GetEvictionPriority()
{
    
    auto result_ = impl_->GetEvictionPriority();
    
    return result_;
}
     

void base_ID3D10Resource::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10Resource::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10Resource::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10Resource::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10Resource::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10Resource::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10Resource::Release()
{
    return parent_base_->Release();
}
     

ID3D10Resource *base_ID3D10Resource::impl() const
{
    return impl_;
}
      
