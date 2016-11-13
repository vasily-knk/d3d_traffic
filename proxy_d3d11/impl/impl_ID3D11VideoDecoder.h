#pragma once

#include "base_ID3D11VideoDecoder.h"

struct impl_ID3D11VideoDecoder
    : base_ID3D11VideoDecoder
{
    explicit impl_ID3D11VideoDecoder(ID3D11VideoDecoder *impl);
};
      