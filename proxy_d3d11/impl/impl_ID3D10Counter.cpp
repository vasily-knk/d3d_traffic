#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10Counter.h"

ID3D10Counter *create_wrapper_inner(ID3D10Counter *impl)
{
    return new impl_ID3D10Counter(impl);
}

impl_ID3D10Counter::impl_ID3D10Counter(ID3D10Counter *impl)
    : base_ID3D10Counter(impl)
{

}
      