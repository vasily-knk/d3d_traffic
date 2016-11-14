#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10ShaderResourceView.h"

ID3D10ShaderResourceView *create_wrapper_inner(ID3D10ShaderResourceView *impl)
{
    return new impl_ID3D10ShaderResourceView(impl);
}

impl_ID3D10ShaderResourceView::impl_ID3D10ShaderResourceView(ID3D10ShaderResourceView *impl)
    : base_ID3D10ShaderResourceView(impl)
{

}
      