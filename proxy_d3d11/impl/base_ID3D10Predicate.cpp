#include "stdafx.h"

#include "base_ID3D10Predicate.h"
#include "../wrappers.h"

ID3D10Predicate *unwrap_inner(ID3D10Predicate *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10Predicate *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10Predicate::base_ID3D10Predicate(ID3D10Predicate *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10Query>(impl))
{

}



void base_ID3D10Predicate::GetDesc(D3D10_QUERY_DESC* pDesc)
{
    return parent_base_->GetDesc(pDesc);
}
     
void base_ID3D10Predicate::Begin()
{
    return parent_base_->Begin();
}
     
void base_ID3D10Predicate::End()
{
    return parent_base_->End();
}
     
HRESULT base_ID3D10Predicate::GetData(void* pData, UINT DataSize, UINT GetDataFlags)
{
    return parent_base_->GetData(pData, DataSize, GetDataFlags);
}
     
UINT base_ID3D10Predicate::GetDataSize()
{
    return parent_base_->GetDataSize();
}
     
void base_ID3D10Predicate::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10Predicate::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10Predicate::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10Predicate::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10Predicate::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10Predicate::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10Predicate::Release()
{
    return parent_base_->Release();
}
     

ID3D10Predicate *base_ID3D10Predicate::impl() const
{
    return impl_;
}
      
