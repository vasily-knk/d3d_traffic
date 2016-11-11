#include "stdafx.h"

#include "impl_ID3D11RasterizerState.h"

ID3D11RasterizerState *create_wrapper_inner(ID3D11RasterizerState *impl)
{
    return new impl_ID3D11RasterizerState(impl);
}

ID3D11RasterizerState *unwrap_inner(ID3D11RasterizerState *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11RasterizerState *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11RasterizerState::impl_ID3D11RasterizerState(ID3D11RasterizerState *impl)
    : base_ID3D11RasterizerState(impl)
{

}
      