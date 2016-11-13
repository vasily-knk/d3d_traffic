#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11VertexShader.h"

ID3D11VertexShader *create_wrapper_inner(ID3D11VertexShader *impl)
{
    return new impl_ID3D11VertexShader(impl);
}

ID3D11VertexShader *unwrap_inner(ID3D11VertexShader *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11VertexShader *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11VertexShader::impl_ID3D11VertexShader(ID3D11VertexShader *impl)
    : base_ID3D11VertexShader(impl)
{

}
      