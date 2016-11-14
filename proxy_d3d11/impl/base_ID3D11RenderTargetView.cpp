#include "stdafx.h"

#include "base_ID3D11RenderTargetView.h"
#include "../wrappers.h"

ID3D11RenderTargetView *unwrap_inner(ID3D11RenderTargetView *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11RenderTargetView *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D11RenderTargetView::base_ID3D11RenderTargetView(ID3D11RenderTargetView *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11View>(impl))
{

}

void base_ID3D11RenderTargetView::GetDesc(D3D11_RENDER_TARGET_VIEW_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D11RenderTargetView::GetResource(ID3D11Resource** ppResource)
{
    return parent_base_->GetResource(ppResource);
}
     
void base_ID3D11RenderTargetView::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11RenderTargetView::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11RenderTargetView::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11RenderTargetView::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11RenderTargetView::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11RenderTargetView::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11RenderTargetView::Release()
{
    return parent_base_->Release();
}
     

ID3D11RenderTargetView *base_ID3D11RenderTargetView::impl() const
{
    return impl_;
}
      
