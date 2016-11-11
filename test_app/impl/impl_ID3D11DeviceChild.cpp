#include "stdafx.h"

#include "impl_ID3D11DeviceChild.h"

ID3D11DeviceChild *create_wrapper_inner(ID3D11DeviceChild *impl)
{
    return new impl_ID3D11DeviceChild(impl);
}

ID3D11DeviceChild *unwrap_inner(ID3D11DeviceChild *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11DeviceChild *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11DeviceChild::impl_ID3D11DeviceChild(ID3D11DeviceChild *impl)
    : base_ID3D11DeviceChild(impl)
{

}
      