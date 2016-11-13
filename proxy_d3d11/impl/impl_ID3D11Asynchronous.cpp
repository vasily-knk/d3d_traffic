#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11Asynchronous.h"

ID3D11Asynchronous *create_wrapper_inner(ID3D11Asynchronous *impl)
{
    return new impl_ID3D11Asynchronous(impl);
}

ID3D11Asynchronous *unwrap_inner(ID3D11Asynchronous *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11Asynchronous *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11Asynchronous::impl_ID3D11Asynchronous(ID3D11Asynchronous *impl)
    : base_ID3D11Asynchronous(impl)
{

}
      