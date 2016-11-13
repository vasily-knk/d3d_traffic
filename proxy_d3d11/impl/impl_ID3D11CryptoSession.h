#pragma once

#include "base_ID3D11CryptoSession.h"

struct impl_ID3D11CryptoSession
    : base_ID3D11CryptoSession
{
    explicit impl_ID3D11CryptoSession(ID3D11CryptoSession *impl);
};
      