#pragma once

#include "base_ID3D10Texture1D.h"

struct impl_ID3D10Texture1D
    : base_ID3D10Texture1D
{
    explicit impl_ID3D10Texture1D(ID3D10Texture1D *impl);
};
      