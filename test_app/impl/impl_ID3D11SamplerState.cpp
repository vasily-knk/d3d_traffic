#include "stdafx.h"

#include "impl_ID3D11SamplerState.h"

ID3D11SamplerState *create_wrapper_inner(ID3D11SamplerState *impl)
{
    return new impl_ID3D11SamplerState(impl);
}

ID3D11SamplerState *unwrap_inner(ID3D11SamplerState *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11SamplerState *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11SamplerState::impl_ID3D11SamplerState(ID3D11SamplerState *impl)
    : base_ID3D11SamplerState(impl)
{

}
      