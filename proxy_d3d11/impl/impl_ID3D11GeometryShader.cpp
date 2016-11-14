#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11GeometryShader.h"

ID3D11GeometryShader *create_wrapper_inner(ID3D11GeometryShader *impl)
{
    return new impl_ID3D11GeometryShader(impl);
}

impl_ID3D11GeometryShader::impl_ID3D11GeometryShader(ID3D11GeometryShader *impl)
    : base_ID3D11GeometryShader(impl)
{

}
      