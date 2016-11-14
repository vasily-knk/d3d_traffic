#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11DomainShader.h"

ID3D11DomainShader *create_wrapper_inner(ID3D11DomainShader *impl)
{
    return new impl_ID3D11DomainShader(impl);
}

impl_ID3D11DomainShader::impl_ID3D11DomainShader(ID3D11DomainShader *impl)
    : base_ID3D11DomainShader(impl)
{

}
      