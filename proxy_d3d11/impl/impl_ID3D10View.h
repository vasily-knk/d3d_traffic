#pragma once

#include "base_ID3D10View.h"

struct impl_ID3D10View
    : base_ID3D10View
{
    explicit impl_ID3D10View(ID3D10View *impl);
};
      