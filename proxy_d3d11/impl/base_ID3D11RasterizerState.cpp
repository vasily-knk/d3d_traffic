#include "stdafx.h"

#include "base_ID3D11RasterizerState.h"
#include "../wrappers.h"

ID3D11RasterizerState *unwrap_inner(ID3D11RasterizerState *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11RasterizerState *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D11RasterizerState::base_ID3D11RasterizerState(ID3D11RasterizerState *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}

void base_ID3D11RasterizerState::GetDesc(D3D11_RASTERIZER_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D11RasterizerState::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11RasterizerState::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11RasterizerState::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11RasterizerState::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11RasterizerState::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11RasterizerState::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11RasterizerState::Release()
{
    return parent_base_->Release();
}
     

ID3D11RasterizerState *base_ID3D11RasterizerState::impl() const
{
    return impl_;
}
      
