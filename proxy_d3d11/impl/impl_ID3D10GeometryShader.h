#pragma once

#include "base_ID3D10GeometryShader.h"

struct impl_ID3D10GeometryShader
    : base_ID3D10GeometryShader
{
    explicit impl_ID3D10GeometryShader(ID3D10GeometryShader *impl);
};
      