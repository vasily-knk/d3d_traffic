#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D11ShaderResourceView.h"

ID3D11ShaderResourceView *create_wrapper_inner(ID3D11ShaderResourceView *impl)
{
    return new impl_ID3D11ShaderResourceView(impl);
}

impl_ID3D11ShaderResourceView::impl_ID3D11ShaderResourceView(ID3D11ShaderResourceView *impl)
    : base_ID3D11ShaderResourceView(impl)
{

}
      