#include "stdafx.h"

#include "base_ID3D11ClassInstance.h"

base_ID3D11ClassInstance::base_ID3D11ClassInstance(ID3D11ClassInstance *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
{

}

void base_ID3D11ClassInstance::GetClassLinkage(ID3D11ClassLinkage** ppLinkage)
{
    return impl_->GetClassLinkage(ppLinkage);
}
     
void base_ID3D11ClassInstance::GetDesc(D3D11_CLASS_INSTANCE_DESC* pDesc)
{
    return impl_->GetDesc(pDesc);
}
     
void base_ID3D11ClassInstance::GetInstanceName(LPSTR pInstanceName, SIZE_T* pBufferLength)
{
    return impl_->GetInstanceName(pInstanceName, pBufferLength);
}
     
void base_ID3D11ClassInstance::GetTypeName(LPSTR pTypeName, SIZE_T* pBufferLength)
{
    return impl_->GetTypeName(pTypeName, pBufferLength);
}
     

void base_ID3D11ClassInstance::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11ClassInstance::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11ClassInstance::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11ClassInstance::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11ClassInstance::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11ClassInstance::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11ClassInstance::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11ClassInstance *base_ID3D11ClassInstance::impl() const
{
    return impl_;
}
      
