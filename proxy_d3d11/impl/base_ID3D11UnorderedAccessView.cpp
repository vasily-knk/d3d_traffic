#include "stdafx.h"

#include "base_ID3D11UnorderedAccessView.h"
#include "../wrappers.h"

base_ID3D11UnorderedAccessView::base_ID3D11UnorderedAccessView(ID3D11UnorderedAccessView *impl)
    : impl_ID3D11View(impl)
    , impl_(impl)
{

}

void base_ID3D11UnorderedAccessView::GetDesc(D3D11_UNORDERED_ACCESS_VIEW_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D11UnorderedAccessView::GetResource(ID3D11Resource** ppResource)
{
    return impl_ID3D11View::GetResource(ppResource);
}
     
void base_ID3D11UnorderedAccessView::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11View::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11UnorderedAccessView::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11View::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11UnorderedAccessView::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11View::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11UnorderedAccessView::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11View::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11UnorderedAccessView::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11View::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11UnorderedAccessView::AddRef()
{
    return impl_ID3D11View::AddRef();
}
     
ULONG base_ID3D11UnorderedAccessView::Release()
{
    return impl_ID3D11View::Release();
}
     

ID3D11UnorderedAccessView *base_ID3D11UnorderedAccessView::impl() const
{
    return impl_;
}
      
