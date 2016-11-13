#pragma once

#include "base_ID3D11SamplerState.h"

struct impl_ID3D11SamplerState
    : base_ID3D11SamplerState
{
    explicit impl_ID3D11SamplerState(ID3D11SamplerState *impl);
};
      