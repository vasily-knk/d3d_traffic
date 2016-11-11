#include "stdafx.h"

#include "base_ID3D11DepthStencilView.h"

base_ID3D11DepthStencilView::base_ID3D11DepthStencilView(ID3D11DepthStencilView *impl)
    : impl_ID3D11View(impl)
    , impl_(impl)
{

}

void base_ID3D11DepthStencilView::GetDesc(D3D11_DEPTH_STENCIL_VIEW_DESC* pDesc)
{
    return impl_->GetDesc(pDesc);
}
     

void base_ID3D11DepthStencilView::GetResource(ID3D11Resource** ppResource)
{
    return impl_ID3D11View::GetResource(ppResource);
}
     
void base_ID3D11DepthStencilView::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11View::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11DepthStencilView::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11View::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11DepthStencilView::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11View::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11DepthStencilView::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11View::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11DepthStencilView::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11View::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11DepthStencilView::AddRef()
{
    return impl_ID3D11View::AddRef();
}
     
ULONG base_ID3D11DepthStencilView::Release()
{
    return impl_ID3D11View::Release();
}
     

ID3D11DepthStencilView *base_ID3D11DepthStencilView::impl() const
{
    return impl_;
}
      
