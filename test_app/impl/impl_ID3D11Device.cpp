#include "stdafx.h"

#include "impl_ID3D11Device.h"

ID3D11Device *create_wrapper_inner(ID3D11Device *impl)
{
    return new impl_ID3D11Device(impl);
}

ID3D11Device *unwrap_inner(ID3D11Device *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11Device *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11Device::impl_ID3D11Device(ID3D11Device *impl)
    : base_ID3D11Device(impl)
{

}
      