#include "stdafx.h"

#include "impl_ID3D11VideoProcessorOutputView.h"

ID3D11VideoProcessorOutputView *create_wrapper_inner(ID3D11VideoProcessorOutputView *impl)
{
    return new impl_ID3D11VideoProcessorOutputView(impl);
}

ID3D11VideoProcessorOutputView *unwrap_inner(ID3D11VideoProcessorOutputView *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11VideoProcessorOutputView *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11VideoProcessorOutputView::impl_ID3D11VideoProcessorOutputView(ID3D11VideoProcessorOutputView *impl)
    : base_ID3D11VideoProcessorOutputView(impl)
{

}
      