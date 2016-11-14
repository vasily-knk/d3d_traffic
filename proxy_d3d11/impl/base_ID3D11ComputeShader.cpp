#include "stdafx.h"

#include "base_ID3D11ComputeShader.h"
#include "../wrappers.h"

ID3D11ComputeShader *unwrap_inner(ID3D11ComputeShader *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11ComputeShader *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D11ComputeShader::base_ID3D11ComputeShader(ID3D11ComputeShader *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}



void base_ID3D11ComputeShader::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11ComputeShader::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11ComputeShader::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11ComputeShader::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11ComputeShader::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11ComputeShader::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11ComputeShader::Release()
{
    return parent_base_->Release();
}
     

ID3D11ComputeShader *base_ID3D11ComputeShader::impl() const
{
    return impl_;
}
      
