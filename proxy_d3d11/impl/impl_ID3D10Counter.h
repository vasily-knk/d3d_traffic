#pragma once

#include "base_ID3D10Counter.h"

struct impl_ID3D10Counter
    : base_ID3D10Counter
{
    explicit impl_ID3D10Counter(ID3D10Counter *impl);
};
      