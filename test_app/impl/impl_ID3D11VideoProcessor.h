#pragma once

#include "base_ID3D11VideoProcessor.h"

struct impl_ID3D11VideoProcessor
    : base_ID3D11VideoProcessor
{
    explicit impl_ID3D11VideoProcessor(ID3D11VideoProcessor *impl);
};
      