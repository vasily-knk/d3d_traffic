#include "stdafx.h"

#include "base_ID3D11Asynchronous.h"
#include "../wrappers.h"

ID3D11Asynchronous *unwrap_inner(ID3D11Asynchronous *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11Asynchronous *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11Asynchronous *create_wrapper_inner(ID3D11Asynchronous *impl)
{
    return new base_ID3D11Asynchronous(impl);
}
       

base_ID3D11Asynchronous::base_ID3D11Asynchronous(ID3D11Asynchronous *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}

UINT base_ID3D11Asynchronous::GetDataSize()
{
    
    auto result_ = impl_->GetDataSize();
    
    return result_;
}
     

void base_ID3D11Asynchronous::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11Asynchronous::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11Asynchronous::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11Asynchronous::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11Asynchronous::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11Asynchronous::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11Asynchronous::Release()
{
    return parent_base_->Release();
}
     

ID3D11Asynchronous *base_ID3D11Asynchronous::impl() const
{
    return impl_;
}
      
