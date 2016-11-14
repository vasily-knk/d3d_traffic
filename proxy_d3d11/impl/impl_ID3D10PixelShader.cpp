#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10PixelShader.h"

ID3D10PixelShader *create_wrapper_inner(ID3D10PixelShader *impl)
{
    return new impl_ID3D10PixelShader(impl);
}

impl_ID3D10PixelShader::impl_ID3D10PixelShader(ID3D10PixelShader *impl)
    : base_ID3D10PixelShader(impl)
{

}
      