#include "stdafx.h"

#include "impl_ID3D11HullShader.h"

ID3D11HullShader *create_wrapper_inner(ID3D11HullShader *impl)
{
    return new impl_ID3D11HullShader(impl);
}

ID3D11HullShader *unwrap_inner(ID3D11HullShader *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11HullShader *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11HullShader::impl_ID3D11HullShader(ID3D11HullShader *impl)
    : base_ID3D11HullShader(impl)
{

}
      