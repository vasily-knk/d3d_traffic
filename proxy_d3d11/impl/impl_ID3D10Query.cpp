#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10Query.h"

ID3D10Query *create_wrapper_inner(ID3D10Query *impl)
{
    return new impl_ID3D10Query(impl);
}

impl_ID3D10Query::impl_ID3D10Query(ID3D10Query *impl)
    : base_ID3D10Query(impl)
{

}
      