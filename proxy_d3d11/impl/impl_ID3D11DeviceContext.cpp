#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11DeviceContext.h"

ID3D11DeviceContext *create_wrapper_inner(ID3D11DeviceContext *impl)
{
    return new impl_ID3D11DeviceContext(impl);
}

impl_ID3D11DeviceContext::impl_ID3D11DeviceContext(ID3D11DeviceContext *impl)
    : base_ID3D11DeviceContext(impl)
{

}
      