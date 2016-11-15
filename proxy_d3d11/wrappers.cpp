#include "stdafx.h"
#include "wrappers.h"
#include "guids.h"

namespace
{
    struct wrapper_data_t
    {
        explicit wrapper_data_t(IUnknown *default_wrapper)
            : default_wrapper(default_wrapper)
        {}
        
        IUnknown *default_wrapper;
        guid_map_t<IUnknown*> guid_wrappers;
    };
    
    typedef std::map<IUnknown *, wrapper_data_t> impl2wrapper_map_t;
    impl2wrapper_map_t g_impl2wrapper;
    std::set<IUnknown *> g_wrappers;

    wrapper_data_t &find_or_create_wrapper(IUnknown *impl, create_wrapper_f creator)
    {
        auto it = g_impl2wrapper.find(impl);
        if (it == g_impl2wrapper.end())
        {
            auto def_wrapper = creator(impl);
            wrapper_data_t wrapper_data(def_wrapper);

            it = g_impl2wrapper.emplace(impl, wrapper_data).first;
            g_wrappers.insert(def_wrapper);
        }

        return it->second;
    }

}

IUnknown *wrap_impl(IUnknown *impl, create_wrapper_f creator)
{
    auto &wrapper_data = find_or_create_wrapper(impl, creator);
    return wrapper_data.default_wrapper;
}

IUnknown *unwrap_impl(IUnknown *wrapper, unwrap_f unwrapper)
{
    auto it = g_wrappers.find(wrapper);
    if (it == g_wrappers.end())
        return wrapper;

    return unwrapper(wrapper);
}

IUnknown *wrap_by_guid(IUnknown *impl, REFIID guid)
{
    auto create = [&guid](IUnknown *impl1)
    {
        auto c = creator_by_guid(guid);
        return c(impl1);
    };

    auto &wrapper_data = find_or_create_wrapper(impl, create);

    auto &guid_wrappers = wrapper_data.guid_wrappers;
    auto it = guid_wrappers.find(guid);
    if (it == guid_wrappers.end())
    {
        auto wrapper = create(impl);
        it = guid_wrappers.emplace(guid, wrapper).first;
        g_wrappers.insert(wrapper);
    }

    return it->second;   

}
