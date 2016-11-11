#include "stdafx.h"

#include "base_ID3D11Device.h"

base_ID3D11Device::base_ID3D11Device(ID3D11Device *impl)
    : impl_IUnknown(impl)
    , impl_(impl)
{

}

HRESULT base_ID3D11Device::CreateBuffer(D3D11_BUFFER_DESC const* pDesc, D3D11_SUBRESOURCE_DATA const* pInitialData, ID3D11Buffer** ppBuffer)
{
    return impl_->CreateBuffer(pDesc, pInitialData, ppBuffer);
}
     
HRESULT base_ID3D11Device::CreateTexture1D(D3D11_TEXTURE1D_DESC const* pDesc, D3D11_SUBRESOURCE_DATA const* pInitialData, ID3D11Texture1D** ppTexture1D)
{
    return impl_->CreateTexture1D(pDesc, pInitialData, ppTexture1D);
}
     
HRESULT base_ID3D11Device::CreateTexture2D(D3D11_TEXTURE2D_DESC const* pDesc, D3D11_SUBRESOURCE_DATA const* pInitialData, ID3D11Texture2D** ppTexture2D)
{
    return impl_->CreateTexture2D(pDesc, pInitialData, ppTexture2D);
}
     
HRESULT base_ID3D11Device::CreateTexture3D(D3D11_TEXTURE3D_DESC const* pDesc, D3D11_SUBRESOURCE_DATA const* pInitialData, ID3D11Texture3D** ppTexture3D)
{
    return impl_->CreateTexture3D(pDesc, pInitialData, ppTexture3D);
}
     
HRESULT base_ID3D11Device::CreateShaderResourceView(ID3D11Resource* pResource, D3D11_SHADER_RESOURCE_VIEW_DESC const* pDesc, ID3D11ShaderResourceView** ppSRView)
{
    return impl_->CreateShaderResourceView(pResource, pDesc, ppSRView);
}
     
HRESULT base_ID3D11Device::CreateUnorderedAccessView(ID3D11Resource* pResource, D3D11_UNORDERED_ACCESS_VIEW_DESC const* pDesc, ID3D11UnorderedAccessView** ppUAView)
{
    return impl_->CreateUnorderedAccessView(pResource, pDesc, ppUAView);
}
     
HRESULT base_ID3D11Device::CreateRenderTargetView(ID3D11Resource* pResource, D3D11_RENDER_TARGET_VIEW_DESC const* pDesc, ID3D11RenderTargetView** ppRTView)
{
    return impl_->CreateRenderTargetView(pResource, pDesc, ppRTView);
}
     
HRESULT base_ID3D11Device::CreateDepthStencilView(ID3D11Resource* pResource, D3D11_DEPTH_STENCIL_VIEW_DESC const* pDesc, ID3D11DepthStencilView** ppDepthStencilView)
{
    return impl_->CreateDepthStencilView(pResource, pDesc, ppDepthStencilView);
}
     
HRESULT base_ID3D11Device::CreateInputLayout(D3D11_INPUT_ELEMENT_DESC const* pInputElementDescs, UINT NumElements, void const* pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout** ppInputLayout)
{
    return impl_->CreateInputLayout(pInputElementDescs, NumElements, pShaderBytecodeWithInputSignature, BytecodeLength, ppInputLayout);
}
     
HRESULT base_ID3D11Device::CreateVertexShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11VertexShader** ppVertexShader)
{
    return impl_->CreateVertexShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppVertexShader);
}
     
HRESULT base_ID3D11Device::CreateGeometryShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11GeometryShader** ppGeometryShader)
{
    return impl_->CreateGeometryShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppGeometryShader);
}
     
HRESULT base_ID3D11Device::CreateGeometryShaderWithStreamOutput(void const* pShaderBytecode, SIZE_T BytecodeLength, D3D11_SO_DECLARATION_ENTRY const* pSODeclaration, UINT NumEntries, UINT const* pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage* pClassLinkage, ID3D11GeometryShader** ppGeometryShader)
{
    return impl_->CreateGeometryShaderWithStreamOutput(pShaderBytecode, BytecodeLength, pSODeclaration, NumEntries, pBufferStrides, NumStrides, RasterizedStream, pClassLinkage, ppGeometryShader);
}
     
HRESULT base_ID3D11Device::CreatePixelShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11PixelShader** ppPixelShader)
{
    return impl_->CreatePixelShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppPixelShader);
}
     
HRESULT base_ID3D11Device::CreateHullShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11HullShader** ppHullShader)
{
    return impl_->CreateHullShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppHullShader);
}
     
HRESULT base_ID3D11Device::CreateDomainShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11DomainShader** ppDomainShader)
{
    return impl_->CreateDomainShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppDomainShader);
}
     
HRESULT base_ID3D11Device::CreateComputeShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11ComputeShader** ppComputeShader)
{
    return impl_->CreateComputeShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppComputeShader);
}
     
HRESULT base_ID3D11Device::CreateClassLinkage(ID3D11ClassLinkage** ppLinkage)
{
    return impl_->CreateClassLinkage(ppLinkage);
}
     
HRESULT base_ID3D11Device::CreateBlendState(D3D11_BLEND_DESC const* pBlendStateDesc, ID3D11BlendState** ppBlendState)
{
    return impl_->CreateBlendState(pBlendStateDesc, ppBlendState);
}
     
HRESULT base_ID3D11Device::CreateDepthStencilState(D3D11_DEPTH_STENCIL_DESC const* pDepthStencilDesc, ID3D11DepthStencilState** ppDepthStencilState)
{
    return impl_->CreateDepthStencilState(pDepthStencilDesc, ppDepthStencilState);
}
     
HRESULT base_ID3D11Device::CreateRasterizerState(D3D11_RASTERIZER_DESC const* pRasterizerDesc, ID3D11RasterizerState** ppRasterizerState)
{
    return impl_->CreateRasterizerState(pRasterizerDesc, ppRasterizerState);
}
     
HRESULT base_ID3D11Device::CreateSamplerState(D3D11_SAMPLER_DESC const* pSamplerDesc, ID3D11SamplerState** ppSamplerState)
{
    return impl_->CreateSamplerState(pSamplerDesc, ppSamplerState);
}
     
HRESULT base_ID3D11Device::CreateQuery(D3D11_QUERY_DESC const* pQueryDesc, ID3D11Query** ppQuery)
{
    return impl_->CreateQuery(pQueryDesc, ppQuery);
}
     
HRESULT base_ID3D11Device::CreatePredicate(D3D11_QUERY_DESC const* pPredicateDesc, ID3D11Predicate** ppPredicate)
{
    return impl_->CreatePredicate(pPredicateDesc, ppPredicate);
}
     
HRESULT base_ID3D11Device::CreateCounter(D3D11_COUNTER_DESC const* pCounterDesc, ID3D11Counter** ppCounter)
{
    return impl_->CreateCounter(pCounterDesc, ppCounter);
}
     
HRESULT base_ID3D11Device::CreateDeferredContext(UINT ContextFlags, ID3D11DeviceContext** ppDeferredContext)
{
    return impl_->CreateDeferredContext(ContextFlags, ppDeferredContext);
}
     
HRESULT base_ID3D11Device::OpenSharedResource(HANDLE hResource, REFIID ReturnedInterface, void** ppResource)
{
    return impl_->OpenSharedResource(hResource, ReturnedInterface, ppResource);
}
     
HRESULT base_ID3D11Device::CheckFormatSupport(DXGI_FORMAT Format, UINT* pFormatSupport)
{
    return impl_->CheckFormatSupport(Format, pFormatSupport);
}
     
HRESULT base_ID3D11Device::CheckMultisampleQualityLevels(DXGI_FORMAT Format, UINT SampleCount, UINT* pNumQualityLevels)
{
    return impl_->CheckMultisampleQualityLevels(Format, SampleCount, pNumQualityLevels);
}
     
void base_ID3D11Device::CheckCounterInfo(D3D11_COUNTER_INFO* pCounterInfo)
{
    return impl_->CheckCounterInfo(pCounterInfo);
}
     
HRESULT base_ID3D11Device::CheckCounter(D3D11_COUNTER_DESC const* pDesc, D3D11_COUNTER_TYPE* pType, UINT* pActiveCounters, LPSTR szName, UINT* pNameLength, LPSTR szUnits, UINT* pUnitsLength, LPSTR szDescription, UINT* pDescriptionLength)
{
    return impl_->CheckCounter(pDesc, pType, pActiveCounters, szName, pNameLength, szUnits, pUnitsLength, szDescription, pDescriptionLength);
}
     
HRESULT base_ID3D11Device::CheckFeatureSupport(D3D11_FEATURE Feature, void* pFeatureSupportData, UINT FeatureSupportDataSize)
{
    return impl_->CheckFeatureSupport(Feature, pFeatureSupportData, FeatureSupportDataSize);
}
     
HRESULT base_ID3D11Device::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11Device::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11Device::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_->SetPrivateDataInterface(guid, pData);
}
     
D3D_FEATURE_LEVEL base_ID3D11Device::GetFeatureLevel()
{
    return impl_->GetFeatureLevel();
}
     
UINT base_ID3D11Device::GetCreationFlags()
{
    return impl_->GetCreationFlags();
}
     
HRESULT base_ID3D11Device::GetDeviceRemovedReason()
{
    return impl_->GetDeviceRemovedReason();
}
     
void base_ID3D11Device::GetImmediateContext(ID3D11DeviceContext** ppImmediateContext)
{
    return impl_->GetImmediateContext(ppImmediateContext);
}
     
HRESULT base_ID3D11Device::SetExceptionMode(UINT RaiseFlags)
{
    return impl_->SetExceptionMode(RaiseFlags);
}
     
UINT base_ID3D11Device::GetExceptionMode()
{
    return impl_->GetExceptionMode();
}
     

HRESULT base_ID3D11Device::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_IUnknown::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11Device::AddRef()
{
    return impl_IUnknown::AddRef();
}
     
ULONG base_ID3D11Device::Release()
{
    return impl_IUnknown::Release();
}
     

ID3D11Device *base_ID3D11Device::impl() const
{
    return impl_;
}
      
