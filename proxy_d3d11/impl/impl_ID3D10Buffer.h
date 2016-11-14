#pragma once

#include "base_ID3D10Buffer.h"

struct impl_ID3D10Buffer
    : base_ID3D10Buffer
{
    explicit impl_ID3D10Buffer(ID3D10Buffer *impl);
};
      