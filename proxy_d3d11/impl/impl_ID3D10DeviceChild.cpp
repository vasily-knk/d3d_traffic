#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10DeviceChild.h"

ID3D10DeviceChild *create_wrapper_inner(ID3D10DeviceChild *impl)
{
    return new impl_ID3D10DeviceChild(impl);
}

impl_ID3D10DeviceChild::impl_ID3D10DeviceChild(ID3D10DeviceChild *impl)
    : base_ID3D10DeviceChild(impl)
{

}
      