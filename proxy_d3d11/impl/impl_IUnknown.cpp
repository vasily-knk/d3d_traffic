#include "stdafx.h"
#include "../wrappers.h"

#include "impl_IUnknown.h"

IUnknown *create_wrapper_inner(IUnknown *impl)
{
    return new impl_IUnknown(impl);
}

IUnknown *unwrap_inner(IUnknown *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_IUnknown *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_IUnknown::impl_IUnknown(IUnknown *impl)
    : base_IUnknown(impl)
{

}
      