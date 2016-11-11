#include "stdafx.h"

#include "impl_ID3D11Buffer.h"

ID3D11Buffer *create_wrapper_inner(ID3D11Buffer *impl)
{
    return new impl_ID3D11Buffer(impl);
}

ID3D11Buffer *unwrap_inner(ID3D11Buffer *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11Buffer *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11Buffer::impl_ID3D11Buffer(ID3D11Buffer *impl)
    : base_ID3D11Buffer(impl)
{

}
      