#include "stdafx.h"

#include "base_ID3D11Counter.h"
#include "../wrappers.h"

ID3D11Counter *unwrap_inner(ID3D11Counter *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11Counter *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11Counter *create_wrapper_inner(ID3D11Counter *impl)
{
    return new base_ID3D11Counter(impl);
}
       

base_ID3D11Counter::base_ID3D11Counter(ID3D11Counter *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11Asynchronous>(impl))
{

}

void base_ID3D11Counter::GetDesc(D3D11_COUNTER_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

UINT base_ID3D11Counter::GetDataSize()
{
    return parent_base_->GetDataSize();
}
     
void base_ID3D11Counter::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11Counter::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11Counter::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11Counter::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11Counter::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11Counter::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11Counter::Release()
{
    return parent_base_->Release();
}
     

ID3D11Counter *base_ID3D11Counter::impl() const
{
    return impl_;
}
      
