#include "stdafx.h"

#include "impl_ID3D11Resource.h"

ID3D11Resource *create_wrapper_inner(ID3D11Resource *impl)
{
    return new impl_ID3D11Resource(impl);
}

ID3D11Resource *unwrap_inner(ID3D11Resource *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11Resource *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11Resource::impl_ID3D11Resource(ID3D11Resource *impl)
    : base_ID3D11Resource(impl)
{

}
      