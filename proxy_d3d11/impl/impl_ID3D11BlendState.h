#pragma once

#include "base_ID3D11BlendState.h"

struct impl_ID3D11BlendState
    : base_ID3D11BlendState
{
    explicit impl_ID3D11BlendState(ID3D11BlendState *impl);
};
      