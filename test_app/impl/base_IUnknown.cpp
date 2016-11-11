#include "stdafx.h"

#include "base_IUnknown.h"

base_IUnknown::base_IUnknown(IUnknown *impl)
    : impl_ROOT(impl)
    , impl_(impl)
{

}

HRESULT base_IUnknown::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_->QueryInterface(riid, ppvObject);
}
     
ULONG base_IUnknown::AddRef()
{
    return impl_->AddRef();
}
     
ULONG base_IUnknown::Release()
{
    return impl_->Release();
}
     



IUnknown *base_IUnknown::impl() const
{
    return impl_;
}
      
