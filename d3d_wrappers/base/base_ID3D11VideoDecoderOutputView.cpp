#include "stdafx.h"

#include "base_ID3D11VideoDecoderOutputView.h"
#include "../wrappers.h"

ID3D11VideoDecoderOutputView *unwrap_inner(ID3D11VideoDecoderOutputView *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11VideoDecoderOutputView *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11VideoDecoderOutputView *create_wrapper_inner(ID3D11VideoDecoderOutputView *impl)
{
    return new base_ID3D11VideoDecoderOutputView(impl);
}
       

base_ID3D11VideoDecoderOutputView::base_ID3D11VideoDecoderOutputView(ID3D11VideoDecoderOutputView *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11View>(impl))
{

}

void base_ID3D11VideoDecoderOutputView::GetDesc(D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC* pDesc)
{
    log_method("ID3D11VideoDecoderOutputView", "GetDesc");
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D11VideoDecoderOutputView::GetResource(ID3D11Resource** ppResource)
{
    return parent_base_->GetResource(ppResource);
}
     
void base_ID3D11VideoDecoderOutputView::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11VideoDecoderOutputView::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11VideoDecoderOutputView::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11VideoDecoderOutputView::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11VideoDecoderOutputView::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11VideoDecoderOutputView::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11VideoDecoderOutputView::Release()
{
    return parent_base_->Release();
}
     

ID3D11VideoDecoderOutputView *base_ID3D11VideoDecoderOutputView::impl() const
{
    return impl_;
}
      
