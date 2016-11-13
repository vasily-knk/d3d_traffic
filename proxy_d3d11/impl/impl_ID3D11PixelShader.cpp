#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11PixelShader.h"

ID3D11PixelShader *create_wrapper_inner(ID3D11PixelShader *impl)
{
    return new impl_ID3D11PixelShader(impl);
}

ID3D11PixelShader *unwrap_inner(ID3D11PixelShader *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11PixelShader *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11PixelShader::impl_ID3D11PixelShader(ID3D11PixelShader *impl)
    : base_ID3D11PixelShader(impl)
{

}
      