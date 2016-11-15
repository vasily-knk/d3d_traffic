#include "stdafx.h"

#include "base_IUnknown.h"
#include "../wrappers.h"

IUnknown *unwrap_inner(IUnknown *wrapper)
{
    auto *cast_wrapper = static_cast<base_IUnknown *>(wrapper);
    return cast_wrapper->impl();
}



base_IUnknown::base_IUnknown(IUnknown *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ROOT>(impl))
{

}

HRESULT base_IUnknown::QueryInterface(REFIID riid, void** ppvObject)
{
    
    auto result_ = impl_->QueryInterface(riid, ppvObject);
    
    return result_;
}
     
ULONG base_IUnknown::AddRef()
{
    
    auto result_ = impl_->AddRef();
    
    return result_;
}
     
ULONG base_IUnknown::Release()
{
    
    auto result_ = impl_->Release();
    
    return result_;
}
     



IUnknown *base_IUnknown::impl() const
{
    return impl_;
}
      
