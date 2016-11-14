#pragma once

#include "base_ID3D10SamplerState.h"

struct impl_ID3D10SamplerState
    : base_ID3D10SamplerState
{
    explicit impl_ID3D10SamplerState(ID3D10SamplerState *impl);
};
      