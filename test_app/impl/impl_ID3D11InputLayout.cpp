#include "stdafx.h"

#include "impl_ID3D11InputLayout.h"

ID3D11InputLayout *create_wrapper_inner(ID3D11InputLayout *impl)
{
    return new impl_ID3D11InputLayout(impl);
}

ID3D11InputLayout *unwrap_inner(ID3D11InputLayout *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11InputLayout *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11InputLayout::impl_ID3D11InputLayout(ID3D11InputLayout *impl)
    : base_ID3D11InputLayout(impl)
{

}
      