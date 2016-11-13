#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11RenderTargetView.h"

ID3D11RenderTargetView *create_wrapper_inner(ID3D11RenderTargetView *impl)
{
    return new impl_ID3D11RenderTargetView(impl);
}

ID3D11RenderTargetView *unwrap_inner(ID3D11RenderTargetView *wrapper)
{
    if (check_magic(wrapper))
    {
        auto *cast_wrapper = static_cast<impl_ID3D11RenderTargetView *>(wrapper);
        return cast_wrapper->impl();
    }
    else
    {
        return wrapper;
    }
}

impl_ID3D11RenderTargetView::impl_ID3D11RenderTargetView(ID3D11RenderTargetView *impl)
    : base_ID3D11RenderTargetView(impl)
{

}
      