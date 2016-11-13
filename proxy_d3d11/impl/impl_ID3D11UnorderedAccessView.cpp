#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11UnorderedAccessView.h"

ID3D11UnorderedAccessView *create_wrapper_inner(ID3D11UnorderedAccessView *impl)
{
    return new impl_ID3D11UnorderedAccessView(impl);
}

ID3D11UnorderedAccessView *unwrap_inner(ID3D11UnorderedAccessView *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11UnorderedAccessView *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11UnorderedAccessView::impl_ID3D11UnorderedAccessView(ID3D11UnorderedAccessView *impl)
    : base_ID3D11UnorderedAccessView(impl)
{

}
      