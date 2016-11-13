#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11Counter.h"

ID3D11Counter *create_wrapper_inner(ID3D11Counter *impl)
{
    return new impl_ID3D11Counter(impl);
}

ID3D11Counter *unwrap_inner(ID3D11Counter *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11Counter *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11Counter::impl_ID3D11Counter(ID3D11Counter *impl)
    : base_ID3D11Counter(impl)
{

}
      