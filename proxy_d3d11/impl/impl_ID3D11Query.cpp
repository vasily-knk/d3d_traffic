#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11Query.h"

ID3D11Query *create_wrapper_inner(ID3D11Query *impl)
{
    return new impl_ID3D11Query(impl);
}

impl_ID3D11Query::impl_ID3D11Query(ID3D11Query *impl)
    : base_ID3D11Query(impl)
{

}
      