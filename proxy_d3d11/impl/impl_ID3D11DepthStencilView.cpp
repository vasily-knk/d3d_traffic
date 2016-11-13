#include "stdafx.h"

#include "impl_ID3D11DepthStencilView.h"

ID3D11DepthStencilView *create_wrapper_inner(ID3D11DepthStencilView *impl)
{
    return new impl_ID3D11DepthStencilView(impl);
}

ID3D11DepthStencilView *unwrap_inner(ID3D11DepthStencilView *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11DepthStencilView *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11DepthStencilView::impl_ID3D11DepthStencilView(ID3D11DepthStencilView *impl)
    : base_ID3D11DepthStencilView(impl)
{

}
      