#include "stdafx.h"

#include "impl_ID3D11Predicate.h"

ID3D11Predicate *create_wrapper_inner(ID3D11Predicate *impl)
{
    return new impl_ID3D11Predicate(impl);
}

ID3D11Predicate *unwrap_inner(ID3D11Predicate *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11Predicate *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11Predicate::impl_ID3D11Predicate(ID3D11Predicate *impl)
    : base_ID3D11Predicate(impl)
{

}
      