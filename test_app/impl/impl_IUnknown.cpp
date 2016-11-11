#include "stdafx.h"

#include "impl_IUnknown.h"

IUnknown *create_wrapper_inner(IUnknown *impl)
{
    return new impl_IUnknown(impl);
}

IUnknown *unwrap_inner(IUnknown *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_IUnknown *>(wrapper);
    return cast_wrapper->impl();
}

impl_IUnknown::impl_IUnknown(IUnknown *impl)
    : base_IUnknown(impl)
{

}
      