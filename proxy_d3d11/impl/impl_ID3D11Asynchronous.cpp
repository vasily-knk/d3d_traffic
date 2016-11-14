#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11Asynchronous.h"

ID3D11Asynchronous *create_wrapper_inner(ID3D11Asynchronous *impl)
{
    return new impl_ID3D11Asynchronous(impl);
}

impl_ID3D11Asynchronous::impl_ID3D11Asynchronous(ID3D11Asynchronous *impl)
    : base_ID3D11Asynchronous(impl)
{

}
      