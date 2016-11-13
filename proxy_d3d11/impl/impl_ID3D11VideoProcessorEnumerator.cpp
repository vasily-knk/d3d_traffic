#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11VideoProcessorEnumerator.h"

ID3D11VideoProcessorEnumerator *create_wrapper_inner(ID3D11VideoProcessorEnumerator *impl)
{
    return new impl_ID3D11VideoProcessorEnumerator(impl);
}

ID3D11VideoProcessorEnumerator *unwrap_inner(ID3D11VideoProcessorEnumerator *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11VideoProcessorEnumerator *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11VideoProcessorEnumerator::impl_ID3D11VideoProcessorEnumerator(ID3D11VideoProcessorEnumerator *impl)
    : base_ID3D11VideoProcessorEnumerator(impl)
{

}
      