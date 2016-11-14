#pragma once

struct base_IUnknown
    : IUnknown
{
    explicit base_IUnknown(IUnknown *impl);
    virtual ~base_IUnknown() {}

    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

    // parent methods
public:
    

public:
    IUnknown *impl() const;

private:
    IUnknown *impl_;
    unique_ptr<ROOT> parent_base_;
};
      