#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11Query.h"

ID3D11Query *create_wrapper_inner(ID3D11Query *impl)
{
    return new impl_ID3D11Query(impl);
}

ID3D11Query *unwrap_inner(ID3D11Query *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11Query *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11Query::impl_ID3D11Query(ID3D11Query *impl)
    : base_ID3D11Query(impl)
{

}
      