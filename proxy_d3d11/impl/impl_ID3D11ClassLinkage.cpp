#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11ClassLinkage.h"

ID3D11ClassLinkage *create_wrapper_inner(ID3D11ClassLinkage *impl)
{
    return new impl_ID3D11ClassLinkage(impl);
}

ID3D11ClassLinkage *unwrap_inner(ID3D11ClassLinkage *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11ClassLinkage *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11ClassLinkage::impl_ID3D11ClassLinkage(ID3D11ClassLinkage *impl)
    : base_ID3D11ClassLinkage(impl)
{

}
      