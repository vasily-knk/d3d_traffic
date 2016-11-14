#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11VideoDevice.h"

ID3D11VideoDevice *create_wrapper_inner(ID3D11VideoDevice *impl)
{
    return new impl_ID3D11VideoDevice(impl);
}

impl_ID3D11VideoDevice::impl_ID3D11VideoDevice(ID3D11VideoDevice *impl)
    : base_ID3D11VideoDevice(impl)
{

}
      