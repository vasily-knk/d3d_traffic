#include "stdafx.h"

#include "base_ID3D11Query.h"
#include "../wrappers.h"

ID3D11Query *unwrap_inner(ID3D11Query *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11Query *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11Query *create_wrapper_inner(ID3D11Query *impl)
{
    return new base_ID3D11Query(impl);
}
       

base_ID3D11Query::base_ID3D11Query(ID3D11Query *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11Asynchronous>(impl))
{

}

void base_ID3D11Query::GetDesc(D3D11_QUERY_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

UINT base_ID3D11Query::GetDataSize()
{
    return parent_base_->GetDataSize();
}
     
void base_ID3D11Query::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11Query::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11Query::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11Query::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11Query::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11Query::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11Query::Release()
{
    return parent_base_->Release();
}
     

ID3D11Query *base_ID3D11Query::impl() const
{
    return impl_;
}
      
