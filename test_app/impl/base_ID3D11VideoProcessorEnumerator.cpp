#include "stdafx.h"

#include "base_ID3D11VideoProcessorEnumerator.h"

base_ID3D11VideoProcessorEnumerator::base_ID3D11VideoProcessorEnumerator(ID3D11VideoProcessorEnumerator *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
{

}

HRESULT base_ID3D11VideoProcessorEnumerator::GetVideoProcessorContentDesc(D3D11_VIDEO_PROCESSOR_CONTENT_DESC* pContentDesc)
{
    return impl_->GetVideoProcessorContentDesc(pContentDesc);
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::CheckVideoProcessorFormat(DXGI_FORMAT Format, UINT* pFlags)
{
    return impl_->CheckVideoProcessorFormat(Format, pFlags);
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::GetVideoProcessorCaps(D3D11_VIDEO_PROCESSOR_CAPS* pCaps)
{
    return impl_->GetVideoProcessorCaps(pCaps);
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::GetVideoProcessorRateConversionCaps(UINT TypeIndex, D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS* pCaps)
{
    return impl_->GetVideoProcessorRateConversionCaps(TypeIndex, pCaps);
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::GetVideoProcessorCustomRate(UINT TypeIndex, UINT CustomRateIndex, D3D11_VIDEO_PROCESSOR_CUSTOM_RATE* pRate)
{
    return impl_->GetVideoProcessorCustomRate(TypeIndex, CustomRateIndex, pRate);
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::GetVideoProcessorFilterRange(D3D11_VIDEO_PROCESSOR_FILTER Filter, D3D11_VIDEO_PROCESSOR_FILTER_RANGE* pRange)
{
    return impl_->GetVideoProcessorFilterRange(Filter, pRange);
}
     

void base_ID3D11VideoProcessorEnumerator::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11VideoProcessorEnumerator::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11VideoProcessorEnumerator::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11VideoProcessorEnumerator::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11VideoProcessorEnumerator *base_ID3D11VideoProcessorEnumerator::impl() const
{
    return impl_;
}
      
