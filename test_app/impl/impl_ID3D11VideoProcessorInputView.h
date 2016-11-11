#pragma once

#include "base_ID3D11VideoProcessorInputView.h"

struct impl_ID3D11VideoProcessorInputView
    : base_ID3D11VideoProcessorInputView
{
    explicit impl_ID3D11VideoProcessorInputView(ID3D11VideoProcessorInputView *impl);
};
      