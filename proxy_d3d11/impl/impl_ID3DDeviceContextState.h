#pragma once

#include "base_ID3DDeviceContextState.h"

struct impl_ID3DDeviceContextState
    : base_ID3DDeviceContextState
{
    explicit impl_ID3DDeviceContextState(ID3DDeviceContextState *impl);
};
      