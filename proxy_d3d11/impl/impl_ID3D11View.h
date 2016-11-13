#pragma once

#include "base_ID3D11View.h"

struct impl_ID3D11View
    : base_ID3D11View
{
    explicit impl_ID3D11View(ID3D11View *impl);
};
      