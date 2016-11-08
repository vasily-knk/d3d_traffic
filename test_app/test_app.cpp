#include "stdafx.h"
#include "impl_ID3D11GeometryShader.h"
#include "create_impl.h"

template<typename T>
T *wrap(T *impl)
{
    return create_wrapper(impl);
}

int main()
{
    ID3D11RenderTargetView *impl = nullptr;
    auto p = wrap(impl);
    
    return 0;
}

