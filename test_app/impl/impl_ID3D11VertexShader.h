#pragma once

#include "base_ID3D11VertexShader.h"

struct impl_ID3D11VertexShader
    : base_ID3D11VertexShader
{
    explicit impl_ID3D11VertexShader(ID3D11VertexShader *impl);
};
      