#include "stdafx.h"

#include "impl_ID3D11VideoDecoderOutputView.h"

ID3D11VideoDecoderOutputView *create_wrapper_inner(ID3D11VideoDecoderOutputView *impl)
{
    return new impl_ID3D11VideoDecoderOutputView(impl);
}

ID3D11VideoDecoderOutputView *unwrap_inner(ID3D11VideoDecoderOutputView *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11VideoDecoderOutputView *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11VideoDecoderOutputView::impl_ID3D11VideoDecoderOutputView(ID3D11VideoDecoderOutputView *impl)
    : base_ID3D11VideoDecoderOutputView(impl)
{

}
      