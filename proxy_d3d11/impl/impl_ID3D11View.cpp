#include "stdafx.h"

#include "impl_ID3D11View.h"

ID3D11View *create_wrapper_inner(ID3D11View *impl)
{
    return new impl_ID3D11View(impl);
}

ID3D11View *unwrap_inner(ID3D11View *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11View *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11View::impl_ID3D11View(ID3D11View *impl)
    : base_ID3D11View(impl)
{

}
      