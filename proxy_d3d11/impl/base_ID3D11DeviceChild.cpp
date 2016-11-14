#include "stdafx.h"

#include "base_ID3D11DeviceChild.h"
#include "../wrappers.h"

ID3D11DeviceChild *unwrap_inner(ID3D11DeviceChild *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11DeviceChild *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D11DeviceChild::base_ID3D11DeviceChild(ID3D11DeviceChild *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<IUnknown>(impl))
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
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11DeviceChild::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11DeviceChild::Release()
{
    return parent_base_->Release();
}
     

ID3D11DeviceChild *base_ID3D11DeviceChild::impl() const
{
    return impl_;
}
      
