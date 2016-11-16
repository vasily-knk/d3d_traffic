#include "stdafx.h"

#include "base_ID3D11BlendState.h"
#include "../wrappers.h"

ID3D11BlendState *unwrap_inner(ID3D11BlendState *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11BlendState *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11BlendState *create_wrapper_inner(ID3D11BlendState *impl)
{
    return new base_ID3D11BlendState(impl);
}
       

base_ID3D11BlendState::base_ID3D11BlendState(ID3D11BlendState *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}

void base_ID3D11BlendState::GetDesc(D3D11_BLEND_DESC* pDesc)
{
    log_method("ID3D11BlendState", "GetDesc");
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D11BlendState::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11BlendState::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11BlendState::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11BlendState::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11BlendState::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11BlendState::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11BlendState::Release()
{
    return parent_base_->Release();
}
     

ID3D11BlendState *base_ID3D11BlendState::impl() const
{
    return impl_;
}
      
