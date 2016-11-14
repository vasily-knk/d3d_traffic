#pragma once

#include "base_ID3D11BlendState1.h"

struct impl_ID3D11BlendState1
    : base_ID3D11BlendState1
{
    explicit impl_ID3D11BlendState1(ID3D11BlendState1 *impl);
};
      