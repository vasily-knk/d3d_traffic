#include "stdafx.h"
#include "../wrappers.h"

#include "../base/base_IUnknown.h"


struct impl_IUnknown
    : base_IUnknown
{
    explicit impl_IUnknown(IUnknown *impl)
        : base_IUnknown(impl)
    {}
    
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override
    {
        auto result = impl()->QueryInterface(riid, ppvObject);

        if (*ppvObject != nullptr)
        {
            if (creator_by_guid(riid))
            {
                auto p = static_cast<IUnknown *>(*ppvObject);
                IUnknown *wrapped = wrap_by_guid(p, riid);
                *ppvObject = wrapped;
            }
            else
            {
                int aaa = 5;
            }
        }

        return result;
    }

};

IUnknown *create_wrapper_inner(IUnknown *impl)
{
    return new impl_IUnknown(impl);
}

