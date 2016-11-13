#include "stdafx.h"

#include "impl_ID3D11AuthenticatedChannel.h"

ID3D11AuthenticatedChannel *create_wrapper_inner(ID3D11AuthenticatedChannel *impl)
{
    return new impl_ID3D11AuthenticatedChannel(impl);
}

ID3D11AuthenticatedChannel *unwrap_inner(ID3D11AuthenticatedChannel *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11AuthenticatedChannel *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11AuthenticatedChannel::impl_ID3D11AuthenticatedChannel(ID3D11AuthenticatedChannel *impl)
    : base_ID3D11AuthenticatedChannel(impl)
{

}
      