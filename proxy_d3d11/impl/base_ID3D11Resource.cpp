#include "stdafx.h"

#include "base_ID3D11Resource.h"
#include "../wrappers.h"

base_ID3D11Resource::base_ID3D11Resource(ID3D11Resource *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
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
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11Resource::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11Resource::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11Resource::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11Resource::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11Resource::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11Resource::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11Resource *base_ID3D11Resource::impl() const
{
    return impl_;
}
      
