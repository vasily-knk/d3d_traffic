#pragma once

#include "base_ID3D11Buffer.h"

struct impl_ID3D11Buffer
    : base_ID3D11Buffer
{
    explicit impl_ID3D11Buffer(ID3D11Buffer *impl);
};
      