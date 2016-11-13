#pragma once

#include "base_ID3D11DepthStencilView.h"

struct impl_ID3D11DepthStencilView
    : base_ID3D11DepthStencilView
{
    explicit impl_ID3D11DepthStencilView(ID3D11DepthStencilView *impl);
};
      