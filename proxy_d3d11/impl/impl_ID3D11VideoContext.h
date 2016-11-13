#pragma once

#include "base_ID3D11VideoContext.h"

struct impl_ID3D11VideoContext
    : base_ID3D11VideoContext
{
    explicit impl_ID3D11VideoContext(ID3D11VideoContext *impl);
};
      