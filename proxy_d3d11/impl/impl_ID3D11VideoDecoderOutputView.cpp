#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11VideoDecoderOutputView.h"

ID3D11VideoDecoderOutputView *create_wrapper_inner(ID3D11VideoDecoderOutputView *impl)
{
    return new impl_ID3D11VideoDecoderOutputView(impl);
}

impl_ID3D11VideoDecoderOutputView::impl_ID3D11VideoDecoderOutputView(ID3D11VideoDecoderOutputView *impl)
    : base_ID3D11VideoDecoderOutputView(impl)
{

}
      