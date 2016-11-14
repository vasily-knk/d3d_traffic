#pragma once

#include "base_ID3D10PixelShader.h"

struct impl_ID3D10PixelShader
    : base_ID3D10PixelShader
{
    explicit impl_ID3D10PixelShader(ID3D10PixelShader *impl);
};
      