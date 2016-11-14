#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10RasterizerState.h"

ID3D10RasterizerState *create_wrapper_inner(ID3D10RasterizerState *impl)
{
    return new impl_ID3D10RasterizerState(impl);
}

impl_ID3D10RasterizerState::impl_ID3D10RasterizerState(ID3D10RasterizerState *impl)
    : base_ID3D10RasterizerState(impl)
{

}
      