#include "stdafx.h"

#include "base_ID3D11VideoProcessorInputView.h"
#include "../wrappers.h"

ID3D11VideoProcessorInputView *unwrap_inner(ID3D11VideoProcessorInputView *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11VideoProcessorInputView *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D11VideoProcessorInputView::base_ID3D11VideoProcessorInputView(ID3D11VideoProcessorInputView *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11View>(impl))
{

}

void base_ID3D11VideoProcessorInputView::GetDesc(D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D11VideoProcessorInputView::GetResource(ID3D11Resource** ppResource)
{
    return parent_base_->GetResource(ppResource);
}
     
void base_ID3D11VideoProcessorInputView::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11VideoProcessorInputView::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11VideoProcessorInputView::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11VideoProcessorInputView::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11VideoProcessorInputView::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11VideoProcessorInputView::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11VideoProcessorInputView::Release()
{
    return parent_base_->Release();
}
     

ID3D11VideoProcessorInputView *base_ID3D11VideoProcessorInputView::impl() const
{
    return impl_;
}
      
