#pragma once

#include "base_ID3D11ClassInstance.h"

struct impl_ID3D11ClassInstance
    : base_ID3D11ClassInstance
{
    explicit impl_ID3D11ClassInstance(ID3D11ClassInstance *impl);
};
      