#include "stdafx.h"

#include "base_ID3DUserDefinedAnnotation.h"
#include "../wrappers.h"

ID3DUserDefinedAnnotation *unwrap_inner(ID3DUserDefinedAnnotation *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3DUserDefinedAnnotation *>(wrapper);
    return cast_wrapper->impl();
}

ID3DUserDefinedAnnotation *create_wrapper_inner(ID3DUserDefinedAnnotation *impl)
{
    return new base_ID3DUserDefinedAnnotation(impl);
}
       

base_ID3DUserDefinedAnnotation::base_ID3DUserDefinedAnnotation(ID3DUserDefinedAnnotation *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<IUnknown>(impl))
{

}

INT base_ID3DUserDefinedAnnotation::BeginEvent(LPCWSTR Name)
{
    log_method("ID3DUserDefinedAnnotation", "BeginEvent");
    
    auto result_ = impl_->BeginEvent(Name);
    
    return result_;
}
     
INT base_ID3DUserDefinedAnnotation::EndEvent()
{
    log_method("ID3DUserDefinedAnnotation", "EndEvent");
    
    auto result_ = impl_->EndEvent();
    
    return result_;
}
     
void base_ID3DUserDefinedAnnotation::SetMarker(LPCWSTR Name)
{
    log_method("ID3DUserDefinedAnnotation", "SetMarker");
    
    impl_->SetMarker(Name);
    
    
}
     
BOOL base_ID3DUserDefinedAnnotation::GetStatus()
{
    log_method("ID3DUserDefinedAnnotation", "GetStatus");
    
    auto result_ = impl_->GetStatus();
    
    return result_;
}
     

HRESULT base_ID3DUserDefinedAnnotation::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3DUserDefinedAnnotation::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3DUserDefinedAnnotation::Release()
{
    return parent_base_->Release();
}
     

ID3DUserDefinedAnnotation *base_ID3DUserDefinedAnnotation::impl() const
{
    return impl_;
}
      
