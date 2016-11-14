#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10Asynchronous.h"

ID3D10Asynchronous *create_wrapper_inner(ID3D10Asynchronous *impl)
{
    return new impl_ID3D10Asynchronous(impl);
}

impl_ID3D10Asynchronous::impl_ID3D10Asynchronous(ID3D10Asynchronous *impl)
    : base_ID3D10Asynchronous(impl)
{

}
      