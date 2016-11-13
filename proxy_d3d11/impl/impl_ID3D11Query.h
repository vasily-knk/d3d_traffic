#pragma once

#include "base_ID3D11Query.h"

struct impl_ID3D11Query
    : base_ID3D11Query
{
    explicit impl_ID3D11Query(ID3D11Query *impl);
};
      