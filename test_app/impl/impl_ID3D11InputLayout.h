#pragma once

#include "base_ID3D11InputLayout.h"

struct impl_ID3D11InputLayout
    : base_ID3D11InputLayout
{
    explicit impl_ID3D11InputLayout(ID3D11InputLayout *impl);
};
      