#pragma once

#include "base_ID3D11DeviceContext.h"

struct impl_ID3D11DeviceContext
    : base_ID3D11DeviceContext
{
    explicit impl_ID3D11DeviceContext(ID3D11DeviceContext *impl);
};
      