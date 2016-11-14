#include "stdafx.h"

#include "base_ID3D11CommandList.h"
#include "../wrappers.h"

ID3D11CommandList *unwrap_inner(ID3D11CommandList *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11CommandList *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D11CommandList::base_ID3D11CommandList(ID3D11CommandList *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}

UINT base_ID3D11CommandList::GetContextFlags()
{
    
    auto result_ = impl_->GetContextFlags();
    
    return result_;
}
     

void base_ID3D11CommandList::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11CommandList::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11CommandList::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11CommandList::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11CommandList::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11CommandList::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11CommandList::Release()
{
    return parent_base_->Release();
}
     

ID3D11CommandList *base_ID3D11CommandList::impl() const
{
    return impl_;
}
      
