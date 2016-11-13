#pragma once

#include "base_ID3D11VideoProcessorEnumerator.h"

struct impl_ID3D11VideoProcessorEnumerator
    : base_ID3D11VideoProcessorEnumerator
{
    explicit impl_ID3D11VideoProcessorEnumerator(ID3D11VideoProcessorEnumerator *impl);
};
      