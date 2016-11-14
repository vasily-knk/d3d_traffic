#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11VideoProcessorEnumerator.h"

ID3D11VideoProcessorEnumerator *create_wrapper_inner(ID3D11VideoProcessorEnumerator *impl)
{
    return new impl_ID3D11VideoProcessorEnumerator(impl);
}

impl_ID3D11VideoProcessorEnumerator::impl_ID3D11VideoProcessorEnumerator(ID3D11VideoProcessorEnumerator *impl)
    : base_ID3D11VideoProcessorEnumerator(impl)
{

}
      