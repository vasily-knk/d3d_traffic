#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11DeviceContext.h"

ID3D11DeviceContext *create_wrapper_inner(ID3D11DeviceContext *impl)
{
    return new impl_ID3D11DeviceContext(impl);
}

ID3D11DeviceContext *unwrap_inner(ID3D11DeviceContext *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11DeviceContext *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11DeviceContext::impl_ID3D11DeviceContext(ID3D11DeviceContext *impl)
    : base_ID3D11DeviceContext(impl)
{

}
      