#pragma once

#include "base_ID3D11CommandList.h"

struct impl_ID3D11CommandList
    : base_ID3D11CommandList
{
    explicit impl_ID3D11CommandList(ID3D11CommandList *impl);
};
      