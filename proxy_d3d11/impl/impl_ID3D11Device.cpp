#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11Device.h"

ID3D11Device *create_wrapper_inner(ID3D11Device *impl)
{
    return new impl_ID3D11Device(impl);
}

ID3D11Device *unwrap_inner(ID3D11Device *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11Device *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11Device::impl_ID3D11Device(ID3D11Device *impl)
    : base_ID3D11Device(impl)
{

}
      