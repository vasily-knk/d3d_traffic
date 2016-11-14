#include "stdafx.h"

#include "base_ID3D10Multithread.h"
#include "../wrappers.h"

ID3D10Multithread *unwrap_inner(ID3D10Multithread *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10Multithread *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10Multithread::base_ID3D10Multithread(ID3D10Multithread *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<IUnknown>(impl))
{

}

void base_ID3D10Multithread::Enter()
{
    
    impl_->Enter();
    
    
}
     
void base_ID3D10Multithread::Leave()
{
    
    impl_->Leave();
    
    
}
     
BOOL base_ID3D10Multithread::SetMultithreadProtected(BOOL bMTProtect)
{
    
    auto result_ = impl_->SetMultithreadProtected(bMTProtect);
    
    return result_;
}
     
BOOL base_ID3D10Multithread::GetMultithreadProtected()
{
    
    auto result_ = impl_->GetMultithreadProtected();
    
    return result_;
}
     

HRESULT base_ID3D10Multithread::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10Multithread::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10Multithread::Release()
{
    return parent_base_->Release();
}
     

ID3D10Multithread *base_ID3D10Multithread::impl() const
{
    return impl_;
}
      
