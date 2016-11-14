#pragma once

#include "base_ID3D10Texture3D.h"

struct impl_ID3D10Texture3D
    : base_ID3D10Texture3D
{
    explicit impl_ID3D10Texture3D(ID3D10Texture3D *impl);
};
      