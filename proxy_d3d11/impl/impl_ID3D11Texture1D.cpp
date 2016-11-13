#include "stdafx.h"

#include "impl_ID3D11Texture1D.h"

ID3D11Texture1D *create_wrapper_inner(ID3D11Texture1D *impl)
{
    return new impl_ID3D11Texture1D(impl);
}

ID3D11Texture1D *unwrap_inner(ID3D11Texture1D *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11Texture1D *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11Texture1D::impl_ID3D11Texture1D(ID3D11Texture1D *impl)
    : base_ID3D11Texture1D(impl)
{

}
      