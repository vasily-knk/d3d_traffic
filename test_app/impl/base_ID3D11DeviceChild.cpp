#include "stdafx.h"

#include "base_ID3D11DeviceChild.h"
#include "../wrappers.h"

base_ID3D11DeviceChild::base_ID3D11DeviceChild(ID3D11DeviceChild *impl)
    : impl_IUnknown(impl)
    , impl_(impl)
{

}

void base_ID3D11DeviceChild::GetDevice(ID3D11Device** ppDevice)
{
    
    impl_->GetDevice(ppDevice);
    if (ppDevice != nullptr) *ppDevice = wrap(*ppDevice);
    
}
     
HRESULT base_ID3D11DeviceChild::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    
    auto result_ = impl_->GetPrivateData(guid, pDataSize, pData);
    
    return result_;
}
     
HRESULT base_ID3D11DeviceChild::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    
    auto result_ = impl_->SetPrivateData(guid, DataSize, pData);
    
    return result_;
}
     
HRESULT base_ID3D11DeviceChild::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    pData = unwrap(pData);
    auto result_ = impl_->SetPrivateDataInterface(guid, pData);
    
    return result_;
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
      
