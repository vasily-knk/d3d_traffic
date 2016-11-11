#include "stdafx.h"

#include "impl_ID3D11VideoContext.h"

ID3D11VideoContext *create_wrapper_inner(ID3D11VideoContext *impl)
{
    return new impl_ID3D11VideoContext(impl);
}

ID3D11VideoContext *unwrap_inner(ID3D11VideoContext *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11VideoContext *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11VideoContext::impl_ID3D11VideoContext(ID3D11VideoContext *impl)
    : base_ID3D11VideoContext(impl)
{

}
      