#include "stdafx.h"

#include "base_ID3D11VideoProcessor.h"
#include "../wrappers.h"

base_ID3D11VideoProcessor::base_ID3D11VideoProcessor(ID3D11VideoProcessor *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
{

}

void base_ID3D11VideoProcessor::GetContentDesc(D3D11_VIDEO_PROCESSOR_CONTENT_DESC* pDesc)
{
    
    impl_->GetContentDesc(pDesc);
    
    
}
     
void base_ID3D11VideoProcessor::GetRateConversionCaps(D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS* pCaps)
{
    
    impl_->GetRateConversionCaps(pCaps);
    
    
}
     

void base_ID3D11VideoProcessor::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11VideoProcessor::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11VideoProcessor::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11VideoProcessor::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11VideoProcessor::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11VideoProcessor::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11VideoProcessor::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11VideoProcessor *base_ID3D11VideoProcessor::impl() const
{
    return impl_;
}
      
