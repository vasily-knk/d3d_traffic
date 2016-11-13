#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11DomainShader.h"

ID3D11DomainShader *create_wrapper_inner(ID3D11DomainShader *impl)
{
    return new impl_ID3D11DomainShader(impl);
}

ID3D11DomainShader *unwrap_inner(ID3D11DomainShader *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11DomainShader *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11DomainShader::impl_ID3D11DomainShader(ID3D11DomainShader *impl)
    : base_ID3D11DomainShader(impl)
{

}
      