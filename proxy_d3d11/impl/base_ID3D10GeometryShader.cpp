#include "stdafx.h"

#include "base_ID3D10GeometryShader.h"
#include "../wrappers.h"

ID3D10GeometryShader *unwrap_inner(ID3D10GeometryShader *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10GeometryShader *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10GeometryShader::base_ID3D10GeometryShader(ID3D10GeometryShader *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10DeviceChild>(impl))
{

}



void base_ID3D10GeometryShader::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10GeometryShader::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10GeometryShader::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10GeometryShader::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10GeometryShader::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10GeometryShader::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10GeometryShader::Release()
{
    return parent_base_->Release();
}
     

ID3D10GeometryShader *base_ID3D10GeometryShader::impl() const
{
    return impl_;
}
      
