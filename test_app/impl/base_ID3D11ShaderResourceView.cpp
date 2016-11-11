#include "stdafx.h"

#include "base_ID3D11ShaderResourceView.h"

base_ID3D11ShaderResourceView::base_ID3D11ShaderResourceView(ID3D11ShaderResourceView *impl)
    : impl_ID3D11View(impl)
    , impl_(impl)
{

}

void base_ID3D11ShaderResourceView::GetDesc(D3D11_SHADER_RESOURCE_VIEW_DESC* pDesc)
{
    return impl_->GetDesc(pDesc);
}
     

void base_ID3D11ShaderResourceView::GetResource(ID3D11Resource** ppResource)
{
    return impl_ID3D11View::GetResource(ppResource);
}
     
void base_ID3D11ShaderResourceView::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11View::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11ShaderResourceView::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11View::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11ShaderResourceView::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11View::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11ShaderResourceView::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11View::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11ShaderResourceView::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11View::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11ShaderResourceView::AddRef()
{
    return impl_ID3D11View::AddRef();
}
     
ULONG base_ID3D11ShaderResourceView::Release()
{
    return impl_ID3D11View::Release();
}
     

ID3D11ShaderResourceView *base_ID3D11ShaderResourceView::impl() const
{
    return impl_;
}
      
