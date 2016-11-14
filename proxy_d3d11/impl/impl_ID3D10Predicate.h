#pragma once

#include "base_ID3D10Predicate.h"

struct impl_ID3D10Predicate
    : base_ID3D10Predicate
{
    explicit impl_ID3D10Predicate(ID3D10Predicate *impl);
};
      