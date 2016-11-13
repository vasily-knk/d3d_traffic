#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11SamplerState.h"

ID3D11SamplerState *create_wrapper_inner(ID3D11SamplerState *impl)
{
    return new impl_ID3D11SamplerState(impl);
}

ID3D11SamplerState *unwrap_inner(ID3D11SamplerState *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11SamplerState *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11SamplerState::impl_ID3D11SamplerState(ID3D11SamplerState *impl)
    : base_ID3D11SamplerState(impl)
{

}
      