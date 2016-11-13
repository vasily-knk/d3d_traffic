#pragma once

#include "base_ID3D11VideoProcessorOutputView.h"

struct impl_ID3D11VideoProcessorOutputView
    : base_ID3D11VideoProcessorOutputView
{
    explicit impl_ID3D11VideoProcessorOutputView(ID3D11VideoProcessorOutputView *impl);
};
      