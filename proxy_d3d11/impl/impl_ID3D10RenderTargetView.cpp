#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10RenderTargetView.h"

ID3D10RenderTargetView *create_wrapper_inner(ID3D10RenderTargetView *impl)
{
    return new impl_ID3D10RenderTargetView(impl);
}

impl_ID3D10RenderTargetView::impl_ID3D10RenderTargetView(ID3D10RenderTargetView *impl)
    : base_ID3D10RenderTargetView(impl)
{

}
      