#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11View.h"

ID3D11View *create_wrapper_inner(ID3D11View *impl)
{
    return new impl_ID3D11View(impl);
}

impl_ID3D11View::impl_ID3D11View(ID3D11View *impl)
    : base_ID3D11View(impl)
{

}
      