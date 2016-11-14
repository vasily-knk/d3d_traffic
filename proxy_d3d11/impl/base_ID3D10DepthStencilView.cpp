#include "stdafx.h"

#include "base_ID3D10DepthStencilView.h"
#include "../wrappers.h"

ID3D10DepthStencilView *unwrap_inner(ID3D10DepthStencilView *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10DepthStencilView *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10DepthStencilView::base_ID3D10DepthStencilView(ID3D10DepthStencilView *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10View>(impl))
{

}

void base_ID3D10DepthStencilView::GetDesc(D3D10_DEPTH_STENCIL_VIEW_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D10DepthStencilView::GetResource(ID3D10Resource** ppResource)
{
    return parent_base_->GetResource(ppResource);
}
     
void base_ID3D10DepthStencilView::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10DepthStencilView::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10DepthStencilView::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10DepthStencilView::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10DepthStencilView::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10DepthStencilView::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10DepthStencilView::Release()
{
    return parent_base_->Release();
}
     

ID3D10DepthStencilView *base_ID3D10DepthStencilView::impl() const
{
    return impl_;
}
      
