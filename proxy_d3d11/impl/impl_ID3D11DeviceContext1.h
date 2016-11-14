#pragma once

#include "base_ID3D11DeviceContext1.h"

struct impl_ID3D11DeviceContext1
    : base_ID3D11DeviceContext1
{
    explicit impl_ID3D11DeviceContext1(ID3D11DeviceContext1 *impl);
};
      