#include "stdafx.h"

#include "base_ID3D11BlendState.h"

base_ID3D11BlendState::base_ID3D11BlendState(ID3D11BlendState *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
{

}

void base_ID3D11BlendState::GetDesc(D3D11_BLEND_DESC* pDesc)
{
    return impl_->GetDesc(pDesc);
}
     

void base_ID3D11BlendState::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11BlendState::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11BlendState::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11BlendState::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11BlendState::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11BlendState::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11BlendState::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11BlendState *base_ID3D11BlendState::impl() const
{
    return impl_;
}
      
