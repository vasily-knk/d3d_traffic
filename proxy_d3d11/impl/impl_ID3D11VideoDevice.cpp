#include "stdafx.h"

#include "impl_ID3D11VideoDevice.h"

ID3D11VideoDevice *create_wrapper_inner(ID3D11VideoDevice *impl)
{
    return new impl_ID3D11VideoDevice(impl);
}

ID3D11VideoDevice *unwrap_inner(ID3D11VideoDevice *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11VideoDevice *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11VideoDevice::impl_ID3D11VideoDevice(ID3D11VideoDevice *impl)
    : base_ID3D11VideoDevice(impl)
{

}
      