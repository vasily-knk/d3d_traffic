#include "stdafx.h"

#include "base_ID3D10Query.h"
#include "../wrappers.h"

ID3D10Query *unwrap_inner(ID3D10Query *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10Query *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10Query::base_ID3D10Query(ID3D10Query *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10Asynchronous>(impl))
{

}

void base_ID3D10Query::GetDesc(D3D10_QUERY_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D10Query::Begin()
{
    return parent_base_->Begin();
}
     
void base_ID3D10Query::End()
{
    return parent_base_->End();
}
     
HRESULT base_ID3D10Query::GetData(void* pData, UINT DataSize, UINT GetDataFlags)
{
    return parent_base_->GetData(pData, DataSize, GetDataFlags);
}
     
UINT base_ID3D10Query::GetDataSize()
{
    return parent_base_->GetDataSize();
}
     
void base_ID3D10Query::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10Query::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10Query::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10Query::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10Query::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10Query::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10Query::Release()
{
    return parent_base_->Release();
}
     

ID3D10Query *base_ID3D10Query::impl() const
{
    return impl_;
}
      
