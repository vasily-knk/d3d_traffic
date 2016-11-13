#pragma once

#include "base_ID3D11DomainShader.h"

struct impl_ID3D11DomainShader
    : base_ID3D11DomainShader
{
    explicit impl_ID3D11DomainShader(ID3D11DomainShader *impl);
};
      