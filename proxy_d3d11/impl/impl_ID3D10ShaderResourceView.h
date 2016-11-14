#pragma once

#include "base_ID3D10ShaderResourceView.h"

struct impl_ID3D10ShaderResourceView
    : base_ID3D10ShaderResourceView
{
    explicit impl_ID3D10ShaderResourceView(ID3D10ShaderResourceView *impl);
};
      