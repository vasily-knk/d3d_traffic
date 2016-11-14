#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10Buffer.h"

ID3D10Buffer *create_wrapper_inner(ID3D10Buffer *impl)
{
    return new impl_ID3D10Buffer(impl);
}

impl_ID3D10Buffer::impl_ID3D10Buffer(ID3D10Buffer *impl)
    : base_ID3D10Buffer(impl)
{

}
      