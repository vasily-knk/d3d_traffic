#pragma once

#include "base_ID3D11Predicate.h"

struct impl_ID3D11Predicate
    : base_ID3D11Predicate
{
    explicit impl_ID3D11Predicate(ID3D11Predicate *impl);
};
      