#include "stdafx.h"

#include "base_ID3D10RenderTargetView.h"
#include "../wrappers.h"

ID3D10RenderTargetView *unwrap_inner(ID3D10RenderTargetView *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10RenderTargetView *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10RenderTargetView::base_ID3D10RenderTargetView(ID3D10RenderTargetView *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10View>(impl))
{

}

void base_ID3D10RenderTargetView::GetDesc(D3D10_RENDER_TARGET_VIEW_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D10RenderTargetView::GetResource(ID3D10Resource** ppResource)
{
    return parent_base_->GetResource(ppResource);
}
     
void base_ID3D10RenderTargetView::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10RenderTargetView::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10RenderTargetView::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10RenderTargetView::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10RenderTargetView::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10RenderTargetView::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10RenderTargetView::Release()
{
    return parent_base_->Release();
}
     

ID3D10RenderTargetView *base_ID3D10RenderTargetView::impl() const
{
    return impl_;
}
      
