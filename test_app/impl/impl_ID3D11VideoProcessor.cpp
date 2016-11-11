#include "stdafx.h"

#include "impl_ID3D11VideoProcessor.h"

ID3D11VideoProcessor *create_wrapper_inner(ID3D11VideoProcessor *impl)
{
    return new impl_ID3D11VideoProcessor(impl);
}

ID3D11VideoProcessor *unwrap_inner(ID3D11VideoProcessor *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11VideoProcessor *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11VideoProcessor::impl_ID3D11VideoProcessor(ID3D11VideoProcessor *impl)
    : base_ID3D11VideoProcessor(impl)
{

}
      