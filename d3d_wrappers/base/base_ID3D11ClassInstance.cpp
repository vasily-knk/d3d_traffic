#include "stdafx.h"

#include "base_ID3D11ClassInstance.h"
#include "../wrappers.h"

ID3D11ClassInstance *unwrap_inner(ID3D11ClassInstance *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11ClassInstance *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11ClassInstance *create_wrapper_inner(ID3D11ClassInstance *impl)
{
    return new base_ID3D11ClassInstance(impl);
}
       

base_ID3D11ClassInstance::base_ID3D11ClassInstance(ID3D11ClassInstance *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}

void base_ID3D11ClassInstance::GetClassLinkage(ID3D11ClassLinkage** ppLinkage)
{
    log_method("ID3D11ClassInstance", "GetClassLinkage");
    
    impl_->GetClassLinkage(ppLinkage);
    if (ppLinkage != nullptr) *ppLinkage = wrap(*ppLinkage);
    
}
     
void base_ID3D11ClassInstance::GetDesc(D3D11_CLASS_INSTANCE_DESC* pDesc)
{
    log_method("ID3D11ClassInstance", "GetDesc");
    
    impl_->GetDesc(pDesc);
    
    
}
     
void base_ID3D11ClassInstance::GetInstanceName(LPSTR pInstanceName, SIZE_T* pBufferLength)
{
    log_method("ID3D11ClassInstance", "GetInstanceName");
    
    impl_->GetInstanceName(pInstanceName, pBufferLength);
    
    
}
     
void base_ID3D11ClassInstance::GetTypeName(LPSTR pTypeName, SIZE_T* pBufferLength)
{
    log_method("ID3D11ClassInstance", "GetTypeName");
    
    impl_->GetTypeName(pTypeName, pBufferLength);
    
    
}
     

void base_ID3D11ClassInstance::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11ClassInstance::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11ClassInstance::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11ClassInstance::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11ClassInstance::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11ClassInstance::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11ClassInstance::Release()
{
    return parent_base_->Release();
}
     

ID3D11ClassInstance *base_ID3D11ClassInstance::impl() const
{
    return impl_;
}
      
