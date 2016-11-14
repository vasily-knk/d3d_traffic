#pragma once

#include "base_ID3D10RenderTargetView.h"

struct impl_ID3D10RenderTargetView
    : base_ID3D10RenderTargetView
{
    explicit impl_ID3D10RenderTargetView(ID3D10RenderTargetView *impl);
};
      