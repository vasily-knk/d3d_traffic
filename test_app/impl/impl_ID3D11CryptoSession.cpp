#include "stdafx.h"

#include "impl_ID3D11CryptoSession.h"

ID3D11CryptoSession *create_wrapper_inner(ID3D11CryptoSession *impl)
{
    return new impl_ID3D11CryptoSession(impl);
}

ID3D11CryptoSession *unwrap_inner(ID3D11CryptoSession *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11CryptoSession *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11CryptoSession::impl_ID3D11CryptoSession(ID3D11CryptoSession *impl)
    : base_ID3D11CryptoSession(impl)
{

}
      