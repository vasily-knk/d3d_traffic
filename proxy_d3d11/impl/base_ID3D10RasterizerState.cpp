#include "stdafx.h"

#include "base_ID3D10RasterizerState.h"
#include "../wrappers.h"

ID3D10RasterizerState *unwrap_inner(ID3D10RasterizerState *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10RasterizerState *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10RasterizerState::base_ID3D10RasterizerState(ID3D10RasterizerState *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10DeviceChild>(impl))
{

}

void base_ID3D10RasterizerState::GetDesc(D3D10_RASTERIZER_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D10RasterizerState::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10RasterizerState::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10RasterizerState::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10RasterizerState::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10RasterizerState::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10RasterizerState::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10RasterizerState::Release()
{
    return parent_base_->Release();
}
     

ID3D10RasterizerState *base_ID3D10RasterizerState::impl() const
{
    return impl_;
}
      
