#pragma once

struct impl_IUnknown
    : IUnknown
{
    virtual ~impl_IUnknown();

    explicit impl_IUnknown(IUnknown *impl);

    HRESULT STDMETHODCALLTYPE QueryInterface(const IID& riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

private:
    IUnknown *impl_;
};