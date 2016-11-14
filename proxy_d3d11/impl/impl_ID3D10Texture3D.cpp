#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10Texture3D.h"

ID3D10Texture3D *create_wrapper_inner(ID3D10Texture3D *impl)
{
    return new impl_ID3D10Texture3D(impl);
}

impl_ID3D10Texture3D::impl_ID3D10Texture3D(ID3D10Texture3D *impl)
    : base_ID3D10Texture3D(impl)
{

}
      