#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10SamplerState.h"

ID3D10SamplerState *create_wrapper_inner(ID3D10SamplerState *impl)
{
    return new impl_ID3D10SamplerState(impl);
}

impl_ID3D10SamplerState::impl_ID3D10SamplerState(ID3D10SamplerState *impl)
    : base_ID3D10SamplerState(impl)
{

}
      