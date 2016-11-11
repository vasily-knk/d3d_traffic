#include "stdafx.h"

#include "base_ID3D11CommandList.h"

base_ID3D11CommandList::base_ID3D11CommandList(ID3D11CommandList *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
{

}

UINT base_ID3D11CommandList::GetContextFlags()
{
    return impl_->GetContextFlags();
}
     

void base_ID3D11CommandList::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11CommandList::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11CommandList::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11CommandList::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11CommandList::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11CommandList::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11CommandList::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11CommandList *base_ID3D11CommandList::impl() const
{
    return impl_;
}
      
