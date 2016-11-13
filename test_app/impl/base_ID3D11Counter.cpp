#include "stdafx.h"

#include "base_ID3D11Counter.h"
#include "../wrappers.h"

base_ID3D11Counter::base_ID3D11Counter(ID3D11Counter *impl)
    : impl_ID3D11Asynchronous(impl)
    , impl_(impl)
{

}

void base_ID3D11Counter::GetDesc(D3D11_COUNTER_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

UINT base_ID3D11Counter::GetDataSize()
{
    return impl_ID3D11Asynchronous::GetDataSize();
}
     
void base_ID3D11Counter::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11Asynchronous::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11Counter::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11Asynchronous::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11Counter::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11Asynchronous::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11Counter::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11Asynchronous::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11Counter::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11Asynchronous::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11Counter::AddRef()
{
    return impl_ID3D11Asynchronous::AddRef();
}
     
ULONG base_ID3D11Counter::Release()
{
    return impl_ID3D11Asynchronous::Release();
}
     

ID3D11Counter *base_ID3D11Counter::impl() const
{
    return impl_;
}
      
