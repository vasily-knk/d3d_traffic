#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11CommandList.h"

ID3D11CommandList *create_wrapper_inner(ID3D11CommandList *impl)
{
    return new impl_ID3D11CommandList(impl);
}

ID3D11CommandList *unwrap_inner(ID3D11CommandList *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11CommandList *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11CommandList::impl_ID3D11CommandList(ID3D11CommandList *impl)
    : base_ID3D11CommandList(impl)
{

}
      