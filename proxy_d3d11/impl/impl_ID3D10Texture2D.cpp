#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10Texture2D.h"

ID3D10Texture2D *create_wrapper_inner(ID3D10Texture2D *impl)
{
    return new impl_ID3D10Texture2D(impl);
}

impl_ID3D10Texture2D::impl_ID3D10Texture2D(ID3D10Texture2D *impl)
    : base_ID3D10Texture2D(impl)
{

}
      