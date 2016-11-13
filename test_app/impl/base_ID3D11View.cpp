#include "stdafx.h"

#include "base_ID3D11View.h"
#include "../wrappers.h"

base_ID3D11View::base_ID3D11View(ID3D11View *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
{

}

void base_ID3D11View::GetResource(ID3D11Resource** ppResource)
{
    
    impl_->GetResource(ppResource);
    if (ppResource != nullptr) *ppResource = wrap(*ppResource);
    
}
     

void base_ID3D11View::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11View::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11View::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11View::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11View::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11View::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11View::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11View *base_ID3D11View::impl() const
{
    return impl_;
}
      
