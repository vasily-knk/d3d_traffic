#include "stdafx.h"

#include "impl_ID3D11ShaderResourceView.h"

ID3D11ShaderResourceView *create_wrapper_inner(ID3D11ShaderResourceView *impl)
{
    return new impl_ID3D11ShaderResourceView(impl);
}

ID3D11ShaderResourceView *unwrap_inner(ID3D11ShaderResourceView *wrapper)
{
    auto *cast_wrapper = dynamic_cast<impl_ID3D11ShaderResourceView *>(wrapper);
    return cast_wrapper->impl();
}

impl_ID3D11ShaderResourceView::impl_ID3D11ShaderResourceView(ID3D11ShaderResourceView *impl)
    : base_ID3D11ShaderResourceView(impl)
{

}
      