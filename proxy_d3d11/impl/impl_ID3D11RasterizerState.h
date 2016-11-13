#pragma once

#include "base_ID3D11RasterizerState.h"

struct impl_ID3D11RasterizerState
    : base_ID3D11RasterizerState
{
    explicit impl_ID3D11RasterizerState(ID3D11RasterizerState *impl);
};
      