#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11DeviceChild.h"

ID3D11DeviceChild *create_wrapper_inner(ID3D11DeviceChild *impl)
{
    return new impl_ID3D11DeviceChild(impl);
}

ID3D11DeviceChild *unwrap_inner(ID3D11DeviceChild *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11DeviceChild *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11DeviceChild::impl_ID3D11DeviceChild(ID3D11DeviceChild *impl)
    : base_ID3D11DeviceChild(impl)
{

}
      