#include "stdafx.h"

#include "base_ID3D10Asynchronous.h"
#include "../wrappers.h"

ID3D10Asynchronous *unwrap_inner(ID3D10Asynchronous *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10Asynchronous *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10Asynchronous::base_ID3D10Asynchronous(ID3D10Asynchronous *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10DeviceChild>(impl))
{

}

void base_ID3D10Asynchronous::Begin()
{
    
    impl_->Begin();
    
    
}
     
void base_ID3D10Asynchronous::End()
{
    
    impl_->End();
    
    
}
     
HRESULT base_ID3D10Asynchronous::GetData(void* pData, UINT DataSize, UINT GetDataFlags)
{
    
    auto result_ = impl_->GetData(pData, DataSize, GetDataFlags);
    
    return result_;
}
     
UINT base_ID3D10Asynchronous::GetDataSize()
{
    
    auto result_ = impl_->GetDataSize();
    
    return result_;
}
     

void base_ID3D10Asynchronous::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10Asynchronous::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10Asynchronous::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10Asynchronous::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10Asynchronous::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10Asynchronous::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10Asynchronous::Release()
{
    return parent_base_->Release();
}
     

ID3D10Asynchronous *base_ID3D10Asynchronous::impl() const
{
    return impl_;
}
      
