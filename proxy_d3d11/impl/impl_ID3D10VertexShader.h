#pragma once

#include "base_ID3D10VertexShader.h"

struct impl_ID3D10VertexShader
    : base_ID3D10VertexShader
{
    explicit impl_ID3D10VertexShader(ID3D10VertexShader *impl);
};
      