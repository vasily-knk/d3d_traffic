#pragma once

#include "base_ID3D11Texture2D.h"

struct impl_ID3D11Texture2D
    : base_ID3D11Texture2D
{
    explicit impl_ID3D11Texture2D(ID3D11Texture2D *impl);
};
      