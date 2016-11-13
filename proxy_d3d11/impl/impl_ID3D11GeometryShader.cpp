#include "stdafx.h"

#include "impl_ID3D11GeometryShader.h"

ID3D11GeometryShader *create_wrapper_inner(ID3D11GeometryShader *impl)
{
    return new impl_ID3D11GeometryShader(impl);
}

ID3D11GeometryShader *unwrap_inner(ID3D11GeometryShader *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11GeometryShader *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11GeometryShader::impl_ID3D11GeometryShader(ID3D11GeometryShader *impl)
    : base_ID3D11GeometryShader(impl)
{

}
      