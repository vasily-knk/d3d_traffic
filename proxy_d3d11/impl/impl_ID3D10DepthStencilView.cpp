#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10DepthStencilView.h"

ID3D10DepthStencilView *create_wrapper_inner(ID3D10DepthStencilView *impl)
{
    return new impl_ID3D10DepthStencilView(impl);
}

impl_ID3D10DepthStencilView::impl_ID3D10DepthStencilView(ID3D10DepthStencilView *impl)
    : base_ID3D10DepthStencilView(impl)
{

}
      