#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11UnorderedAccessView.h"

ID3D11UnorderedAccessView *create_wrapper_inner(ID3D11UnorderedAccessView *impl)
{
    return new impl_ID3D11UnorderedAccessView(impl);
}

impl_ID3D11UnorderedAccessView::impl_ID3D11UnorderedAccessView(ID3D11UnorderedAccessView *impl)
    : base_ID3D11UnorderedAccessView(impl)
{

}
      