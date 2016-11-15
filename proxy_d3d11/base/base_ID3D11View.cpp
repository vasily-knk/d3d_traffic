#include "stdafx.h"

#include "base_ID3D11View.h"
#include "../wrappers.h"

ID3D11View *unwrap_inner(ID3D11View *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11View *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11View *create_wrapper_inner(ID3D11View *impl)
{
    return new base_ID3D11View(impl);
}
       

base_ID3D11View::base_ID3D11View(ID3D11View *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}

void base_ID3D11View::GetResource(ID3D11Resource** ppResource)
{
    log_method("ID3D11View", "GetResource");
    
    impl_->GetResource(ppResource);
    if (ppResource != nullptr) *ppResource = wrap(*ppResource);
    
}
     

void base_ID3D11View::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11View::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11View::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11View::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11View::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11View::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11View::Release()
{
    return parent_base_->Release();
}
     

ID3D11View *base_ID3D11View::impl() const
{
    return impl_;
}
      
