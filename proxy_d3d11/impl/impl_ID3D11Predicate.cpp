#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11Predicate.h"

ID3D11Predicate *create_wrapper_inner(ID3D11Predicate *impl)
{
    return new impl_ID3D11Predicate(impl);
}

impl_ID3D11Predicate::impl_ID3D11Predicate(ID3D11Predicate *impl)
    : base_ID3D11Predicate(impl)
{

}
      