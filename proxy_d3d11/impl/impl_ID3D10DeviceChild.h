#pragma once

#include "base_ID3D10DeviceChild.h"

struct impl_ID3D10DeviceChild
    : base_ID3D10DeviceChild
{
    explicit impl_ID3D10DeviceChild(ID3D10DeviceChild *impl);
};
      