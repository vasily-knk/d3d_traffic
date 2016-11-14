#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3DDeviceContextState.h"

ID3DDeviceContextState *create_wrapper_inner(ID3DDeviceContextState *impl)
{
    return new impl_ID3DDeviceContextState(impl);
}

impl_ID3DDeviceContextState::impl_ID3DDeviceContextState(ID3DDeviceContextState *impl)
    : base_ID3DDeviceContextState(impl)
{

}
      