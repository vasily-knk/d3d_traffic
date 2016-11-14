#include "stdafx.h"

#include "base_ID3DDeviceContextState.h"
#include "../wrappers.h"

ID3DDeviceContextState *unwrap_inner(ID3DDeviceContextState *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3DDeviceContextState *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3DDeviceContextState::base_ID3DDeviceContextState(ID3DDeviceContextState *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}



void base_ID3DDeviceContextState::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3DDeviceContextState::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3DDeviceContextState::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3DDeviceContextState::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3DDeviceContextState::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3DDeviceContextState::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3DDeviceContextState::Release()
{
    return parent_base_->Release();
}
     

ID3DDeviceContextState *base_ID3DDeviceContextState::impl() const
{
    return impl_;
}
      
