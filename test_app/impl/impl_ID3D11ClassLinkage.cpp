#include "stdafx.h"

#include "impl_ID3D11ClassLinkage.h"

ID3D11ClassLinkage *create_wrapper_inner(ID3D11ClassLinkage *impl)
{
    return new impl_ID3D11ClassLinkage(impl);
}

ID3D11ClassLinkage *unwrap_inner(ID3D11ClassLinkage *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11ClassLinkage *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11ClassLinkage::impl_ID3D11ClassLinkage(ID3D11ClassLinkage *impl)
    : base_ID3D11ClassLinkage(impl)
{

}
      