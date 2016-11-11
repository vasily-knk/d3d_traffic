#include "stdafx.h"

#include "impl_ID3D11Asynchronous.h"

ID3D11Asynchronous *create_wrapper_inner(ID3D11Asynchronous *impl)
{
    return new impl_ID3D11Asynchronous(impl);
}

ID3D11Asynchronous *unwrap_inner(ID3D11Asynchronous *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11Asynchronous *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11Asynchronous::impl_ID3D11Asynchronous(ID3D11Asynchronous *impl)
    : base_ID3D11Asynchronous(impl)
{

}
      