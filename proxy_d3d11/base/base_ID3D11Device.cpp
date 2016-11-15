#include "stdafx.h"

#include "base_ID3D11Device.h"
#include "../wrappers.h"

ID3D11Device *unwrap_inner(ID3D11Device *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11Device *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11Device *create_wrapper_inner(ID3D11Device *impl)
{
    return new base_ID3D11Device(impl);
}
       

base_ID3D11Device::base_ID3D11Device(ID3D11Device *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<IUnknown>(impl))
{

}

HRESULT base_ID3D11Device::CreateBuffer(D3D11_BUFFER_DESC const* pDesc, D3D11_SUBRESOURCE_DATA const* pInitialData, ID3D11Buffer** ppBuffer)
{
    log_method("ID3D11Device", "CreateBuffer");
    
    auto result_ = impl_->CreateBuffer(pDesc, pInitialData, ppBuffer);
    if (ppBuffer != nullptr) *ppBuffer = wrap(*ppBuffer);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateTexture1D(D3D11_TEXTURE1D_DESC const* pDesc, D3D11_SUBRESOURCE_DATA const* pInitialData, ID3D11Texture1D** ppTexture1D)
{
    log_method("ID3D11Device", "CreateTexture1D");
    
    auto result_ = impl_->CreateTexture1D(pDesc, pInitialData, ppTexture1D);
    if (ppTexture1D != nullptr) *ppTexture1D = wrap(*ppTexture1D);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateTexture2D(D3D11_TEXTURE2D_DESC const* pDesc, D3D11_SUBRESOURCE_DATA const* pInitialData, ID3D11Texture2D** ppTexture2D)
{
    log_method("ID3D11Device", "CreateTexture2D");
    
    auto result_ = impl_->CreateTexture2D(pDesc, pInitialData, ppTexture2D);
    if (ppTexture2D != nullptr) *ppTexture2D = wrap(*ppTexture2D);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateTexture3D(D3D11_TEXTURE3D_DESC const* pDesc, D3D11_SUBRESOURCE_DATA const* pInitialData, ID3D11Texture3D** ppTexture3D)
{
    log_method("ID3D11Device", "CreateTexture3D");
    
    auto result_ = impl_->CreateTexture3D(pDesc, pInitialData, ppTexture3D);
    if (ppTexture3D != nullptr) *ppTexture3D = wrap(*ppTexture3D);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateShaderResourceView(ID3D11Resource* pResource, D3D11_SHADER_RESOURCE_VIEW_DESC const* pDesc, ID3D11ShaderResourceView** ppSRView)
{
    log_method("ID3D11Device", "CreateShaderResourceView");
    pResource = unwrap(pResource);
    auto result_ = impl_->CreateShaderResourceView(pResource, pDesc, ppSRView);
    if (ppSRView != nullptr) *ppSRView = wrap(*ppSRView);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateUnorderedAccessView(ID3D11Resource* pResource, D3D11_UNORDERED_ACCESS_VIEW_DESC const* pDesc, ID3D11UnorderedAccessView** ppUAView)
{
    log_method("ID3D11Device", "CreateUnorderedAccessView");
    pResource = unwrap(pResource);
    auto result_ = impl_->CreateUnorderedAccessView(pResource, pDesc, ppUAView);
    if (ppUAView != nullptr) *ppUAView = wrap(*ppUAView);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateRenderTargetView(ID3D11Resource* pResource, D3D11_RENDER_TARGET_VIEW_DESC const* pDesc, ID3D11RenderTargetView** ppRTView)
{
    log_method("ID3D11Device", "CreateRenderTargetView");
    pResource = unwrap(pResource);
    auto result_ = impl_->CreateRenderTargetView(pResource, pDesc, ppRTView);
    if (ppRTView != nullptr) *ppRTView = wrap(*ppRTView);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateDepthStencilView(ID3D11Resource* pResource, D3D11_DEPTH_STENCIL_VIEW_DESC const* pDesc, ID3D11DepthStencilView** ppDepthStencilView)
{
    log_method("ID3D11Device", "CreateDepthStencilView");
    pResource = unwrap(pResource);
    auto result_ = impl_->CreateDepthStencilView(pResource, pDesc, ppDepthStencilView);
    if (ppDepthStencilView != nullptr) *ppDepthStencilView = wrap(*ppDepthStencilView);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateInputLayout(D3D11_INPUT_ELEMENT_DESC const* pInputElementDescs, UINT NumElements, void const* pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout** ppInputLayout)
{
    log_method("ID3D11Device", "CreateInputLayout");
    
    auto result_ = impl_->CreateInputLayout(pInputElementDescs, NumElements, pShaderBytecodeWithInputSignature, BytecodeLength, ppInputLayout);
    if (ppInputLayout != nullptr) *ppInputLayout = wrap(*ppInputLayout);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateVertexShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11VertexShader** ppVertexShader)
{
    log_method("ID3D11Device", "CreateVertexShader");
    pClassLinkage = unwrap(pClassLinkage);
    auto result_ = impl_->CreateVertexShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppVertexShader);
    if (ppVertexShader != nullptr) *ppVertexShader = wrap(*ppVertexShader);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateGeometryShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11GeometryShader** ppGeometryShader)
{
    log_method("ID3D11Device", "CreateGeometryShader");
    pClassLinkage = unwrap(pClassLinkage);
    auto result_ = impl_->CreateGeometryShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppGeometryShader);
    if (ppGeometryShader != nullptr) *ppGeometryShader = wrap(*ppGeometryShader);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateGeometryShaderWithStreamOutput(void const* pShaderBytecode, SIZE_T BytecodeLength, D3D11_SO_DECLARATION_ENTRY const* pSODeclaration, UINT NumEntries, UINT const* pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage* pClassLinkage, ID3D11GeometryShader** ppGeometryShader)
{
    log_method("ID3D11Device", "CreateGeometryShaderWithStreamOutput");
    pClassLinkage = unwrap(pClassLinkage);
    auto result_ = impl_->CreateGeometryShaderWithStreamOutput(pShaderBytecode, BytecodeLength, pSODeclaration, NumEntries, pBufferStrides, NumStrides, RasterizedStream, pClassLinkage, ppGeometryShader);
    if (ppGeometryShader != nullptr) *ppGeometryShader = wrap(*ppGeometryShader);
    return result_;
}
     
HRESULT base_ID3D11Device::CreatePixelShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11PixelShader** ppPixelShader)
{
    log_method("ID3D11Device", "CreatePixelShader");
    pClassLinkage = unwrap(pClassLinkage);
    auto result_ = impl_->CreatePixelShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppPixelShader);
    if (ppPixelShader != nullptr) *ppPixelShader = wrap(*ppPixelShader);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateHullShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11HullShader** ppHullShader)
{
    log_method("ID3D11Device", "CreateHullShader");
    pClassLinkage = unwrap(pClassLinkage);
    auto result_ = impl_->CreateHullShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppHullShader);
    if (ppHullShader != nullptr) *ppHullShader = wrap(*ppHullShader);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateDomainShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11DomainShader** ppDomainShader)
{
    log_method("ID3D11Device", "CreateDomainShader");
    pClassLinkage = unwrap(pClassLinkage);
    auto result_ = impl_->CreateDomainShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppDomainShader);
    if (ppDomainShader != nullptr) *ppDomainShader = wrap(*ppDomainShader);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateComputeShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11ComputeShader** ppComputeShader)
{
    log_method("ID3D11Device", "CreateComputeShader");
    pClassLinkage = unwrap(pClassLinkage);
    auto result_ = impl_->CreateComputeShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppComputeShader);
    if (ppComputeShader != nullptr) *ppComputeShader = wrap(*ppComputeShader);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateClassLinkage(ID3D11ClassLinkage** ppLinkage)
{
    log_method("ID3D11Device", "CreateClassLinkage");
    
    auto result_ = impl_->CreateClassLinkage(ppLinkage);
    if (ppLinkage != nullptr) *ppLinkage = wrap(*ppLinkage);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateBlendState(D3D11_BLEND_DESC const* pBlendStateDesc, ID3D11BlendState** ppBlendState)
{
    log_method("ID3D11Device", "CreateBlendState");
    
    auto result_ = impl_->CreateBlendState(pBlendStateDesc, ppBlendState);
    if (ppBlendState != nullptr) *ppBlendState = wrap(*ppBlendState);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateDepthStencilState(D3D11_DEPTH_STENCIL_DESC const* pDepthStencilDesc, ID3D11DepthStencilState** ppDepthStencilState)
{
    log_method("ID3D11Device", "CreateDepthStencilState");
    
    auto result_ = impl_->CreateDepthStencilState(pDepthStencilDesc, ppDepthStencilState);
    if (ppDepthStencilState != nullptr) *ppDepthStencilState = wrap(*ppDepthStencilState);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateRasterizerState(D3D11_RASTERIZER_DESC const* pRasterizerDesc, ID3D11RasterizerState** ppRasterizerState)
{
    log_method("ID3D11Device", "CreateRasterizerState");
    
    auto result_ = impl_->CreateRasterizerState(pRasterizerDesc, ppRasterizerState);
    if (ppRasterizerState != nullptr) *ppRasterizerState = wrap(*ppRasterizerState);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateSamplerState(D3D11_SAMPLER_DESC const* pSamplerDesc, ID3D11SamplerState** ppSamplerState)
{
    log_method("ID3D11Device", "CreateSamplerState");
    
    auto result_ = impl_->CreateSamplerState(pSamplerDesc, ppSamplerState);
    if (ppSamplerState != nullptr) *ppSamplerState = wrap(*ppSamplerState);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateQuery(D3D11_QUERY_DESC const* pQueryDesc, ID3D11Query** ppQuery)
{
    log_method("ID3D11Device", "CreateQuery");
    
    auto result_ = impl_->CreateQuery(pQueryDesc, ppQuery);
    if (ppQuery != nullptr) *ppQuery = wrap(*ppQuery);
    return result_;
}
     
HRESULT base_ID3D11Device::CreatePredicate(D3D11_QUERY_DESC const* pPredicateDesc, ID3D11Predicate** ppPredicate)
{
    log_method("ID3D11Device", "CreatePredicate");
    
    auto result_ = impl_->CreatePredicate(pPredicateDesc, ppPredicate);
    if (ppPredicate != nullptr) *ppPredicate = wrap(*ppPredicate);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateCounter(D3D11_COUNTER_DESC const* pCounterDesc, ID3D11Counter** ppCounter)
{
    log_method("ID3D11Device", "CreateCounter");
    
    auto result_ = impl_->CreateCounter(pCounterDesc, ppCounter);
    if (ppCounter != nullptr) *ppCounter = wrap(*ppCounter);
    return result_;
}
     
HRESULT base_ID3D11Device::CreateDeferredContext(UINT ContextFlags, ID3D11DeviceContext** ppDeferredContext)
{
    log_method("ID3D11Device", "CreateDeferredContext");
    
    auto result_ = impl_->CreateDeferredContext(ContextFlags, ppDeferredContext);
    if (ppDeferredContext != nullptr) *ppDeferredContext = wrap(*ppDeferredContext);
    return result_;
}
     
HRESULT base_ID3D11Device::OpenSharedResource(HANDLE hResource, REFIID ReturnedInterface, void** ppResource)
{
    log_method("ID3D11Device", "OpenSharedResource");
    
    auto result_ = impl_->OpenSharedResource(hResource, ReturnedInterface, ppResource);
    
    return result_;
}
     
HRESULT base_ID3D11Device::CheckFormatSupport(DXGI_FORMAT Format, UINT* pFormatSupport)
{
    log_method("ID3D11Device", "CheckFormatSupport");
    
    auto result_ = impl_->CheckFormatSupport(Format, pFormatSupport);
    
    return result_;
}
     
HRESULT base_ID3D11Device::CheckMultisampleQualityLevels(DXGI_FORMAT Format, UINT SampleCount, UINT* pNumQualityLevels)
{
    log_method("ID3D11Device", "CheckMultisampleQualityLevels");
    
    auto result_ = impl_->CheckMultisampleQualityLevels(Format, SampleCount, pNumQualityLevels);
    
    return result_;
}
     
void base_ID3D11Device::CheckCounterInfo(D3D11_COUNTER_INFO* pCounterInfo)
{
    log_method("ID3D11Device", "CheckCounterInfo");
    
    impl_->CheckCounterInfo(pCounterInfo);
    
    
}
     
HRESULT base_ID3D11Device::CheckCounter(D3D11_COUNTER_DESC const* pDesc, D3D11_COUNTER_TYPE* pType, UINT* pActiveCounters, LPSTR szName, UINT* pNameLength, LPSTR szUnits, UINT* pUnitsLength, LPSTR szDescription, UINT* pDescriptionLength)
{
    log_method("ID3D11Device", "CheckCounter");
    
    auto result_ = impl_->CheckCounter(pDesc, pType, pActiveCounters, szName, pNameLength, szUnits, pUnitsLength, szDescription, pDescriptionLength);
    
    return result_;
}
     
HRESULT base_ID3D11Device::CheckFeatureSupport(D3D11_FEATURE Feature, void* pFeatureSupportData, UINT FeatureSupportDataSize)
{
    log_method("ID3D11Device", "CheckFeatureSupport");
    
    auto result_ = impl_->CheckFeatureSupport(Feature, pFeatureSupportData, FeatureSupportDataSize);
    
    return result_;
}
     
HRESULT base_ID3D11Device::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    log_method("ID3D11Device", "GetPrivateData");
    
    auto result_ = impl_->GetPrivateData(guid, pDataSize, pData);
    
    return result_;
}
     
HRESULT base_ID3D11Device::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    log_method("ID3D11Device", "SetPrivateData");
    
    auto result_ = impl_->SetPrivateData(guid, DataSize, pData);
    
    return result_;
}
     
HRESULT base_ID3D11Device::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    log_method("ID3D11Device", "SetPrivateDataInterface");
    pData = unwrap(pData);
    auto result_ = impl_->SetPrivateDataInterface(guid, pData);
    
    return result_;
}
     
D3D_FEATURE_LEVEL base_ID3D11Device::GetFeatureLevel()
{
    log_method("ID3D11Device", "GetFeatureLevel");
    
    auto result_ = impl_->GetFeatureLevel();
    
    return result_;
}
     
UINT base_ID3D11Device::GetCreationFlags()
{
    log_method("ID3D11Device", "GetCreationFlags");
    
    auto result_ = impl_->GetCreationFlags();
    
    return result_;
}
     
HRESULT base_ID3D11Device::GetDeviceRemovedReason()
{
    log_method("ID3D11Device", "GetDeviceRemovedReason");
    
    auto result_ = impl_->GetDeviceRemovedReason();
    
    return result_;
}
     
void base_ID3D11Device::GetImmediateContext(ID3D11DeviceContext** ppImmediateContext)
{
    log_method("ID3D11Device", "GetImmediateContext");
    
    impl_->GetImmediateContext(ppImmediateContext);
    if (ppImmediateContext != nullptr) *ppImmediateContext = wrap(*ppImmediateContext);
    
}
     
HRESULT base_ID3D11Device::SetExceptionMode(UINT RaiseFlags)
{
    log_method("ID3D11Device", "SetExceptionMode");
    
    auto result_ = impl_->SetExceptionMode(RaiseFlags);
    
    return result_;
}
     
UINT base_ID3D11Device::GetExceptionMode()
{
    log_method("ID3D11Device", "GetExceptionMode");
    
    auto result_ = impl_->GetExceptionMode();
    
    return result_;
}
     

HRESULT base_ID3D11Device::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11Device::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11Device::Release()
{
    return parent_base_->Release();
}
     

ID3D11Device *base_ID3D11Device::impl() const
{
    return impl_;
}
      
