#include "stdafx.h"

#include "base_ID3D11VideoProcessor.h"
#include "../wrappers.h"

ID3D11VideoProcessor *unwrap_inner(ID3D11VideoProcessor *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11VideoProcessor *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11VideoProcessor *create_wrapper_inner(ID3D11VideoProcessor *impl)
{
    return new base_ID3D11VideoProcessor(impl);
}
       

base_ID3D11VideoProcessor::base_ID3D11VideoProcessor(ID3D11VideoProcessor *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}

void base_ID3D11VideoProcessor::GetContentDesc(D3D11_VIDEO_PROCESSOR_CONTENT_DESC* pDesc)
{
    log_method("ID3D11VideoProcessor", "GetContentDesc");
    
    impl_->GetContentDesc(pDesc);
    
    
}
     
void base_ID3D11VideoProcessor::GetRateConversionCaps(D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS* pCaps)
{
    log_method("ID3D11VideoProcessor", "GetRateConversionCaps");
    
    impl_->GetRateConversionCaps(pCaps);
    
    
}
     

void base_ID3D11VideoProcessor::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11VideoProcessor::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11VideoProcessor::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11VideoProcessor::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11VideoProcessor::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11VideoProcessor::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11VideoProcessor::Release()
{
    return parent_base_->Release();
}
     

ID3D11VideoProcessor *base_ID3D11VideoProcessor::impl() const
{
    return impl_;
}
      
