#include "stdafx.h"

#include "base_ID3D11HullShader.h"
#include "../wrappers.h"

ID3D11HullShader *unwrap_inner(ID3D11HullShader *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11HullShader *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11HullShader *create_wrapper_inner(ID3D11HullShader *impl)
{
    return new base_ID3D11HullShader(impl);
}
       

base_ID3D11HullShader::base_ID3D11HullShader(ID3D11HullShader *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}



void base_ID3D11HullShader::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11HullShader::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11HullShader::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11HullShader::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11HullShader::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11HullShader::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11HullShader::Release()
{
    return parent_base_->Release();
}
     

ID3D11HullShader *base_ID3D11HullShader::impl() const
{
    return impl_;
}
      
