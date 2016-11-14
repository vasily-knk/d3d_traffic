#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10Resource.h"

ID3D10Resource *create_wrapper_inner(ID3D10Resource *impl)
{
    return new impl_ID3D10Resource(impl);
}

impl_ID3D10Resource::impl_ID3D10Resource(ID3D10Resource *impl)
    : base_ID3D10Resource(impl)
{

}
      