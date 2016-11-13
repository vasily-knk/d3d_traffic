#include "stdafx.h"

#include "base_ID3D11Texture2D.h"
#include "../wrappers.h"

base_ID3D11Texture2D::base_ID3D11Texture2D(ID3D11Texture2D *impl)
    : impl_ID3D11Resource(impl)
    , impl_(impl)
{

}

void base_ID3D11Texture2D::GetDesc(D3D11_TEXTURE2D_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D11Texture2D::GetType(D3D11_RESOURCE_DIMENSION* pResourceDimension)
{
    return impl_ID3D11Resource::GetType(pResourceDimension);
}
     
void base_ID3D11Texture2D::SetEvictionPriority(UINT EvictionPriority)
{
    return impl_ID3D11Resource::SetEvictionPriority(EvictionPriority);
}
     
UINT base_ID3D11Texture2D::GetEvictionPriority()
{
    return impl_ID3D11Resource::GetEvictionPriority();
}
     
void base_ID3D11Texture2D::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11Resource::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11Texture2D::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11Resource::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11Texture2D::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11Resource::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11Texture2D::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11Resource::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11Texture2D::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11Resource::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11Texture2D::AddRef()
{
    return impl_ID3D11Resource::AddRef();
}
     
ULONG base_ID3D11Texture2D::Release()
{
    return impl_ID3D11Resource::Release();
}
     

ID3D11Texture2D *base_ID3D11Texture2D::impl() const
{
    return impl_;
}
      
