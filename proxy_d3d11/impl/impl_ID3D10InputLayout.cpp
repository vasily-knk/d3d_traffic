#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10InputLayout.h"

ID3D10InputLayout *create_wrapper_inner(ID3D10InputLayout *impl)
{
    return new impl_ID3D10InputLayout(impl);
}

impl_ID3D10InputLayout::impl_ID3D10InputLayout(ID3D10InputLayout *impl)
    : base_ID3D10InputLayout(impl)
{

}
      