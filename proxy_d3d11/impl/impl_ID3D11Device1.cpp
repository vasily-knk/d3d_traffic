#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11Device1.h"

ID3D11Device1 *create_wrapper_inner(ID3D11Device1 *impl)
{
    return new impl_ID3D11Device1(impl);
}

impl_ID3D11Device1::impl_ID3D11Device1(ID3D11Device1 *impl)
    : base_ID3D11Device1(impl)
{

}
      