#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11Texture3D.h"

ID3D11Texture3D *create_wrapper_inner(ID3D11Texture3D *impl)
{
    return new impl_ID3D11Texture3D(impl);
}

impl_ID3D11Texture3D::impl_ID3D11Texture3D(ID3D11Texture3D *impl)
    : base_ID3D11Texture3D(impl)
{

}
      