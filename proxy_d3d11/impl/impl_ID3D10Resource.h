#pragma once

#include "base_ID3D10Resource.h"

struct impl_ID3D10Resource
    : base_ID3D10Resource
{
    explicit impl_ID3D10Resource(ID3D10Resource *impl);
};
      