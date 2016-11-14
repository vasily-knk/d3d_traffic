#pragma once

struct base_ID3D10Multithread
    : ID3D10Multithread
{
    explicit base_ID3D10Multithread(ID3D10Multithread *impl);
    virtual ~base_ID3D10Multithread() {}

    void STDMETHODCALLTYPE Enter() override;
    void STDMETHODCALLTYPE Leave() override;
    BOOL STDMETHODCALLTYPE SetMultithreadProtected(BOOL bMTProtect) override;
    BOOL STDMETHODCALLTYPE GetMultithreadProtected() override;

    // parent methods
public:
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

public:
    ID3D10Multithread *impl() const;

private:
    ID3D10Multithread *impl_;
    unique_ptr<IUnknown> parent_base_;
};
      