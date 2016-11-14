#pragma once

#include "base_ID3D10Query.h"

struct impl_ID3D10Query
    : base_ID3D10Query
{
    explicit impl_ID3D10Query(ID3D10Query *impl);
};
      