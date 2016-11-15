#include "stdafx.h"
#include "../wrappers.h"

#include "../base/base_IUnknown.h"


std::ostream& operator<<(std::ostream& os, REFGUID guid)
{

    os << std::uppercase;
    os.width(8);
    os << std::hex << guid.Data1 << '-';

    os.width(4);
    os << std::hex << guid.Data2 << '-';

    os.width(4);
    os << std::hex << guid.Data3 << '-';

    os.width(2);
    os << std::hex
        << static_cast<short>(guid.Data4[0])
        << static_cast<short>(guid.Data4[1])
        << '-'
        << static_cast<short>(guid.Data4[2])
        << static_cast<short>(guid.Data4[3])
        << static_cast<short>(guid.Data4[4])
        << static_cast<short>(guid.Data4[5])
        << static_cast<short>(guid.Data4[6])
        << static_cast<short>(guid.Data4[7]);
    os << std::nouppercase;
    return os;
}

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
                std::stringstream ss;
                ss << "Can't wrap guid: " << riid;
                log_message(ss.str());
            }
        }

        return result;
    }

};

IUnknown *create_wrapper_inner(IUnknown *impl)
{
    return new impl_IUnknown(impl);
}

