#include "stdafx.h"

#include "base_ID3D11ClassLinkage.h"
#include "../wrappers.h"

base_ID3D11ClassLinkage::base_ID3D11ClassLinkage(ID3D11ClassLinkage *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
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
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11ClassLinkage::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11ClassLinkage::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11ClassLinkage::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11ClassLinkage::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11ClassLinkage::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11ClassLinkage::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11ClassLinkage *base_ID3D11ClassLinkage::impl() const
{
    return impl_;
}
      
