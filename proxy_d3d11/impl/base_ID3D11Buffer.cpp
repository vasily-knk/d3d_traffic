#include "stdafx.h"

#include "base_ID3D11Buffer.h"
#include "../wrappers.h"

base_ID3D11Buffer::base_ID3D11Buffer(ID3D11Buffer *impl)
    : impl_ID3D11Resource(impl)
    , impl_(impl)
{

}

void base_ID3D11Buffer::GetDesc(D3D11_BUFFER_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D11Buffer::GetType(D3D11_RESOURCE_DIMENSION* pResourceDimension)
{
    return impl_ID3D11Resource::GetType(pResourceDimension);
}
     
void base_ID3D11Buffer::SetEvictionPriority(UINT EvictionPriority)
{
    return impl_ID3D11Resource::SetEvictionPriority(EvictionPriority);
}
     
UINT base_ID3D11Buffer::GetEvictionPriority()
{
    return impl_ID3D11Resource::GetEvictionPriority();
}
     
void base_ID3D11Buffer::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11Resource::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11Buffer::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11Resource::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11Buffer::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11Resource::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11Buffer::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11Resource::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11Buffer::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11Resource::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11Buffer::AddRef()
{
    return impl_ID3D11Resource::AddRef();
}
     
ULONG base_ID3D11Buffer::Release()
{
    return impl_ID3D11Resource::Release();
}
     

ID3D11Buffer *base_ID3D11Buffer::impl() const
{
    return impl_;
}
      
