#include "stdafx.h"

#include "base_ID3D11Query.h"

base_ID3D11Query::base_ID3D11Query(ID3D11Query *impl)
    : impl_ID3D11Asynchronous(impl)
    , impl_(impl)
{

}

void base_ID3D11Query::GetDesc(D3D11_QUERY_DESC* pDesc)
{
    return impl_->GetDesc(pDesc);
}
     

UINT base_ID3D11Query::GetDataSize()
{
    return impl_ID3D11Asynchronous::GetDataSize();
}
     
void base_ID3D11Query::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11Asynchronous::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11Query::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11Asynchronous::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11Query::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11Asynchronous::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11Query::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11Asynchronous::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11Query::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11Asynchronous::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11Query::AddRef()
{
    return impl_ID3D11Asynchronous::AddRef();
}
     
ULONG base_ID3D11Query::Release()
{
    return impl_ID3D11Asynchronous::Release();
}
     

ID3D11Query *base_ID3D11Query::impl() const
{
    return impl_;
}
      
