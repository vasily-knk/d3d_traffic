#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11VideoContext.h"

ID3D11VideoContext *create_wrapper_inner(ID3D11VideoContext *impl)
{
    return new impl_ID3D11VideoContext(impl);
}

impl_ID3D11VideoContext::impl_ID3D11VideoContext(ID3D11VideoContext *impl)
    : base_ID3D11VideoContext(impl)
{

}
      