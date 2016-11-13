#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11ShaderResourceView.h"

ID3D11ShaderResourceView *create_wrapper_inner(ID3D11ShaderResourceView *impl)
{
    return new impl_ID3D11ShaderResourceView(impl);
}

ID3D11ShaderResourceView *unwrap_inner(ID3D11ShaderResourceView *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11ShaderResourceView *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11ShaderResourceView::impl_ID3D11ShaderResourceView(ID3D11ShaderResourceView *impl)
    : base_ID3D11ShaderResourceView(impl)
{

}
      