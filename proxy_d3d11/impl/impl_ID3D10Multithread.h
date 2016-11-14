#pragma once

#include "base_ID3D10Multithread.h"

struct impl_ID3D10Multithread
    : base_ID3D10Multithread
{
    explicit impl_ID3D10Multithread(ID3D10Multithread *impl);
};
      