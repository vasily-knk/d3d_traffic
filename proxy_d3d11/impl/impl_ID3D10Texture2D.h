#pragma once

#include "base_ID3D10Texture2D.h"

struct impl_ID3D10Texture2D
    : base_ID3D10Texture2D
{
    explicit impl_ID3D10Texture2D(ID3D10Texture2D *impl);
};
      