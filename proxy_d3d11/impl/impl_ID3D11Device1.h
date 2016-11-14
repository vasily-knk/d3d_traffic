#pragma once

#include "base_ID3D11Device1.h"

struct impl_ID3D11Device1
    : base_ID3D11Device1
{
    explicit impl_ID3D11Device1(ID3D11Device1 *impl);
};
      