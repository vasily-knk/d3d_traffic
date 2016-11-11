#include "stdafx.h"

#include "impl_ID3D11DepthStencilState.h"

ID3D11DepthStencilState *create_wrapper_inner(ID3D11DepthStencilState *impl)
{
    return new impl_ID3D11DepthStencilState(impl);
}

ID3D11DepthStencilState *unwrap_inner(ID3D11DepthStencilState *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11DepthStencilState *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11DepthStencilState::impl_ID3D11DepthStencilState(ID3D11DepthStencilState *impl)
    : base_ID3D11DepthStencilState(impl)
{

}
      