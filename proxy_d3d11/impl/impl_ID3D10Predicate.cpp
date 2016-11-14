#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10Predicate.h"

ID3D10Predicate *create_wrapper_inner(ID3D10Predicate *impl)
{
    return new impl_ID3D10Predicate(impl);
}

impl_ID3D10Predicate::impl_ID3D10Predicate(ID3D10Predicate *impl)
    : base_ID3D10Predicate(impl)
{

}
      