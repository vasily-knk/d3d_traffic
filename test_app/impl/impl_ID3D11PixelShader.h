#pragma once

#include "base_ID3D11PixelShader.h"

struct impl_ID3D11PixelShader
    : base_ID3D11PixelShader
{
    explicit impl_ID3D11PixelShader(ID3D11PixelShader *impl);
};
      