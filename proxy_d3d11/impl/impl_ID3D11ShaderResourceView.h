#pragma once

#include "base_ID3D11ShaderResourceView.h"

struct impl_ID3D11ShaderResourceView
    : base_ID3D11ShaderResourceView
{
    explicit impl_ID3D11ShaderResourceView(ID3D11ShaderResourceView *impl);
};
      