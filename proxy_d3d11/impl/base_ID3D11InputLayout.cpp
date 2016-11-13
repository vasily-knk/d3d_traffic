#include "stdafx.h"

#include "base_ID3D11InputLayout.h"
#include "../wrappers.h"

base_ID3D11InputLayout::base_ID3D11InputLayout(ID3D11InputLayout *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
{

}



void base_ID3D11InputLayout::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11InputLayout::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11InputLayout::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11InputLayout::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11InputLayout::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11InputLayout::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11InputLayout::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11InputLayout *base_ID3D11InputLayout::impl() const
{
    return impl_;
}
      
