#include "stdafx.h"

#include "impl_ID3D11VideoDecoder.h"

ID3D11VideoDecoder *create_wrapper_inner(ID3D11VideoDecoder *impl)
{
    return new impl_ID3D11VideoDecoder(impl);
}

ID3D11VideoDecoder *unwrap_inner(ID3D11VideoDecoder *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11VideoDecoder *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11VideoDecoder::impl_ID3D11VideoDecoder(ID3D11VideoDecoder *impl)
    : base_ID3D11VideoDecoder(impl)
{

}
      