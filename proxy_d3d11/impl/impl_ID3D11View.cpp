#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11View.h"

ID3D11View *create_wrapper_inner(ID3D11View *impl)
{
    return new impl_ID3D11View(impl);
}

ID3D11View *unwrap_inner(ID3D11View *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11View *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11View::impl_ID3D11View(ID3D11View *impl)
    : base_ID3D11View(impl)
{

}
      