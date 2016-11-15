#include "stdafx.h"

#include "base_ID3D11VertexShader.h"
#include "../wrappers.h"

ID3D11VertexShader *unwrap_inner(ID3D11VertexShader *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11VertexShader *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11VertexShader *create_wrapper_inner(ID3D11VertexShader *impl)
{
    return new base_ID3D11VertexShader(impl);
}
       

base_ID3D11VertexShader::base_ID3D11VertexShader(ID3D11VertexShader *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}



void base_ID3D11VertexShader::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11VertexShader::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11VertexShader::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11VertexShader::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11VertexShader::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11VertexShader::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11VertexShader::Release()
{
    return parent_base_->Release();
}
     

ID3D11VertexShader *base_ID3D11VertexShader::impl() const
{
    return impl_;
}
      
