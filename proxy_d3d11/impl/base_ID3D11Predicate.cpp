#include "stdafx.h"

#include "base_ID3D11Predicate.h"
#include "../wrappers.h"

ID3D11Predicate *unwrap_inner(ID3D11Predicate *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11Predicate *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D11Predicate::base_ID3D11Predicate(ID3D11Predicate *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11Query>(impl))
{

}



void base_ID3D11Predicate::GetDesc(D3D11_QUERY_DESC* pDesc)
{
    return parent_base_->GetDesc(pDesc);
}
     
UINT base_ID3D11Predicate::GetDataSize()
{
    return parent_base_->GetDataSize();
}
     
void base_ID3D11Predicate::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11Predicate::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11Predicate::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11Predicate::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11Predicate::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11Predicate::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11Predicate::Release()
{
    return parent_base_->Release();
}
     

ID3D11Predicate *base_ID3D11Predicate::impl() const
{
    return impl_;
}
      
