#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10GeometryShader.h"

ID3D10GeometryShader *create_wrapper_inner(ID3D10GeometryShader *impl)
{
    return new impl_ID3D10GeometryShader(impl);
}

impl_ID3D10GeometryShader::impl_ID3D10GeometryShader(ID3D10GeometryShader *impl)
    : base_ID3D10GeometryShader(impl)
{

}
      