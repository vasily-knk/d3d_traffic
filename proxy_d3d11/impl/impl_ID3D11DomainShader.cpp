#include "stdafx.h"

#include "impl_ID3D11DomainShader.h"

ID3D11DomainShader *create_wrapper_inner(ID3D11DomainShader *impl)
{
    return new impl_ID3D11DomainShader(impl);
}

ID3D11DomainShader *unwrap_inner(ID3D11DomainShader *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11DomainShader *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11DomainShader::impl_ID3D11DomainShader(ID3D11DomainShader *impl)
    : base_ID3D11DomainShader(impl)
{

}
      