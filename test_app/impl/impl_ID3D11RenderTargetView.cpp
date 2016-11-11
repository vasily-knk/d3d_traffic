#include "stdafx.h"

#include "impl_ID3D11RenderTargetView.h"

ID3D11RenderTargetView *create_wrapper_inner(ID3D11RenderTargetView *impl)
{
    return new impl_ID3D11RenderTargetView(impl);
}

ID3D11RenderTargetView *unwrap_inner(ID3D11RenderTargetView *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11RenderTargetView *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11RenderTargetView::impl_ID3D11RenderTargetView(ID3D11RenderTargetView *impl)
    : base_ID3D11RenderTargetView(impl)
{

}
      