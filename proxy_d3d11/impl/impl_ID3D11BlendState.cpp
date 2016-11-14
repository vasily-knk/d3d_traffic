#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11BlendState.h"

ID3D11BlendState *create_wrapper_inner(ID3D11BlendState *impl)
{
    return new impl_ID3D11BlendState(impl);
}

impl_ID3D11BlendState::impl_ID3D11BlendState(ID3D11BlendState *impl)
    : base_ID3D11BlendState(impl)
{

}
      