#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11VideoDecoder.h"

ID3D11VideoDecoder *create_wrapper_inner(ID3D11VideoDecoder *impl)
{
    return new impl_ID3D11VideoDecoder(impl);
}

impl_ID3D11VideoDecoder::impl_ID3D11VideoDecoder(ID3D11VideoDecoder *impl)
    : base_ID3D11VideoDecoder(impl)
{

}
      