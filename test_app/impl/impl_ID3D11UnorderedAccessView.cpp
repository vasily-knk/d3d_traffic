#include "stdafx.h"

#include "impl_ID3D11UnorderedAccessView.h"

ID3D11UnorderedAccessView *create_wrapper_inner(ID3D11UnorderedAccessView *impl)
{
    return new impl_ID3D11UnorderedAccessView(impl);
}

ID3D11UnorderedAccessView *unwrap_inner(ID3D11UnorderedAccessView *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11UnorderedAccessView *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11UnorderedAccessView::impl_ID3D11UnorderedAccessView(ID3D11UnorderedAccessView *impl)
    : base_ID3D11UnorderedAccessView(impl)
{

}
      