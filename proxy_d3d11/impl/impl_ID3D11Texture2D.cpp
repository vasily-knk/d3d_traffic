#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11Texture2D.h"

ID3D11Texture2D *create_wrapper_inner(ID3D11Texture2D *impl)
{
    return new impl_ID3D11Texture2D(impl);
}

ID3D11Texture2D *unwrap_inner(ID3D11Texture2D *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11Texture2D *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11Texture2D::impl_ID3D11Texture2D(ID3D11Texture2D *impl)
    : base_ID3D11Texture2D(impl)
{

}
      