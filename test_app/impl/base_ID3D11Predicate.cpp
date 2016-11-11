#include "stdafx.h"

#include "base_ID3D11Predicate.h"

base_ID3D11Predicate::base_ID3D11Predicate(ID3D11Predicate *impl)
    : impl_ID3D11Query(impl)
    , impl_(impl)
{

}



void base_ID3D11Predicate::GetDesc(D3D11_QUERY_DESC* pDesc)
{
    return impl_ID3D11Query::GetDesc(pDesc);
}
     
UINT base_ID3D11Predicate::GetDataSize()
{
    return impl_ID3D11Query::GetDataSize();
}
     
void base_ID3D11Predicate::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11Query::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11Predicate::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11Query::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11Predicate::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11Query::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11Predicate::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11Query::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11Predicate::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11Query::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11Predicate::AddRef()
{
    return impl_ID3D11Query::AddRef();
}
     
ULONG base_ID3D11Predicate::Release()
{
    return impl_ID3D11Query::Release();
}
     

ID3D11Predicate *base_ID3D11Predicate::impl() const
{
    return impl_;
}
      
