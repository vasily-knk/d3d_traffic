#pragma once

#include "base_ID3D11AuthenticatedChannel.h"

struct impl_ID3D11AuthenticatedChannel
    : base_ID3D11AuthenticatedChannel
{
    explicit impl_ID3D11AuthenticatedChannel(ID3D11AuthenticatedChannel *impl);
};
      