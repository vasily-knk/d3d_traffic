#include "stdafx.h"

#include "base_ID3D11DepthStencilView.h"
#include "../wrappers.h"

ID3D11DepthStencilView *unwrap_inner(ID3D11DepthStencilView *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11DepthStencilView *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11DepthStencilView *create_wrapper_inner(ID3D11DepthStencilView *impl)
{
    return new base_ID3D11DepthStencilView(impl);
}
       

base_ID3D11DepthStencilView::base_ID3D11DepthStencilView(ID3D11DepthStencilView *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11View>(impl))
{

}

void base_ID3D11DepthStencilView::GetDesc(D3D11_DEPTH_STENCIL_VIEW_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D11DepthStencilView::GetResource(ID3D11Resource** ppResource)
{
    return parent_base_->GetResource(ppResource);
}
     
void base_ID3D11DepthStencilView::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11DepthStencilView::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11DepthStencilView::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11DepthStencilView::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11DepthStencilView::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11DepthStencilView::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11DepthStencilView::Release()
{
    return parent_base_->Release();
}
     

ID3D11DepthStencilView *base_ID3D11DepthStencilView::impl() const
{
    return impl_;
}
      
