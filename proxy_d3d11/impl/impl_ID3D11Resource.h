#pragma once

#include "base_ID3D11Resource.h"

struct impl_ID3D11Resource
    : base_ID3D11Resource
{
    explicit impl_ID3D11Resource(ID3D11Resource *impl);
};
      