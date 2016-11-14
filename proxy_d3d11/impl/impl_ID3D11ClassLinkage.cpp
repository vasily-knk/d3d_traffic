#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11ClassLinkage.h"

ID3D11ClassLinkage *create_wrapper_inner(ID3D11ClassLinkage *impl)
{
    return new impl_ID3D11ClassLinkage(impl);
}

impl_ID3D11ClassLinkage::impl_ID3D11ClassLinkage(ID3D11ClassLinkage *impl)
    : base_ID3D11ClassLinkage(impl)
{

}
      