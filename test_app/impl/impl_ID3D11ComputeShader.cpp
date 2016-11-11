#include "stdafx.h"

#include "impl_ID3D11ComputeShader.h"

ID3D11ComputeShader *create_wrapper_inner(ID3D11ComputeShader *impl)
{
    return new impl_ID3D11ComputeShader(impl);
}

ID3D11ComputeShader *unwrap_inner(ID3D11ComputeShader *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11ComputeShader *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11ComputeShader::impl_ID3D11ComputeShader(ID3D11ComputeShader *impl)
    : base_ID3D11ComputeShader(impl)
{

}
      