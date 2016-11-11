#pragma once

#include "base_ID3D11DeviceChild.h"

struct impl_ID3D11DeviceChild
    : base_ID3D11DeviceChild
{
    explicit impl_ID3D11DeviceChild(ID3D11DeviceChild *impl);
};
      