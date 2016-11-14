#pragma once

#include "base_ID3D10Asynchronous.h"

struct impl_ID3D10Asynchronous
    : base_ID3D10Asynchronous
{
    explicit impl_ID3D10Asynchronous(ID3D10Asynchronous *impl);
};
      