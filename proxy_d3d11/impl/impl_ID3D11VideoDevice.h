#pragma once

#include "base_ID3D11VideoDevice.h"

struct impl_ID3D11VideoDevice
    : base_ID3D11VideoDevice
{
    explicit impl_ID3D11VideoDevice(ID3D11VideoDevice *impl);
};
      