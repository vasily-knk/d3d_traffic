#pragma once

#include "base_ID3D11Texture1D.h"

struct impl_ID3D11Texture1D
    : base_ID3D11Texture1D
{
    explicit impl_ID3D11Texture1D(ID3D11Texture1D *impl);
};
      