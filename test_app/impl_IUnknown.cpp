#include "stdafx.h"

#include "impl_IUnknown.h"

impl_IUnknown::~impl_IUnknown()
{
}

impl_IUnknown::impl_IUnknown(IUnknown* impl)
    : impl_(impl)
{
}

HRESULT impl_IUnknown::QueryInterface(const IID& riid, void** ppvObject)
{
    return impl_->QueryInterface(riid, ppvObject);
}

ULONG impl_IUnknown::AddRef()
{
    return impl_->AddRef();
}

ULONG impl_IUnknown::Release()
{
    return impl_->Release();
}
