#pragma once

#include "impl_IUnknown.h"

struct base_ID3D11Device
    : impl_IUnknown
    , ID3D11Device
{
    explicit base_ID3D11Device(ID3D11Device *impl);

    HRESULT STDMETHODCALLTYPE CreateBuffer(D3D11_BUFFER_DESC const* pDesc, D3D11_SUBRESOURCE_DATA const* pInitialData, ID3D11Buffer** ppBuffer) override;
    HRESULT STDMETHODCALLTYPE CreateTexture1D(D3D11_TEXTURE1D_DESC const* pDesc, D3D11_SUBRESOURCE_DATA const* pInitialData, ID3D11Texture1D** ppTexture1D) override;
    HRESULT STDMETHODCALLTYPE CreateTexture2D(D3D11_TEXTURE2D_DESC const* pDesc, D3D11_SUBRESOURCE_DATA const* pInitialData, ID3D11Texture2D** ppTexture2D) override;
    HRESULT STDMETHODCALLTYPE CreateTexture3D(D3D11_TEXTURE3D_DESC const* pDesc, D3D11_SUBRESOURCE_DATA const* pInitialData, ID3D11Texture3D** ppTexture3D) override;
    HRESULT STDMETHODCALLTYPE CreateShaderResourceView(ID3D11Resource* pResource, D3D11_SHADER_RESOURCE_VIEW_DESC const* pDesc, ID3D11ShaderResourceView** ppSRView) override;
    HRESULT STDMETHODCALLTYPE CreateUnorderedAccessView(ID3D11Resource* pResource, D3D11_UNORDERED_ACCESS_VIEW_DESC const* pDesc, ID3D11UnorderedAccessView** ppUAView) override;
    HRESULT STDMETHODCALLTYPE CreateRenderTargetView(ID3D11Resource* pResource, D3D11_RENDER_TARGET_VIEW_DESC const* pDesc, ID3D11RenderTargetView** ppRTView) override;
    HRESULT STDMETHODCALLTYPE CreateDepthStencilView(ID3D11Resource* pResource, D3D11_DEPTH_STENCIL_VIEW_DESC const* pDesc, ID3D11DepthStencilView** ppDepthStencilView) override;
    HRESULT STDMETHODCALLTYPE CreateInputLayout(D3D11_INPUT_ELEMENT_DESC const* pInputElementDescs, UINT NumElements, void const* pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout** ppInputLayout) override;
    HRESULT STDMETHODCALLTYPE CreateVertexShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11VertexShader** ppVertexShader) override;
    HRESULT STDMETHODCALLTYPE CreateGeometryShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11GeometryShader** ppGeometryShader) override;
    HRESULT STDMETHODCALLTYPE CreateGeometryShaderWithStreamOutput(void const* pShaderBytecode, SIZE_T BytecodeLength, D3D11_SO_DECLARATION_ENTRY const* pSODeclaration, UINT NumEntries, UINT const* pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage* pClassLinkage, ID3D11GeometryShader** ppGeometryShader) override;
    HRESULT STDMETHODCALLTYPE CreatePixelShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11PixelShader** ppPixelShader) override;
    HRESULT STDMETHODCALLTYPE CreateHullShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11HullShader** ppHullShader) override;
    HRESULT STDMETHODCALLTYPE CreateDomainShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11DomainShader** ppDomainShader) override;
    HRESULT STDMETHODCALLTYPE CreateComputeShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11ComputeShader** ppComputeShader) override;
    HRESULT STDMETHODCALLTYPE CreateClassLinkage(ID3D11ClassLinkage** ppLinkage) override;
    HRESULT STDMETHODCALLTYPE CreateBlendState(D3D11_BLEND_DESC const* pBlendStateDesc, ID3D11BlendState** ppBlendState) override;
    HRESULT STDMETHODCALLTYPE CreateDepthStencilState(D3D11_DEPTH_STENCIL_DESC const* pDepthStencilDesc, ID3D11DepthStencilState** ppDepthStencilState) override;
    HRESULT STDMETHODCALLTYPE CreateRasterizerState(D3D11_RASTERIZER_DESC const* pRasterizerDesc, ID3D11RasterizerState** ppRasterizerState) override;
    HRESULT STDMETHODCALLTYPE CreateSamplerState(D3D11_SAMPLER_DESC const* pSamplerDesc, ID3D11SamplerState** ppSamplerState) override;
    HRESULT STDMETHODCALLTYPE CreateQuery(D3D11_QUERY_DESC const* pQueryDesc, ID3D11Query** ppQuery) override;
    HRESULT STDMETHODCALLTYPE CreatePredicate(D3D11_QUERY_DESC const* pPredicateDesc, ID3D11Predicate** ppPredicate) override;
    HRESULT STDMETHODCALLTYPE CreateCounter(D3D11_COUNTER_DESC const* pCounterDesc, ID3D11Counter** ppCounter) override;
    HRESULT STDMETHODCALLTYPE CreateDeferredContext(UINT ContextFlags, ID3D11DeviceContext** ppDeferredContext) override;
    HRESULT STDMETHODCALLTYPE OpenSharedResource(HANDLE hResource, REFIID ReturnedInterface, void** ppResource) override;
    HRESULT STDMETHODCALLTYPE CheckFormatSupport(DXGI_FORMAT Format, UINT* pFormatSupport) override;
    HRESULT STDMETHODCALLTYPE CheckMultisampleQualityLevels(DXGI_FORMAT Format, UINT SampleCount, UINT* pNumQualityLevels) override;
    void STDMETHODCALLTYPE CheckCounterInfo(D3D11_COUNTER_INFO* pCounterInfo) override;
    HRESULT STDMETHODCALLTYPE CheckCounter(D3D11_COUNTER_DESC const* pDesc, D3D11_COUNTER_TYPE* pType, UINT* pActiveCounters, LPSTR szName, UINT* pNameLength, LPSTR szUnits, UINT* pUnitsLength, LPSTR szDescription, UINT* pDescriptionLength) override;
    HRESULT STDMETHODCALLTYPE CheckFeatureSupport(D3D11_FEATURE Feature, void* pFeatureSupportData, UINT FeatureSupportDataSize) override;
    HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, void const* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, IUnknown const* pData) override;
    D3D_FEATURE_LEVEL STDMETHODCALLTYPE GetFeatureLevel() override;
    UINT STDMETHODCALLTYPE GetCreationFlags() override;
    HRESULT STDMETHODCALLTYPE GetDeviceRemovedReason() override;
    void STDMETHODCALLTYPE GetImmediateContext(ID3D11DeviceContext** ppImmediateContext) override;
    HRESULT STDMETHODCALLTYPE SetExceptionMode(UINT RaiseFlags) override;
    UINT STDMETHODCALLTYPE GetExceptionMode() override;

    // parent methods
public:
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

public:
    ID3D11Device *impl() const;

private:
    ID3D11Device *impl_;
};
      