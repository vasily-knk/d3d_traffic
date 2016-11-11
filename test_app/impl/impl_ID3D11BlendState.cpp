#include "stdafx.h"

#include "impl_ID3D11BlendState.h"

ID3D11BlendState *create_wrapper_inner(ID3D11BlendState *impl)
{
    return new impl_ID3D11BlendState(impl);
}

ID3D11BlendState *unwrap_inner(ID3D11BlendState *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11BlendState *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11BlendState::impl_ID3D11BlendState(ID3D11BlendState *impl)
    : base_ID3D11BlendState(impl)
{

}
      