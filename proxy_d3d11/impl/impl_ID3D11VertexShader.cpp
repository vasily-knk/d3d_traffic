#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11VertexShader.h"

ID3D11VertexShader *create_wrapper_inner(ID3D11VertexShader *impl)
{
    return new impl_ID3D11VertexShader(impl);
}

impl_ID3D11VertexShader::impl_ID3D11VertexShader(ID3D11VertexShader *impl)
    : base_ID3D11VertexShader(impl)
{

}
      