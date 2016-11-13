#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11AuthenticatedChannel.h"

ID3D11AuthenticatedChannel *create_wrapper_inner(ID3D11AuthenticatedChannel *impl)
{
    return new impl_ID3D11AuthenticatedChannel(impl);
}

ID3D11AuthenticatedChannel *unwrap_inner(ID3D11AuthenticatedChannel *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11AuthenticatedChannel *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11AuthenticatedChannel::impl_ID3D11AuthenticatedChannel(ID3D11AuthenticatedChannel *impl)
    : base_ID3D11AuthenticatedChannel(impl)
{

}
      