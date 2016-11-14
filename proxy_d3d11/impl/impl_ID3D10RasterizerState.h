#pragma once

#include "base_ID3D10RasterizerState.h"

struct impl_ID3D10RasterizerState
    : base_ID3D10RasterizerState
{
    explicit impl_ID3D10RasterizerState(ID3D10RasterizerState *impl);
};
      