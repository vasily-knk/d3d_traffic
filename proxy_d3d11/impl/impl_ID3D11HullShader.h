#pragma once

#include "base_ID3D11HullShader.h"

struct impl_ID3D11HullShader
    : base_ID3D11HullShader
{
    explicit impl_ID3D11HullShader(ID3D11HullShader *impl);
};
      