#pragma once

#include "impl_ROOT.h"

struct base_IUnknown
    : impl_ROOT
    , IUnknown
{
    explicit base_IUnknown(IUnknown *impl);

    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

    // parent methods
public:
    

public:
    IUnknown *impl() const;

private:
    IUnknown *impl_;
};
      