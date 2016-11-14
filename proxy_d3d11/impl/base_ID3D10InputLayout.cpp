#include "stdafx.h"

#include "base_ID3D10InputLayout.h"
#include "../wrappers.h"

ID3D10InputLayout *unwrap_inner(ID3D10InputLayout *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10InputLayout *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10InputLayout::base_ID3D10InputLayout(ID3D10InputLayout *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D10DeviceChild>(impl))
{

}



void base_ID3D10InputLayout::GetDevice(ID3D10Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D10InputLayout::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D10InputLayout::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D10InputLayout::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D10InputLayout::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10InputLayout::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10InputLayout::Release()
{
    return parent_base_->Release();
}
     

ID3D10InputLayout *base_ID3D10InputLayout::impl() const
{
    return impl_;
}
      
