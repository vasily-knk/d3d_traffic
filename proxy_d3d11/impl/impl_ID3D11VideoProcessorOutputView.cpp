#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11VideoProcessorOutputView.h"

ID3D11VideoProcessorOutputView *create_wrapper_inner(ID3D11VideoProcessorOutputView *impl)
{
    return new impl_ID3D11VideoProcessorOutputView(impl);
}

impl_ID3D11VideoProcessorOutputView::impl_ID3D11VideoProcessorOutputView(ID3D11VideoProcessorOutputView *impl)
    : base_ID3D11VideoProcessorOutputView(impl)
{

}
      