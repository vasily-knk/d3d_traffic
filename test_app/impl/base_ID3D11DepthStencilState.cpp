#include "stdafx.h"

#include "base_ID3D11DepthStencilState.h"

base_ID3D11DepthStencilState::base_ID3D11DepthStencilState(ID3D11DepthStencilState *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
{

}

void base_ID3D11DepthStencilState::GetDesc(D3D11_DEPTH_STENCIL_DESC* pDesc)
{
    return impl_->GetDesc(pDesc);
}
     

void base_ID3D11DepthStencilState::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11DepthStencilState::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11DepthStencilState::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11DepthStencilState::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11DepthStencilState::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11DepthStencilState::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11DepthStencilState::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11DepthStencilState *base_ID3D11DepthStencilState::impl() const
{
    return impl_;
}
      
