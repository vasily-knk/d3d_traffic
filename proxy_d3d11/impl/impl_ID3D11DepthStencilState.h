#pragma once

#include "base_ID3D11DepthStencilState.h"

struct impl_ID3D11DepthStencilState
    : base_ID3D11DepthStencilState
{
    explicit impl_ID3D11DepthStencilState(ID3D11DepthStencilState *impl);
};
      