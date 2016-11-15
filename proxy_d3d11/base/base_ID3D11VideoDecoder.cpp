#include "stdafx.h"

#include "base_ID3D11VideoDecoder.h"
#include "../wrappers.h"

ID3D11VideoDecoder *unwrap_inner(ID3D11VideoDecoder *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11VideoDecoder *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11VideoDecoder *create_wrapper_inner(ID3D11VideoDecoder *impl)
{
    return new base_ID3D11VideoDecoder(impl);
}
       

base_ID3D11VideoDecoder::base_ID3D11VideoDecoder(ID3D11VideoDecoder *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}

HRESULT base_ID3D11VideoDecoder::GetCreationParameters(D3D11_VIDEO_DECODER_DESC* pVideoDesc, D3D11_VIDEO_DECODER_CONFIG* pConfig)
{
    log_method("ID3D11VideoDecoder", "GetCreationParameters");
    
    auto result_ = impl_->GetCreationParameters(pVideoDesc, pConfig);
    
    return result_;
}
     
HRESULT base_ID3D11VideoDecoder::GetDriverHandle(HANDLE* pDriverHandle)
{
    log_method("ID3D11VideoDecoder", "GetDriverHandle");
    
    auto result_ = impl_->GetDriverHandle(pDriverHandle);
    
    return result_;
}
     

void base_ID3D11VideoDecoder::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11VideoDecoder::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11VideoDecoder::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11VideoDecoder::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11VideoDecoder::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11VideoDecoder::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11VideoDecoder::Release()
{
    return parent_base_->Release();
}
     

ID3D11VideoDecoder *base_ID3D11VideoDecoder::impl() const
{
    return impl_;
}
      
