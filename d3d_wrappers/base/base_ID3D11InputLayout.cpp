#include "stdafx.h"

#include "base_ID3D11InputLayout.h"
#include "../wrappers.h"

ID3D11InputLayout *unwrap_inner(ID3D11InputLayout *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11InputLayout *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11InputLayout *create_wrapper_inner(ID3D11InputLayout *impl)
{
    return new base_ID3D11InputLayout(impl);
}
       

base_ID3D11InputLayout::base_ID3D11InputLayout(ID3D11InputLayout *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}



void base_ID3D11InputLayout::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11InputLayout::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11InputLayout::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11InputLayout::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11InputLayout::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11InputLayout::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11InputLayout::Release()
{
    return parent_base_->Release();
}
     

ID3D11InputLayout *base_ID3D11InputLayout::impl() const
{
    return impl_;
}
      
