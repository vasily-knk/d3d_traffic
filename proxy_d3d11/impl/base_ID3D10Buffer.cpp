#include "stdafx.h"

#include "base_ID3D10Buffer.h"
#include "../wrappers.h"

ID3D10Buffer *unwrap_inner(ID3D10Buffer *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10Buffer *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10Buffer::base_ID3D10Buffer(ID3D10Buffer *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10Resource>(impl))
{

}

HRESULT base_ID3D10Buffer::Map(D3D10_MAP MapType, UINT MapFlags, void** ppData)
{
    
    auto result_ = impl_->Map(MapType, MapFlags, ppData);
    
    return result_;
}
     
void base_ID3D10Buffer::Unmap()
{
    
    impl_->Unmap();
    
    
}
     
void base_ID3D10Buffer::GetDesc(D3D10_BUFFER_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D10Buffer::GetType(D3D10_RESOURCE_DIMENSION* rType)
{
    return parent_base_->GetType(rType);
}
     
void base_ID3D10Buffer::SetEvictionPriority(UINT EvictionPriority)
{
    return parent_base_->SetEvictionPriority(EvictionPriority);
}
     
UINT base_ID3D10Buffer::GetEvictionPriority()
{
    return parent_base_->GetEvictionPriority();
}
     
void base_ID3D10Buffer::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10Buffer::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10Buffer::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10Buffer::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10Buffer::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10Buffer::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10Buffer::Release()
{
    return parent_base_->Release();
}
     

ID3D10Buffer *base_ID3D10Buffer::impl() const
{
    return impl_;
}
      
