#pragma once

#include "base_ID3D10InputLayout.h"

struct impl_ID3D10InputLayout
    : base_ID3D10InputLayout
{
    explicit impl_ID3D10InputLayout(ID3D10InputLayout *impl);
};
      