#include "stdafx.h"

#include "base_ID3D11VideoDecoder.h"
#include "../wrappers.h"

base_ID3D11VideoDecoder::base_ID3D11VideoDecoder(ID3D11VideoDecoder *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
{

}

HRESULT base_ID3D11VideoDecoder::GetCreationParameters(D3D11_VIDEO_DECODER_DESC* pVideoDesc, D3D11_VIDEO_DECODER_CONFIG* pConfig)
{
    
    auto result_ = impl_->GetCreationParameters(pVideoDesc, pConfig);
    
    return result_;
}
     
HRESULT base_ID3D11VideoDecoder::GetDriverHandle(HANDLE* pDriverHandle)
{
    
    auto result_ = impl_->GetDriverHandle(pDriverHandle);
    
    return result_;
}
     

void base_ID3D11VideoDecoder::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11VideoDecoder::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11VideoDecoder::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11VideoDecoder::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11VideoDecoder::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11VideoDecoder::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11VideoDecoder::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11VideoDecoder *base_ID3D11VideoDecoder::impl() const
{
    return impl_;
}
      
