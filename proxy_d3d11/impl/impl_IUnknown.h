#pragma once

#include "base_IUnknown.h"

struct impl_IUnknown
    : base_IUnknown                     
{
    explicit impl_IUnknown(IUnknown *impl);
    
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
};                       
                                             