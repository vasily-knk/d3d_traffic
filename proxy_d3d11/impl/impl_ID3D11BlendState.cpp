#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11BlendState.h"

ID3D11BlendState *create_wrapper_inner(ID3D11BlendState *impl)
{
    return new impl_ID3D11BlendState(impl);
}

ID3D11BlendState *unwrap_inner(ID3D11BlendState *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11BlendState *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11BlendState::impl_ID3D11BlendState(ID3D11BlendState *impl)
    : base_ID3D11BlendState(impl)
{

}
      