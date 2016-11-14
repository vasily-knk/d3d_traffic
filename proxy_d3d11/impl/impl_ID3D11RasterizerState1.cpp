#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11RasterizerState1.h"

ID3D11RasterizerState1 *create_wrapper_inner(ID3D11RasterizerState1 *impl)
{
    return new impl_ID3D11RasterizerState1(impl);
}

impl_ID3D11RasterizerState1::impl_ID3D11RasterizerState1(ID3D11RasterizerState1 *impl)
    : base_ID3D11RasterizerState1(impl)
{

}
      