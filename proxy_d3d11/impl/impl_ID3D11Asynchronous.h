#pragma once

#include "base_ID3D11Asynchronous.h"

struct impl_ID3D11Asynchronous
    : base_ID3D11Asynchronous
{
    explicit impl_ID3D11Asynchronous(ID3D11Asynchronous *impl);
};
      