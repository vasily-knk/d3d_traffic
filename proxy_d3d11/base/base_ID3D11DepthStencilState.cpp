#include "stdafx.h"

#include "base_ID3D11DepthStencilState.h"
#include "../wrappers.h"

ID3D11DepthStencilState *unwrap_inner(ID3D11DepthStencilState *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11DepthStencilState *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11DepthStencilState *create_wrapper_inner(ID3D11DepthStencilState *impl)
{
    return new base_ID3D11DepthStencilState(impl);
}
       

base_ID3D11DepthStencilState::base_ID3D11DepthStencilState(ID3D11DepthStencilState *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}

void base_ID3D11DepthStencilState::GetDesc(D3D11_DEPTH_STENCIL_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D11DepthStencilState::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11DepthStencilState::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11DepthStencilState::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11DepthStencilState::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11DepthStencilState::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11DepthStencilState::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11DepthStencilState::Release()
{
    return parent_base_->Release();
}
     

ID3D11DepthStencilState *base_ID3D11DepthStencilState::impl() const
{
    return impl_;
}
      
