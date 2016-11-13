#include "stdafx.h"

#include "base_ID3D11RasterizerState.h"
#include "../wrappers.h"

base_ID3D11RasterizerState::base_ID3D11RasterizerState(ID3D11RasterizerState *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
{

}

void base_ID3D11RasterizerState::GetDesc(D3D11_RASTERIZER_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D11RasterizerState::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11RasterizerState::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11RasterizerState::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11RasterizerState::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11RasterizerState::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11RasterizerState::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11RasterizerState::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11RasterizerState *base_ID3D11RasterizerState::impl() const
{
    return impl_;
}
      
