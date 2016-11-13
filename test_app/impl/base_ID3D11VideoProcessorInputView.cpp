#include "stdafx.h"

#include "base_ID3D11VideoProcessorInputView.h"
#include "../wrappers.h"

base_ID3D11VideoProcessorInputView::base_ID3D11VideoProcessorInputView(ID3D11VideoProcessorInputView *impl)
    : impl_ID3D11View(impl)
    , impl_(impl)
{

}

void base_ID3D11VideoProcessorInputView::GetDesc(D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D11VideoProcessorInputView::GetResource(ID3D11Resource** ppResource)
{
    return impl_ID3D11View::GetResource(ppResource);
}
     
void base_ID3D11VideoProcessorInputView::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11View::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11VideoProcessorInputView::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11View::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11VideoProcessorInputView::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11View::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11VideoProcessorInputView::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11View::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11VideoProcessorInputView::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11View::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11VideoProcessorInputView::AddRef()
{
    return impl_ID3D11View::AddRef();
}
     
ULONG base_ID3D11VideoProcessorInputView::Release()
{
    return impl_ID3D11View::Release();
}
     

ID3D11VideoProcessorInputView *base_ID3D11VideoProcessorInputView::impl() const
{
    return impl_;
}
      
