#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11DeviceContext1.h"

ID3D11DeviceContext1 *create_wrapper_inner(ID3D11DeviceContext1 *impl)
{
    return new impl_ID3D11DeviceContext1(impl);
}

impl_ID3D11DeviceContext1::impl_ID3D11DeviceContext1(ID3D11DeviceContext1 *impl)
    : base_ID3D11DeviceContext1(impl)
{

}
      