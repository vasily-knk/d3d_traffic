#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11Counter.h"

ID3D11Counter *create_wrapper_inner(ID3D11Counter *impl)
{
    return new impl_ID3D11Counter(impl);
}

impl_ID3D11Counter::impl_ID3D11Counter(ID3D11Counter *impl)
    : base_ID3D11Counter(impl)
{

}
      