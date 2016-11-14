#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11DepthStencilView.h"

ID3D11DepthStencilView *create_wrapper_inner(ID3D11DepthStencilView *impl)
{
    return new impl_ID3D11DepthStencilView(impl);
}

impl_ID3D11DepthStencilView::impl_ID3D11DepthStencilView(ID3D11DepthStencilView *impl)
    : base_ID3D11DepthStencilView(impl)
{

}
      