#pragma once

#include "base_ID3D11UnorderedAccessView.h"

struct impl_ID3D11UnorderedAccessView
    : base_ID3D11UnorderedAccessView
{
    explicit impl_ID3D11UnorderedAccessView(ID3D11UnorderedAccessView *impl);
};
      