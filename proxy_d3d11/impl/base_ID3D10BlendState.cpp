#include "stdafx.h"

#include "base_ID3D10BlendState.h"
#include "../wrappers.h"

ID3D10BlendState *unwrap_inner(ID3D10BlendState *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10BlendState *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10BlendState::base_ID3D10BlendState(ID3D10BlendState *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10DeviceChild>(impl))
{

}

void base_ID3D10BlendState::GetDesc(D3D10_BLEND_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D10BlendState::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10BlendState::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10BlendState::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10BlendState::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10BlendState::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10BlendState::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10BlendState::Release()
{
    return parent_base_->Release();
}
     

ID3D10BlendState *base_ID3D10BlendState::impl() const
{
    return impl_;
}
      
