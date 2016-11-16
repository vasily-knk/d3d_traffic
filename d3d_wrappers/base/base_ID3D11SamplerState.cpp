#include "stdafx.h"

#include "base_ID3D11SamplerState.h"
#include "../wrappers.h"

ID3D11SamplerState *unwrap_inner(ID3D11SamplerState *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11SamplerState *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11SamplerState *create_wrapper_inner(ID3D11SamplerState *impl)
{
    return new base_ID3D11SamplerState(impl);
}
       

base_ID3D11SamplerState::base_ID3D11SamplerState(ID3D11SamplerState *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}

void base_ID3D11SamplerState::GetDesc(D3D11_SAMPLER_DESC* pDesc)
{
    log_method("ID3D11SamplerState", "GetDesc");
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D11SamplerState::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11SamplerState::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11SamplerState::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11SamplerState::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11SamplerState::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11SamplerState::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11SamplerState::Release()
{
    return parent_base_->Release();
}
     

ID3D11SamplerState *base_ID3D11SamplerState::impl() const
{
    return impl_;
}
      
