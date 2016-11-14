#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11InputLayout.h"

ID3D11InputLayout *create_wrapper_inner(ID3D11InputLayout *impl)
{
    return new impl_ID3D11InputLayout(impl);
}

impl_ID3D11InputLayout::impl_ID3D11InputLayout(ID3D11InputLayout *impl)
    : base_ID3D11InputLayout(impl)
{

}
      