#include "stdafx.h"

#include "base_ID3D10SamplerState.h"
#include "../wrappers.h"

ID3D10SamplerState *unwrap_inner(ID3D10SamplerState *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10SamplerState *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10SamplerState::base_ID3D10SamplerState(ID3D10SamplerState *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10DeviceChild>(impl))
{

}

void base_ID3D10SamplerState::GetDesc(D3D10_SAMPLER_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D10SamplerState::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10SamplerState::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10SamplerState::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10SamplerState::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10SamplerState::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10SamplerState::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10SamplerState::Release()
{
    return parent_base_->Release();
}
     

ID3D10SamplerState *base_ID3D10SamplerState::impl() const
{
    return impl_;
}
      
