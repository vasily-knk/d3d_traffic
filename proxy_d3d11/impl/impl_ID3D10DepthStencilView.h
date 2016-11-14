#pragma once

#include "base_ID3D10DepthStencilView.h"

struct impl_ID3D10DepthStencilView
    : base_ID3D10DepthStencilView
{
    explicit impl_ID3D10DepthStencilView(ID3D10DepthStencilView *impl);
};
      