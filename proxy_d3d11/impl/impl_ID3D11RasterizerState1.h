#pragma once

#include "base_ID3D11RasterizerState1.h"

struct impl_ID3D11RasterizerState1
    : base_ID3D11RasterizerState1
{
    explicit impl_ID3D11RasterizerState1(ID3D11RasterizerState1 *impl);
};
      