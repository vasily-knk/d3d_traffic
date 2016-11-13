#pragma once

#include "impl/create_impl.h"

inline IUnknown const *unwrap_inner(IUnknown const *impl)
{
    auto impl_cast = const_cast<IUnknown *>(impl);
    return unwrap_inner(impl_cast);
}

template<typename T>
T *create_wrapper(T *impl)
{
    return create_wrapper_inner(impl);
}

template<typename T>
T *unwrap(T *wrapper)
{
    if (!wrapper)
        return nullptr;

    return unwrap_inner(wrapper);
}

template<typename T>
T *wrap(T *impl)
{
    if (!impl)
        return nullptr;

    return create_wrapper_inner(impl);
}

template<typename T>
vector<T*> unwrap_array(T *const *ptr, size_t size)
{
    vector<T*> result(size);
    for (size_t i = 0; i < size; ++i)
        result[i] = unwrap(ptr[i]);

    return result;
}

template<typename T>
void wrap_array(T *const ptr, size_t size)
{
    for (size_t i = 0; i < size; ++i)
        ptr[i] = wrap(ptr[i]);
}
