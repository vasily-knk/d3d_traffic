#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10VertexShader.h"

ID3D10VertexShader *create_wrapper_inner(ID3D10VertexShader *impl)
{
    return new impl_ID3D10VertexShader(impl);
}

impl_ID3D10VertexShader::impl_ID3D10VertexShader(ID3D10VertexShader *impl)
    : base_ID3D10VertexShader(impl)
{

}
      