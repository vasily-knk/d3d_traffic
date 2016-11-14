#pragma once

#include "base_ID3D10BlendState.h"

struct impl_ID3D10BlendState
    : base_ID3D10BlendState
{
    explicit impl_ID3D10BlendState(ID3D10BlendState *impl);
};
      