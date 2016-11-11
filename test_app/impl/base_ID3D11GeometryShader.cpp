#include "stdafx.h"

#include "base_ID3D11GeometryShader.h"

base_ID3D11GeometryShader::base_ID3D11GeometryShader(ID3D11GeometryShader *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
{

}



void base_ID3D11GeometryShader::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11GeometryShader::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11GeometryShader::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11GeometryShader::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11GeometryShader::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11GeometryShader::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11GeometryShader::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11GeometryShader *base_ID3D11GeometryShader::impl() const
{
    return impl_;
}
      
