#pragma once

#include "base_ID3D11GeometryShader.h"

struct impl_ID3D11GeometryShader
    : base_ID3D11GeometryShader
{
    explicit impl_ID3D11GeometryShader(ID3D11GeometryShader *impl);
};
      