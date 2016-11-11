#include "stdafx.h"

#include "base_ID3D11VideoDecoderOutputView.h"

base_ID3D11VideoDecoderOutputView::base_ID3D11VideoDecoderOutputView(ID3D11VideoDecoderOutputView *impl)
    : impl_ID3D11View(impl)
    , impl_(impl)
{

}

void base_ID3D11VideoDecoderOutputView::GetDesc(D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC* pDesc)
{
    return impl_->GetDesc(pDesc);
}
     

void base_ID3D11VideoDecoderOutputView::GetResource(ID3D11Resource** ppResource)
{
    return impl_ID3D11View::GetResource(ppResource);
}
     
void base_ID3D11VideoDecoderOutputView::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11View::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11VideoDecoderOutputView::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11View::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11VideoDecoderOutputView::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11View::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11VideoDecoderOutputView::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11View::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11VideoDecoderOutputView::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11View::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11VideoDecoderOutputView::AddRef()
{
    return impl_ID3D11View::AddRef();
}
     
ULONG base_ID3D11VideoDecoderOutputView::Release()
{
    return impl_ID3D11View::Release();
}
     

ID3D11VideoDecoderOutputView *base_ID3D11VideoDecoderOutputView::impl() const
{
    return impl_;
}
      
