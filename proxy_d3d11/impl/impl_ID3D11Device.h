#pragma once

#include "base_ID3D11Device.h"

struct impl_ID3D11Device
    : base_ID3D11Device
{
    explicit impl_ID3D11Device(ID3D11Device *impl);
};
      