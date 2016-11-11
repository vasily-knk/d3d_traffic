#pragma once

#include "base_ID3D11Counter.h"

struct impl_ID3D11Counter
    : base_ID3D11Counter
{
    explicit impl_ID3D11Counter(ID3D11Counter *impl);
};
      