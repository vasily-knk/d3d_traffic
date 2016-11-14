#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10View.h"

ID3D10View *create_wrapper_inner(ID3D10View *impl)
{
    return new impl_ID3D10View(impl);
}

impl_ID3D10View::impl_ID3D10View(ID3D10View *impl)
    : base_ID3D10View(impl)
{

}
      