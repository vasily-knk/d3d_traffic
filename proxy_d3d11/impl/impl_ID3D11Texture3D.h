#pragma once

#include "base_ID3D11Texture3D.h"

struct impl_ID3D11Texture3D
    : base_ID3D11Texture3D
{
    explicit impl_ID3D11Texture3D(ID3D11Texture3D *impl);
};                                                         
      