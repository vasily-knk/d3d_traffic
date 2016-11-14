#include "stdafx.h"

#include "base_ID3D10View.h"
#include "../wrappers.h"

ID3D10View *unwrap_inner(ID3D10View *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10View *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10View::base_ID3D10View(ID3D10View *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10DeviceChild>(impl))
{

}

void base_ID3D10View::GetResource(ID3D10Resource** ppResource)
{
    
    impl_->GetResource(ppResource);
    if (ppResource != nullptr) *ppResource = wrap(*ppResource);
    
}
     

void base_ID3D10View::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10View::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10View::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10View::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10View::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10View::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10View::Release()
{
    return parent_base_->Release();
}
     

ID3D10View *base_ID3D10View::impl() const
{
    return impl_;
}
      
