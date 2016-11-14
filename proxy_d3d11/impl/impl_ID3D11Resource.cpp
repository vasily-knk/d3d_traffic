#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11Resource.h"

ID3D11Resource *create_wrapper_inner(ID3D11Resource *impl)
{
    return new impl_ID3D11Resource(impl);
}

impl_ID3D11Resource::impl_ID3D11Resource(ID3D11Resource *impl)
    : base_ID3D11Resource(impl)
{

}
      