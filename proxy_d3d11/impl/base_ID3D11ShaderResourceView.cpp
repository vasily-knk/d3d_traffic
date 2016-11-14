#include "stdafx.h"

#include "base_ID3D11ShaderResourceView.h"
#include "../wrappers.h"

ID3D11ShaderResourceView *unwrap_inner(ID3D11ShaderResourceView *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11ShaderResourceView *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D11ShaderResourceView::base_ID3D11ShaderResourceView(ID3D11ShaderResourceView *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11View>(impl))
{

}

void base_ID3D11ShaderResourceView::GetDesc(D3D11_SHADER_RESOURCE_VIEW_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D11ShaderResourceView::GetResource(ID3D11Resource** ppResource)
{
    return parent_base_->GetResource(ppResource);
}
     
void base_ID3D11ShaderResourceView::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11ShaderResourceView::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11ShaderResourceView::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11ShaderResourceView::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11ShaderResourceView::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11ShaderResourceView::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11ShaderResourceView::Release()
{
    return parent_base_->Release();
}
     

ID3D11ShaderResourceView *base_ID3D11ShaderResourceView::impl() const
{
    return impl_;
}
      
