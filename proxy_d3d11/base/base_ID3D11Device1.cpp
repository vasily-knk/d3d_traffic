#include "stdafx.h"

#include "base_ID3D11Device1.h"
#include "../wrappers.h"

ID3D11Device1 *unwrap_inner(ID3D11Device1 *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11Device1 *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11Device1 *create_wrapper_inner(ID3D11Device1 *impl)
{
    return new base_ID3D11Device1(impl);
}
       

base_ID3D11Device1::base_ID3D11Device1(ID3D11Device1 *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11Device>(impl))
{

}

void base_ID3D11Device1::GetImmediateContext1(ID3D11DeviceContext1** ppImmediateContext)
{
    log_method("ID3D11Device1", "GetImmediateContext1");
    
    impl_->GetImmediateContext1(ppImmediateContext);
    if (ppImmediateContext != nullptr) *ppImmediateContext = wrap(*ppImmediateContext);
    
}
     
HRESULT base_ID3D11Device1::CreateDeferredContext1(UINT ContextFlags, ID3D11DeviceContext1** ppDeferredContext)
{
    log_method("ID3D11Device1", "CreateDeferredContext1");
    
    auto result_ = impl_->CreateDeferredContext1(ContextFlags, ppDeferredContext);
    if (ppDeferredContext != nullptr) *ppDeferredContext = wrap(*ppDeferredContext);
    return result_;
}
     
HRESULT base_ID3D11Device1::CreateBlendState1(D3D11_BLEND_DESC1 const* pBlendStateDesc, ID3D11BlendState1** ppBlendState)
{
    log_method("ID3D11Device1", "CreateBlendState1");
    
    auto result_ = impl_->CreateBlendState1(pBlendStateDesc, ppBlendState);
    if (ppBlendState != nullptr) *ppBlendState = wrap(*ppBlendState);
    return result_;
}
     
HRESULT base_ID3D11Device1::CreateRasterizerState1(D3D11_RASTERIZER_DESC1 const* pRasterizerDesc, ID3D11RasterizerState1** ppRasterizerState)
{
    log_method("ID3D11Device1", "CreateRasterizerState1");
    
    auto result_ = impl_->CreateRasterizerState1(pRasterizerDesc, ppRasterizerState);
    if (ppRasterizerState != nullptr) *ppRasterizerState = wrap(*ppRasterizerState);
    return result_;
}
     
HRESULT base_ID3D11Device1::CreateDeviceContextState(UINT Flags, D3D_FEATURE_LEVEL const* pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, REFIID EmulatedInterface, D3D_FEATURE_LEVEL* pChosenFeatureLevel, ID3DDeviceContextState** ppContextState)
{
    log_method("ID3D11Device1", "CreateDeviceContextState");
    
    auto result_ = impl_->CreateDeviceContextState(Flags, pFeatureLevels, FeatureLevels, SDKVersion, EmulatedInterface, pChosenFeatureLevel, ppContextState);
    if (ppContextState != nullptr) *ppContextState = wrap(*ppContextState);
    return result_;
}
     
HRESULT base_ID3D11Device1::OpenSharedResource1(HANDLE hResource, REFIID returnedInterface, void** ppResource)
{
    log_method("ID3D11Device1", "OpenSharedResource1");
    
    auto result_ = impl_->OpenSharedResource1(hResource, returnedInterface, ppResource);
    
    return result_;
}
     
HRESULT base_ID3D11Device1::OpenSharedResourceByName(LPCWSTR lpName, DWORD dwDesiredAccess, REFIID returnedInterface, void** ppResource)
{
    log_method("ID3D11Device1", "OpenSharedResourceByName");
    
    auto result_ = impl_->OpenSharedResourceByName(lpName, dwDesiredAccess, returnedInterface, ppResource);
    
    return result_;
}
     

HRESULT base_ID3D11Device1::CreateBuffer(D3D11_BUFFER_DESC const* pDesc, D3D11_SUBRESOURCE_DATA const* pInitialData, ID3D11Buffer** ppBuffer)
{
    return parent_base_->CreateBuffer(pDesc, pInitialData, ppBuffer);
}
     
HRESULT base_ID3D11Device1::CreateTexture1D(D3D11_TEXTURE1D_DESC const* pDesc, D3D11_SUBRESOURCE_DATA const* pInitialData, ID3D11Texture1D** ppTexture1D)
{
    return parent_base_->CreateTexture1D(pDesc, pInitialData, ppTexture1D);
}
     
HRESULT base_ID3D11Device1::CreateTexture2D(D3D11_TEXTURE2D_DESC const* pDesc, D3D11_SUBRESOURCE_DATA const* pInitialData, ID3D11Texture2D** ppTexture2D)
{
    return parent_base_->CreateTexture2D(pDesc, pInitialData, ppTexture2D);
}
     
HRESULT base_ID3D11Device1::CreateTexture3D(D3D11_TEXTURE3D_DESC const* pDesc, D3D11_SUBRESOURCE_DATA const* pInitialData, ID3D11Texture3D** ppTexture3D)
{
    return parent_base_->CreateTexture3D(pDesc, pInitialData, ppTexture3D);
}
     
HRESULT base_ID3D11Device1::CreateShaderResourceView(ID3D11Resource* pResource, D3D11_SHADER_RESOURCE_VIEW_DESC const* pDesc, ID3D11ShaderResourceView** ppSRView)
{
    return parent_base_->CreateShaderResourceView(pResource, pDesc, ppSRView);
}
     
HRESULT base_ID3D11Device1::CreateUnorderedAccessView(ID3D11Resource* pResource, D3D11_UNORDERED_ACCESS_VIEW_DESC const* pDesc, ID3D11UnorderedAccessView** ppUAView)
{
    return parent_base_->CreateUnorderedAccessView(pResource, pDesc, ppUAView);
}
     
HRESULT base_ID3D11Device1::CreateRenderTargetView(ID3D11Resource* pResource, D3D11_RENDER_TARGET_VIEW_DESC const* pDesc, ID3D11RenderTargetView** ppRTView)
{
    return parent_base_->CreateRenderTargetView(pResource, pDesc, ppRTView);
}
     
HRESULT base_ID3D11Device1::CreateDepthStencilView(ID3D11Resource* pResource, D3D11_DEPTH_STENCIL_VIEW_DESC const* pDesc, ID3D11DepthStencilView** ppDepthStencilView)
{
    return parent_base_->CreateDepthStencilView(pResource, pDesc, ppDepthStencilView);
}
     
HRESULT base_ID3D11Device1::CreateInputLayout(D3D11_INPUT_ELEMENT_DESC const* pInputElementDescs, UINT NumElements, void const* pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout** ppInputLayout)
{
    return parent_base_->CreateInputLayout(pInputElementDescs, NumElements, pShaderBytecodeWithInputSignature, BytecodeLength, ppInputLayout);
}
     
HRESULT base_ID3D11Device1::CreateVertexShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11VertexShader** ppVertexShader)
{
    return parent_base_->CreateVertexShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppVertexShader);
}
     
HRESULT base_ID3D11Device1::CreateGeometryShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11GeometryShader** ppGeometryShader)
{
    return parent_base_->CreateGeometryShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppGeometryShader);
}
     
HRESULT base_ID3D11Device1::CreateGeometryShaderWithStreamOutput(void const* pShaderBytecode, SIZE_T BytecodeLength, D3D11_SO_DECLARATION_ENTRY const* pSODeclaration, UINT NumEntries, UINT const* pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage* pClassLinkage, ID3D11GeometryShader** ppGeometryShader)
{
    return parent_base_->CreateGeometryShaderWithStreamOutput(pShaderBytecode, BytecodeLength, pSODeclaration, NumEntries, pBufferStrides, NumStrides, RasterizedStream, pClassLinkage, ppGeometryShader);
}
     
HRESULT base_ID3D11Device1::CreatePixelShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11PixelShader** ppPixelShader)
{
    return parent_base_->CreatePixelShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppPixelShader);
}
     
HRESULT base_ID3D11Device1::CreateHullShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11HullShader** ppHullShader)
{
    return parent_base_->CreateHullShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppHullShader);
}
     
HRESULT base_ID3D11Device1::CreateDomainShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11DomainShader** ppDomainShader)
{
    return parent_base_->CreateDomainShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppDomainShader);
}
     
HRESULT base_ID3D11Device1::CreateComputeShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11ComputeShader** ppComputeShader)
{
    return parent_base_->CreateComputeShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppComputeShader);
}
     
HRESULT base_ID3D11Device1::CreateClassLinkage(ID3D11ClassLinkage** ppLinkage)
{
    return parent_base_->CreateClassLinkage(ppLinkage);
}
     
HRESULT base_ID3D11Device1::CreateBlendState(D3D11_BLEND_DESC const* pBlendStateDesc, ID3D11BlendState** ppBlendState)
{
    return parent_base_->CreateBlendState(pBlendStateDesc, ppBlendState);
}
     
HRESULT base_ID3D11Device1::CreateDepthStencilState(D3D11_DEPTH_STENCIL_DESC const* pDepthStencilDesc, ID3D11DepthStencilState** ppDepthStencilState)
{
    return parent_base_->CreateDepthStencilState(pDepthStencilDesc, ppDepthStencilState);
}
     
HRESULT base_ID3D11Device1::CreateRasterizerState(D3D11_RASTERIZER_DESC const* pRasterizerDesc, ID3D11RasterizerState** ppRasterizerState)
{
    return parent_base_->CreateRasterizerState(pRasterizerDesc, ppRasterizerState);
}
     
HRESULT base_ID3D11Device1::CreateSamplerState(D3D11_SAMPLER_DESC const* pSamplerDesc, ID3D11SamplerState** ppSamplerState)
{
    return parent_base_->CreateSamplerState(pSamplerDesc, ppSamplerState);
}
     
HRESULT base_ID3D11Device1::CreateQuery(D3D11_QUERY_DESC const* pQueryDesc, ID3D11Query** ppQuery)
{
    return parent_base_->CreateQuery(pQueryDesc, ppQuery);
}
     
HRESULT base_ID3D11Device1::CreatePredicate(D3D11_QUERY_DESC const* pPredicateDesc, ID3D11Predicate** ppPredicate)
{
    return parent_base_->CreatePredicate(pPredicateDesc, ppPredicate);
}
     
HRESULT base_ID3D11Device1::CreateCounter(D3D11_COUNTER_DESC const* pCounterDesc, ID3D11Counter** ppCounter)
{
    return parent_base_->CreateCounter(pCounterDesc, ppCounter);
}
     
HRESULT base_ID3D11Device1::CreateDeferredContext(UINT ContextFlags, ID3D11DeviceContext** ppDeferredContext)
{
    return parent_base_->CreateDeferredContext(ContextFlags, ppDeferredContext);
}
     
HRESULT base_ID3D11Device1::OpenSharedResource(HANDLE hResource, REFIID ReturnedInterface, void** ppResource)
{
    return parent_base_->OpenSharedResource(hResource, ReturnedInterface, ppResource);
}
     
HRESULT base_ID3D11Device1::CheckFormatSupport(DXGI_FORMAT Format, UINT* pFormatSupport)
{
    return parent_base_->CheckFormatSupport(Format, pFormatSupport);
}
     
HRESULT base_ID3D11Device1::CheckMultisampleQualityLevels(DXGI_FORMAT Format, UINT SampleCount, UINT* pNumQualityLevels)
{
    return parent_base_->CheckMultisampleQualityLevels(Format, SampleCount, pNumQualityLevels);
}
     
void base_ID3D11Device1::CheckCounterInfo(D3D11_COUNTER_INFO* pCounterInfo)
{
    return parent_base_->CheckCounterInfo(pCounterInfo);
}
     
HRESULT base_ID3D11Device1::CheckCounter(D3D11_COUNTER_DESC const* pDesc, D3D11_COUNTER_TYPE* pType, UINT* pActiveCounters, LPSTR szName, UINT* pNameLength, LPSTR szUnits, UINT* pUnitsLength, LPSTR szDescription, UINT* pDescriptionLength)
{
    return parent_base_->CheckCounter(pDesc, pType, pActiveCounters, szName, pNameLength, szUnits, pUnitsLength, szDescription, pDescriptionLength);
}
     
HRESULT base_ID3D11Device1::CheckFeatureSupport(D3D11_FEATURE Feature, void* pFeatureSupportData, UINT FeatureSupportDataSize)
{
    return parent_base_->CheckFeatureSupport(Feature, pFeatureSupportData, FeatureSupportDataSize);
}
     
HRESULT base_ID3D11Device1::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11Device1::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11Device1::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
D3D_FEATURE_LEVEL base_ID3D11Device1::GetFeatureLevel()
{
    return parent_base_->GetFeatureLevel();
}
     
UINT base_ID3D11Device1::GetCreationFlags()
{
    return parent_base_->GetCreationFlags();
}
     
HRESULT base_ID3D11Device1::GetDeviceRemovedReason()
{
    return parent_base_->GetDeviceRemovedReason();
}
     
void base_ID3D11Device1::GetImmediateContext(ID3D11DeviceContext** ppImmediateContext)
{
    return parent_base_->GetImmediateContext(ppImmediateContext);
}
     
HRESULT base_ID3D11Device1::SetExceptionMode(UINT RaiseFlags)
{
    return parent_base_->SetExceptionMode(RaiseFlags);
}
     
UINT base_ID3D11Device1::GetExceptionMode()
{
    return parent_base_->GetExceptionMode();
}
     
HRESULT base_ID3D11Device1::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11Device1::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11Device1::Release()
{
    return parent_base_->Release();
}
     

ID3D11Device1 *base_ID3D11Device1::impl() const
{
    return impl_;
}
      
