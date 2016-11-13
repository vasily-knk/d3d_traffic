#include "stdafx.h"

#include "impl_ID3D11VideoProcessorEnumerator.h"

ID3D11VideoProcessorEnumerator *create_wrapper_inner(ID3D11VideoProcessorEnumerator *impl)
{
    return new impl_ID3D11VideoProcessorEnumerator(impl);
}

ID3D11VideoProcessorEnumerator *unwrap_inner(ID3D11VideoProcessorEnumerator *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11VideoProcessorEnumerator *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11VideoProcessorEnumerator::impl_ID3D11VideoProcessorEnumerator(ID3D11VideoProcessorEnumerator *impl)
    : base_ID3D11VideoProcessorEnumerator(impl)
{

}
      