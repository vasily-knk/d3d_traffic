#pragma once

#include "base/create_impl.h"

struct ROOT
{
    virtual ~ROOT() {}
};


typedef std::function<IUnknown *(IUnknown *)> create_wrapper_f;
typedef std::function<IUnknown *(IUnknown *)> unwrap_f;
typedef std::function<IUnknown *(IUnknown *)> wrap_f;

IUnknown *wrap_impl(IUnknown *impl, create_wrapper_f creator);
IUnknown *unwrap_impl(IUnknown *wrapper, unwrap_f unwrapper);

template<typename T>
T *unwrap(T *wrapper)
{
    if (!wrapper)
        return nullptr;

    auto f = [](IUnknown *wr)
    {
        return unwrap_inner(static_cast<T*>(wr));
    };

    return static_cast<T*>(unwrap_impl(wrapper, f));
}

inline IUnknown *unwrap(IUnknown const *impl)
{
    auto impl_cast = const_cast<IUnknown *>(impl);
    return unwrap(impl_cast);
}

template<typename T>
T *create_wrapper(T *impl)
{
    return create_wrapper_inner(impl);
}

template<typename T>
inline ROOT *create_wrapper(void *)
{
    return nullptr;
}


template<typename T>
T *wrap(T *impl)
{
    if (!impl)
        return nullptr;

    auto f = [](IUnknown *im)
    {
        return create_wrapper_inner(static_cast<T*>(im));
    };

    return static_cast<T*>(wrap_impl(impl, f));
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


template<typename T>
bool check_magic(T const *ptr)
{
    return true;
}

IUnknown *wrap_by_guid(IUnknown *impl, REFIID guid);
IUnknown *rewrap_by_guid(IUnknown *impl, REFIID guid);
create_wrapper_f creator_by_guid(REFIID guid);

void log_method(char const *interface_name, char const *method_name);
void log_message(string const &str);