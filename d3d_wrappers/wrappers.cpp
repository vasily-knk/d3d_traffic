#include "stdafx.h"
#include "wrappers.h"
#include "guids.h"

#include <boost/thread/locks.hpp>  
#include <boost/thread/shared_mutex.hpp>  

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
    
    typedef boost::shared_mutex mutex_t;
    typedef boost::shared_lock<mutex_t> shared_lock_t;
    typedef boost::upgrade_lock<mutex_t> upgrade_lock_t;
    typedef boost::unique_lock<mutex_t> unique_lock_t;
    typedef boost::upgrade_to_unique_lock<mutex_t> upgrade_to_unique_lock_t;
    
    typedef boost::unordered_map<IUnknown *, wrapper_data_t> impl2wrapper_map_t;
    impl2wrapper_map_t g_impl2wrapper;
    boost::unordered_set<IUnknown *> g_wrappers;
    mutex_t g_mutex;

    wrapper_data_t &find_or_create_wrapper(IUnknown *impl, create_wrapper_f creator, upgrade_lock_t &read_lock)
    {
        auto it = g_impl2wrapper.find(impl);
        if (it == g_impl2wrapper.end())
        {
            auto def_wrapper = creator(impl);
            wrapper_data_t wrapper_data(def_wrapper);

            {
                upgrade_to_unique_lock_t write_lock(read_lock);

                it = g_impl2wrapper.emplace(impl, wrapper_data).first;
                g_wrappers.insert(def_wrapper);
            }
        }

        return it->second;
    }

}

IUnknown *wrap_impl(IUnknown *impl, create_wrapper_f creator)
{
    upgrade_lock_t read_lock(g_mutex);

    auto &wrapper_data = find_or_create_wrapper(impl, creator, read_lock);
    return wrapper_data.default_wrapper;
}

IUnknown *unwrap_impl(IUnknown *wrapper, unwrap_f unwrapper)
{
    {
        shared_lock_t read_lock(g_mutex);

        auto it = g_wrappers.find(wrapper);
        if (it == g_wrappers.end())
            return wrapper;
    }

    return unwrapper(wrapper);
}

IUnknown *wrap_by_guid(IUnknown *impl, REFIID guid)
{
    auto create = [&guid](IUnknown *impl1)
    {
        auto c = creator_by_guid(guid);
        return c(impl1);
    };

    upgrade_lock_t read_lock(g_mutex);
    
    auto &wrapper_data = find_or_create_wrapper(impl, create, read_lock);

    auto &guid_wrappers = wrapper_data.guid_wrappers;
    auto it = guid_wrappers.find(guid);
    if (it == guid_wrappers.end())
    {
        upgrade_to_unique_lock_t write_lock(read_lock);
        
        auto wrapper = create(impl);
        it = guid_wrappers.emplace(guid, wrapper).first;
        g_wrappers.insert(wrapper);
    }

    return it->second;   
}
