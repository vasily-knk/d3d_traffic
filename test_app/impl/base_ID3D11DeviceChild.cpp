#include "stdafx.h"

#include "base_ID3D11DeviceChild.h"

base_ID3D11DeviceChild::base_ID3D11DeviceChild(ID3D11DeviceChild *impl)
    : impl_IUnknown(impl)
    , impl_(impl)
{

}

void base_ID3D11DeviceChild::GetDevice(ID3D11Device** ppDevice)
{
    return impl_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11DeviceChild::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11DeviceChild::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11DeviceChild::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_->SetPrivateDataInterface(guid, pData);
}
     

HRESULT base_ID3D11DeviceChild::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_IUnknown::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11DeviceChild::AddRef()
{
    return impl_IUnknown::AddRef();
}
     
ULONG base_ID3D11DeviceChild::Release()
{
    return impl_IUnknown::Release();
}
     

ID3D11DeviceChild *base_ID3D11DeviceChild::impl() const
{
    return impl_;
}
      
