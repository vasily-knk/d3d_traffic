#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10Device.h"

ID3D10Device *create_wrapper_inner(ID3D10Device *impl)
{
    return new impl_ID3D10Device(impl);
}

impl_ID3D10Device::impl_ID3D10Device(ID3D10Device *impl)
    : base_ID3D10Device(impl)
{

}
      