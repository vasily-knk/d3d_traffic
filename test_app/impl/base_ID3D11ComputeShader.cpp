#include "stdafx.h"

#include "base_ID3D11ComputeShader.h"
#include "../wrappers.h"

base_ID3D11ComputeShader::base_ID3D11ComputeShader(ID3D11ComputeShader *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
{

}



void base_ID3D11ComputeShader::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11ComputeShader::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11ComputeShader::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11ComputeShader::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11ComputeShader::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11ComputeShader::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11ComputeShader::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11ComputeShader *base_ID3D11ComputeShader::impl() const
{
    return impl_;
}
      
