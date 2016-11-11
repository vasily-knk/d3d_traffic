#include "stdafx.h"

#include "base_ID3D11VertexShader.h"

base_ID3D11VertexShader::base_ID3D11VertexShader(ID3D11VertexShader *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
{

}



void base_ID3D11VertexShader::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11VertexShader::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11VertexShader::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11VertexShader::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11VertexShader::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11VertexShader::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11VertexShader::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11VertexShader *base_ID3D11VertexShader::impl() const
{
    return impl_;
}
      
