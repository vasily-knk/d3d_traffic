#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11ComputeShader.h"

ID3D11ComputeShader *create_wrapper_inner(ID3D11ComputeShader *impl)
{
    return new impl_ID3D11ComputeShader(impl);
}

impl_ID3D11ComputeShader::impl_ID3D11ComputeShader(ID3D11ComputeShader *impl)
    : base_ID3D11ComputeShader(impl)
{

}
      