#include "stdafx.h"

#include "base_ID3D11Asynchronous.h"
#include "../wrappers.h"

base_ID3D11Asynchronous::base_ID3D11Asynchronous(ID3D11Asynchronous *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
{

}

UINT base_ID3D11Asynchronous::GetDataSize()
{
    
    auto result_ = impl_->GetDataSize();
    
    return result_;
}
     

void base_ID3D11Asynchronous::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11Asynchronous::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11Asynchronous::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11Asynchronous::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11Asynchronous::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11Asynchronous::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11Asynchronous::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11Asynchronous *base_ID3D11Asynchronous::impl() const
{
    return impl_;
}
      
