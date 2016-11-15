#include "stdafx.h"

#include "base_ID3D11GeometryShader.h"
#include "../wrappers.h"

ID3D11GeometryShader *unwrap_inner(ID3D11GeometryShader *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11GeometryShader *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11GeometryShader *create_wrapper_inner(ID3D11GeometryShader *impl)
{
    return new base_ID3D11GeometryShader(impl);
}
       

base_ID3D11GeometryShader::base_ID3D11GeometryShader(ID3D11GeometryShader *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}



void base_ID3D11GeometryShader::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11GeometryShader::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11GeometryShader::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11GeometryShader::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11GeometryShader::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11GeometryShader::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11GeometryShader::Release()
{
    return parent_base_->Release();
}
     

ID3D11GeometryShader *base_ID3D11GeometryShader::impl() const
{
    return impl_;
}
      
