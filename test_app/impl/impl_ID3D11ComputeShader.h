#pragma once

#include "base_ID3D11ComputeShader.h"

struct impl_ID3D11ComputeShader
    : base_ID3D11ComputeShader
{
    explicit impl_ID3D11ComputeShader(ID3D11ComputeShader *impl);
};
      