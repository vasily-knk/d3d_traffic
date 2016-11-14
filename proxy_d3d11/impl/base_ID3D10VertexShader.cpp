#include "stdafx.h"

#include "base_ID3D10VertexShader.h"
#include "../wrappers.h"

ID3D10VertexShader *unwrap_inner(ID3D10VertexShader *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10VertexShader *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10VertexShader::base_ID3D10VertexShader(ID3D10VertexShader *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10DeviceChild>(impl))
{

}



void base_ID3D10VertexShader::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10VertexShader::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10VertexShader::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10VertexShader::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10VertexShader::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10VertexShader::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10VertexShader::Release()
{
    return parent_base_->Release();
}
     

ID3D10VertexShader *base_ID3D10VertexShader::impl() const
{
    return impl_;
}
      
