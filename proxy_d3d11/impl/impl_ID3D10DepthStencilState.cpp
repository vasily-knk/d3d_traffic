#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10DepthStencilState.h"

ID3D10DepthStencilState *create_wrapper_inner(ID3D10DepthStencilState *impl)
{
    return new impl_ID3D10DepthStencilState(impl);
}

impl_ID3D10DepthStencilState::impl_ID3D10DepthStencilState(ID3D10DepthStencilState *impl)
    : base_ID3D10DepthStencilState(impl)
{

}
      