#pragma once

#include "base_ID3D10Device.h"

struct impl_ID3D10Device
    : base_ID3D10Device
{
    explicit impl_ID3D10Device(ID3D10Device *impl);
};
      