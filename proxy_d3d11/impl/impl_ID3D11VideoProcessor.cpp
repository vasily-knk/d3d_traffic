#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11VideoProcessor.h"

ID3D11VideoProcessor *create_wrapper_inner(ID3D11VideoProcessor *impl)
{
    return new impl_ID3D11VideoProcessor(impl);
}

impl_ID3D11VideoProcessor::impl_ID3D11VideoProcessor(ID3D11VideoProcessor *impl)
    : base_ID3D11VideoProcessor(impl)
{

}
      