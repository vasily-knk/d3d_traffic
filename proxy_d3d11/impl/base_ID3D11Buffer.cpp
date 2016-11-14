#include "stdafx.h"

#include "base_ID3D11Buffer.h"
#include "../wrappers.h"

ID3D11Buffer *unwrap_inner(ID3D11Buffer *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11Buffer *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D11Buffer::base_ID3D11Buffer(ID3D11Buffer *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11Resource>(impl))
{

}

void base_ID3D11Buffer::GetDesc(D3D11_BUFFER_DESC* pDesc)
{
    
    impl_->GetDesc(pDesc);
    
    
}
     

void base_ID3D11Buffer::GetType(D3D11_RESOURCE_DIMENSION* pResourceDimension)
{
    return parent_base_->GetType(pResourceDimension);
}
     
void base_ID3D11Buffer::SetEvictionPriority(UINT EvictionPriority)
{
    return parent_base_->SetEvictionPriority(EvictionPriority);
}
     
UINT base_ID3D11Buffer::GetEvictionPriority()
{
    return parent_base_->GetEvictionPriority();
}
     
void base_ID3D11Buffer::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11Buffer::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11Buffer::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11Buffer::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11Buffer::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11Buffer::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11Buffer::Release()
{
    return parent_base_->Release();
}
     

ID3D11Buffer *base_ID3D11Buffer::impl() const
{
    return impl_;
}
      
