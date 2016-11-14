#include "stdafx.h"
#include "../wrappers.h"

#include "impl_IUnknown.h"

IUnknown *create_wrapper_inner(IUnknown *impl)
{
    return new impl_IUnknown(impl);
}

impl_IUnknown::impl_IUnknown(IUnknown *impl)
    : base_IUnknown(impl)
{

}
      
HRESULT impl_IUnknown::QueryInterface(const IID& riid, void** ppvObject)
{
    auto result = impl()->QueryInterface(riid, ppvObject);

    if (*ppvObject != nullptr)
    {
        auto p = static_cast<IUnknown *>(*ppvObject);
        auto wrapped = wrap_by_guid(p, riid);
        *ppvObject = wrapped;
    }

    return result;
}
