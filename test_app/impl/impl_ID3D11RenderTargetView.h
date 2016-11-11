#pragma once

#include "base_ID3D11RenderTargetView.h"

struct impl_ID3D11RenderTargetView
    : base_ID3D11RenderTargetView
{
    explicit impl_ID3D11RenderTargetView(ID3D11RenderTargetView *impl);
};
      