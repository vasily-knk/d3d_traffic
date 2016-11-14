#include "stdafx.h"

#include "base_ID3D10DepthStencilState.h"
#include "../wrappers.h"

ID3D10DepthStencilState *unwrap_inner(ID3D10DepthStencilState *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10DepthStencilState *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10DepthStencilState::base_ID3D10DepthStencilState(ID3D10DepthStencilState *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10DeviceChild>(impl))
{

}

void base_ID3D10DepthStencilState::GetDesc(D3D10_DEPTH_STENCIL_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D10DepthStencilState::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10DepthStencilState::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10DepthStencilState::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10DepthStencilState::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10DepthStencilState::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10DepthStencilState::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10DepthStencilState::Release()
{
    return parent_base_->Release();
}
     

ID3D10DepthStencilState *base_ID3D10DepthStencilState::impl() const
{
    return impl_;
}
      
