#include "stdafx.h"

#include "base_IUnknown.h"
#include "../wrappers.h"

base_IUnknown::base_IUnknown(IUnknown *impl)
    : impl_ROOT(impl)
    , impl_(impl)
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
      
