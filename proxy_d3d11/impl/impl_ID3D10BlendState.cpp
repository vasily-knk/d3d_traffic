#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10BlendState.h"

ID3D10BlendState *create_wrapper_inner(ID3D10BlendState *impl)
{
    return new impl_ID3D10BlendState(impl);
}

impl_ID3D10BlendState::impl_ID3D10BlendState(ID3D10BlendState *impl)
    : base_ID3D10BlendState(impl)
{

}
      