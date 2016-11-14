#include "stdafx.h"

#include "base_ID3D11UnorderedAccessView.h"
#include "../wrappers.h"

ID3D11UnorderedAccessView *unwrap_inner(ID3D11UnorderedAccessView *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11UnorderedAccessView *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D11UnorderedAccessView::base_ID3D11UnorderedAccessView(ID3D11UnorderedAccessView *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11View>(impl))
{

}

void base_ID3D11UnorderedAccessView::GetDesc(D3D11_UNORDERED_ACCESS_VIEW_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D11UnorderedAccessView::GetResource(ID3D11Resource** ppResource)
{
    return parent_base_->GetResource(ppResource);
}
     
void base_ID3D11UnorderedAccessView::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11UnorderedAccessView::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11UnorderedAccessView::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11UnorderedAccessView::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11UnorderedAccessView::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11UnorderedAccessView::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11UnorderedAccessView::Release()
{
    return parent_base_->Release();
}
     

ID3D11UnorderedAccessView *base_ID3D11UnorderedAccessView::impl() const
{
    return impl_;
}
      
