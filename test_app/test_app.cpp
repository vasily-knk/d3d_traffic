#include "stdafx.h"
#include "impl/create_impl.h"

template<typename T>
T *wrap(T *impl)
{
    if (!impl)
        return nullptr;

    return create_wrapper(impl);
}

int main()
{
    ID3D11RenderTargetView *impl = nullptr;
    auto p = wrap(impl);
    
    return 0;
}

