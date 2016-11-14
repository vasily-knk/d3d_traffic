#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11HullShader.h"

ID3D11HullShader *create_wrapper_inner(ID3D11HullShader *impl)
{
    return new impl_ID3D11HullShader(impl);
}

impl_ID3D11HullShader::impl_ID3D11HullShader(ID3D11HullShader *impl)
    : base_ID3D11HullShader(impl)
{

}
      