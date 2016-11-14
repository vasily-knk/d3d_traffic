#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11ClassInstance.h"

ID3D11ClassInstance *create_wrapper_inner(ID3D11ClassInstance *impl)
{
    return new impl_ID3D11ClassInstance(impl);
}

impl_ID3D11ClassInstance::impl_ID3D11ClassInstance(ID3D11ClassInstance *impl)
    : base_ID3D11ClassInstance(impl)
{

}
      