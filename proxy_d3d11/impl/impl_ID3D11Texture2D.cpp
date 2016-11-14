#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11Texture2D.h"

ID3D11Texture2D *create_wrapper_inner(ID3D11Texture2D *impl)
{
    return new impl_ID3D11Texture2D(impl);
}

impl_ID3D11Texture2D::impl_ID3D11Texture2D(ID3D11Texture2D *impl)
    : base_ID3D11Texture2D(impl)
{

}
      