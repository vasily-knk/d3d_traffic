#include "stdafx.h"

#include "base_ID3D10Counter.h"
#include "../wrappers.h"

ID3D10Counter *unwrap_inner(ID3D10Counter *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10Counter *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10Counter::base_ID3D10Counter(ID3D10Counter *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10Asynchronous>(impl))
{

}

void base_ID3D10Counter::GetDesc(D3D10_COUNTER_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D10Counter::Begin()
{
    return parent_base_->Begin();
}
     
void base_ID3D10Counter::End()
{
    return parent_base_->End();
}
     
HRESULT base_ID3D10Counter::GetData(void* pData, UINT DataSize, UINT GetDataFlags)
{
    return parent_base_->GetData(pData, DataSize, GetDataFlags);
}
     
UINT base_ID3D10Counter::GetDataSize()
{
    return parent_base_->GetDataSize();
}
     
void base_ID3D10Counter::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10Counter::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10Counter::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10Counter::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10Counter::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10Counter::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10Counter::Release()
{
    return parent_base_->Release();
}
     

ID3D10Counter *base_ID3D10Counter::impl() const
{
    return impl_;
}
      
