#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11DepthStencilState.h"

ID3D11DepthStencilState *create_wrapper_inner(ID3D11DepthStencilState *impl)
{
    return new impl_ID3D11DepthStencilState(impl);
}

ID3D11DepthStencilState *unwrap_inner(ID3D11DepthStencilState *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11DepthStencilState *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11DepthStencilState::impl_ID3D11DepthStencilState(ID3D11DepthStencilState *impl)
    : base_ID3D11DepthStencilState(impl)
{

}
      