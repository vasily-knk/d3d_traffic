#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11DepthStencilView.h"

ID3D11DepthStencilView *create_wrapper_inner(ID3D11DepthStencilView *impl)
{
    return new impl_ID3D11DepthStencilView(impl);
}

ID3D11DepthStencilView *unwrap_inner(ID3D11DepthStencilView *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11DepthStencilView *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11DepthStencilView::impl_ID3D11DepthStencilView(ID3D11DepthStencilView *impl)
    : base_ID3D11DepthStencilView(impl)
{

}
      