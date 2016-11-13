#pragma once

#include "base_ID3D11VideoDecoderOutputView.h"

struct impl_ID3D11VideoDecoderOutputView
    : base_ID3D11VideoDecoderOutputView
{
    explicit impl_ID3D11VideoDecoderOutputView(ID3D11VideoDecoderOutputView *impl);
};
      