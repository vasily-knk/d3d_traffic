#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11RasterizerState.h"

ID3D11RasterizerState *create_wrapper_inner(ID3D11RasterizerState *impl)
{
    return new impl_ID3D11RasterizerState(impl);
}

ID3D11RasterizerState *unwrap_inner(ID3D11RasterizerState *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11RasterizerState *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11RasterizerState::impl_ID3D11RasterizerState(ID3D11RasterizerState *impl)
    : base_ID3D11RasterizerState(impl)
{

}
      