#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11VideoProcessorInputView.h"

ID3D11VideoProcessorInputView *create_wrapper_inner(ID3D11VideoProcessorInputView *impl)
{
    return new impl_ID3D11VideoProcessorInputView(impl);
}

ID3D11VideoProcessorInputView *unwrap_inner(ID3D11VideoProcessorInputView *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11VideoProcessorInputView *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11VideoProcessorInputView::impl_ID3D11VideoProcessorInputView(ID3D11VideoProcessorInputView *impl)
    : base_ID3D11VideoProcessorInputView(impl)
{

}
      