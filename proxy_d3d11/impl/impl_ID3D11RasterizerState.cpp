#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11RasterizerState.h"

ID3D11RasterizerState *create_wrapper_inner(ID3D11RasterizerState *impl)
{
    return new impl_ID3D11RasterizerState(impl);
}

impl_ID3D11RasterizerState::impl_ID3D11RasterizerState(ID3D11RasterizerState *impl)
    : base_ID3D11RasterizerState(impl)
{

}
      