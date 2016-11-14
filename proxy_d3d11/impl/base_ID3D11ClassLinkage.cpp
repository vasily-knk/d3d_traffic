#include "stdafx.h"

#include "base_ID3D11ClassLinkage.h"
#include "../wrappers.h"

ID3D11ClassLinkage *unwrap_inner(ID3D11ClassLinkage *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11ClassLinkage *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D11ClassLinkage::base_ID3D11ClassLinkage(ID3D11ClassLinkage *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}

HRESULT base_ID3D11ClassLinkage::GetClassInstance(LPCSTR pClassInstanceName, UINT InstanceIndex, ID3D11ClassInstance** ppInstance)
{
    
    auto result_ = impl_->GetClassInstance(pClassInstanceName, InstanceIndex, ppInstance);
    if (ppInstance != nullptr) *ppInstance = wrap(*ppInstance);
    return result_;
}
     
HRESULT base_ID3D11ClassLinkage::CreateClassInstance(LPCSTR pClassTypeName, UINT ConstantBufferOffset, UINT ConstantVectorOffset, UINT TextureOffset, UINT SamplerOffset, ID3D11ClassInstance** ppInstance)
{
    
    auto result_ = impl_->CreateClassInstance(pClassTypeName, ConstantBufferOffset, ConstantVectorOffset, TextureOffset, SamplerOffset, ppInstance);
    if (ppInstance != nullptr) *ppInstance = wrap(*ppInstance);
    return result_;
}
     

void base_ID3D11ClassLinkage::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11ClassLinkage::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11ClassLinkage::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11ClassLinkage::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11ClassLinkage::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11ClassLinkage::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11ClassLinkage::Release()
{
    return parent_base_->Release();
}
     

ID3D11ClassLinkage *base_ID3D11ClassLinkage::impl() const
{
    return impl_;
}
      
