#pragma once

#include "base_ID3D11ClassLinkage.h"

struct impl_ID3D11ClassLinkage
    : base_ID3D11ClassLinkage
{
    explicit impl_ID3D11ClassLinkage(ID3D11ClassLinkage *impl);
};
      