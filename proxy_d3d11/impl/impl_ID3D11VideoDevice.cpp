#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11VideoDevice.h"

ID3D11VideoDevice *create_wrapper_inner(ID3D11VideoDevice *impl)
{
    return new impl_ID3D11VideoDevice(impl);
}

ID3D11VideoDevice *unwrap_inner(ID3D11VideoDevice *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11VideoDevice *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11VideoDevice::impl_ID3D11VideoDevice(ID3D11VideoDevice *impl)
    : base_ID3D11VideoDevice(impl)
{

}
      