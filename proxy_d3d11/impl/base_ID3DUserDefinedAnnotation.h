#pragma once

struct base_ID3DUserDefinedAnnotation
    : ID3DUserDefinedAnnotation
{
    explicit base_ID3DUserDefinedAnnotation(ID3DUserDefinedAnnotation *impl);
    virtual ~base_ID3DUserDefinedAnnotation() {}

    INT STDMETHODCALLTYPE BeginEvent(LPCWSTR Name) override;
    INT STDMETHODCALLTYPE EndEvent() override;
    void STDMETHODCALLTYPE SetMarker(LPCWSTR Name) override;
    BOOL STDMETHODCALLTYPE GetStatus() override;

    // parent methods
public:
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

public:
    ID3DUserDefinedAnnotation *impl() const;

private:
    ID3DUserDefinedAnnotation *impl_;
    unique_ptr<IUnknown> parent_base_;
};
      