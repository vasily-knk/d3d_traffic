#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11CommandList.h"

ID3D11CommandList *create_wrapper_inner(ID3D11CommandList *impl)
{
    return new impl_ID3D11CommandList(impl);
}

impl_ID3D11CommandList::impl_ID3D11CommandList(ID3D11CommandList *impl)
    : base_ID3D11CommandList(impl)
{

}
      