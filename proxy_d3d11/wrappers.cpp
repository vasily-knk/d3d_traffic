#include "stdafx.h"
#include "wrappers.h"


namespace
{
    std::map<IUnknown *, IUnknown *> g_impl2wrapper;
    std::set<IUnknown *> g_wrappers;
}

IUnknown *wrap_impl(IUnknown *impl, create_wrapper_f creator)
{
    auto it = g_impl2wrapper.find(impl);
    if (it == g_impl2wrapper.end())
    {
        IUnknown *wrapper = creator(impl);
        it = g_impl2wrapper.emplace(impl, wrapper).first;
        g_wrappers.insert(wrapper);
    }

    return it->second;
}

IUnknown *unwrap_impl(IUnknown *wrapper, unwrap_f unwrapper)
{
    auto it = g_wrappers.find(wrapper);
    if (it == g_wrappers.end())
        return wrapper;

    return unwrapper(wrapper);
}
