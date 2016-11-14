#include "stdafx.h"

#include "base_ID3D10ShaderResourceView.h"
#include "../wrappers.h"

ID3D10ShaderResourceView *unwrap_inner(ID3D10ShaderResourceView *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10ShaderResourceView *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10ShaderResourceView::base_ID3D10ShaderResourceView(ID3D10ShaderResourceView *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10View>(impl))
{

}

void base_ID3D10ShaderResourceView::GetDesc(D3D10_SHADER_RESOURCE_VIEW_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D10ShaderResourceView::GetResource(ID3D10Resource** ppResource)
{
    return parent_base_->GetResource(ppResource);
}
     
void base_ID3D10ShaderResourceView::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10ShaderResourceView::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10ShaderResourceView::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10ShaderResourceView::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10ShaderResourceView::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10ShaderResourceView::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10ShaderResourceView::Release()
{
    return parent_base_->Release();
}
     

ID3D10ShaderResourceView *base_ID3D10ShaderResourceView::impl() const
{
    return impl_;
}
      
