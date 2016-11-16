#include "stdafx.h"

#include "base_ID3D11BlendState1.h"
#include "../wrappers.h"

ID3D11BlendState1 *unwrap_inner(ID3D11BlendState1 *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11BlendState1 *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11BlendState1 *create_wrapper_inner(ID3D11BlendState1 *impl)
{
    return new base_ID3D11BlendState1(impl);
}
       

base_ID3D11BlendState1::base_ID3D11BlendState1(ID3D11BlendState1 *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11BlendState>(impl))
{

}

void base_ID3D11BlendState1::GetDesc1(D3D11_BLEND_DESC1* pDesc)
{
    log_method("ID3D11BlendState1", "GetDesc1");
    
    impl_->GetDesc1(pDesc);
    
    
}
     

void base_ID3D11BlendState1::GetDesc(D3D11_BLEND_DESC* pDesc)
{
    return parent_base_->GetDesc(pDesc);
}
     
void base_ID3D11BlendState1::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11BlendState1::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11BlendState1::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11BlendState1::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11BlendState1::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11BlendState1::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11BlendState1::Release()
{
    return parent_base_->Release();
}
     

ID3D11BlendState1 *base_ID3D11BlendState1::impl() const
{
    return impl_;
}
      
