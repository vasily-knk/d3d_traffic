#include "stdafx.h"

#include "impl_ID3D11ClassInstance.h"

ID3D11ClassInstance *create_wrapper_inner(ID3D11ClassInstance *impl)
{
    return new impl_ID3D11ClassInstance(impl);
}

ID3D11ClassInstance *unwrap_inner(ID3D11ClassInstance *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11ClassInstance *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11ClassInstance::impl_ID3D11ClassInstance(ID3D11ClassInstance *impl)
    : base_ID3D11ClassInstance(impl)
{

}
      