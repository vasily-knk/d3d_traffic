#include "stdafx.h"

#include "impl_ID3D11VideoProcessorInputView.h"

ID3D11VideoProcessorInputView *create_wrapper_inner(ID3D11VideoProcessorInputView *impl)
{
    return new impl_ID3D11VideoProcessorInputView(impl);
}

ID3D11VideoProcessorInputView *unwrap_inner(ID3D11VideoProcessorInputView *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11VideoProcessorInputView *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11VideoProcessorInputView::impl_ID3D11VideoProcessorInputView(ID3D11VideoProcessorInputView *impl)
    : base_ID3D11VideoProcessorInputView(impl)
{

}
      