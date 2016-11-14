#pragma once

#include "base_ID3D10DepthStencilState.h"

struct impl_ID3D10DepthStencilState
    : base_ID3D10DepthStencilState
{
    explicit impl_ID3D10DepthStencilState(ID3D10DepthStencilState *impl);
};
      