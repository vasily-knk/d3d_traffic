#pragma once

struct base_ID3D10Device
    : ID3D10Device
{
    explicit base_ID3D10Device(ID3D10Device *impl);
    virtual ~base_ID3D10Device() {}

    void STDMETHODCALLTYPE VSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D10Buffer* const* ppConstantBuffers) override;
    void STDMETHODCALLTYPE PSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView* const* ppShaderResourceViews) override;
    void STDMETHODCALLTYPE PSSetShader(ID3D10PixelShader* pPixelShader) override;
    void STDMETHODCALLTYPE PSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D10SamplerState* const* ppSamplers) override;
    void STDMETHODCALLTYPE VSSetShader(ID3D10VertexShader* pVertexShader) override;
    void STDMETHODCALLTYPE DrawIndexed(UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation) override;
    void STDMETHODCALLTYPE Draw(UINT VertexCount, UINT StartVertexLocation) override;
    void STDMETHODCALLTYPE PSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D10Buffer* const* ppConstantBuffers) override;
    void STDMETHODCALLTYPE IASetInputLayout(ID3D10InputLayout* pInputLayout) override;
    void STDMETHODCALLTYPE IASetVertexBuffers(UINT StartSlot, UINT NumBuffers, ID3D10Buffer* const* ppVertexBuffers, UINT const* pStrides, UINT const* pOffsets) override;
    void STDMETHODCALLTYPE IASetIndexBuffer(ID3D10Buffer* pIndexBuffer, DXGI_FORMAT Format, UINT Offset) override;
    void STDMETHODCALLTYPE DrawIndexedInstanced(UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation) override;
    void STDMETHODCALLTYPE DrawInstanced(UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation) override;
    void STDMETHODCALLTYPE GSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D10Buffer* const* ppConstantBuffers) override;
    void STDMETHODCALLTYPE GSSetShader(ID3D10GeometryShader* pShader) override;
    void STDMETHODCALLTYPE IASetPrimitiveTopology(D3D10_PRIMITIVE_TOPOLOGY Topology) override;
    void STDMETHODCALLTYPE VSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView* const* ppShaderResourceViews) override;
    void STDMETHODCALLTYPE VSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D10SamplerState* const* ppSamplers) override;
    void STDMETHODCALLTYPE SetPredication(ID3D10Predicate* pPredicate, BOOL PredicateValue) override;
    void STDMETHODCALLTYPE GSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView* const* ppShaderResourceViews) override;
    void STDMETHODCALLTYPE GSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D10SamplerState* const* ppSamplers) override;
    void STDMETHODCALLTYPE OMSetRenderTargets(UINT NumViews, ID3D10RenderTargetView* const* ppRenderTargetViews, ID3D10DepthStencilView* pDepthStencilView) override;
    void STDMETHODCALLTYPE OMSetBlendState(ID3D10BlendState* pBlendState, FLOAT const BlendFactor[4], UINT SampleMask) override;
    void STDMETHODCALLTYPE OMSetDepthStencilState(ID3D10DepthStencilState* pDepthStencilState, UINT StencilRef) override;
    void STDMETHODCALLTYPE SOSetTargets(UINT NumBuffers, ID3D10Buffer* const* ppSOTargets, UINT const* pOffsets) override;
    void STDMETHODCALLTYPE DrawAuto() override;
    void STDMETHODCALLTYPE RSSetState(ID3D10RasterizerState* pRasterizerState) override;
    void STDMETHODCALLTYPE RSSetViewports(UINT NumViewports, D3D10_VIEWPORT const* pViewports) override;
    void STDMETHODCALLTYPE RSSetScissorRects(UINT NumRects, D3D10_RECT const* pRects) override;
    void STDMETHODCALLTYPE CopySubresourceRegion(ID3D10Resource* pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D10Resource* pSrcResource, UINT SrcSubresource, D3D10_BOX const* pSrcBox) override;
    void STDMETHODCALLTYPE CopyResource(ID3D10Resource* pDstResource, ID3D10Resource* pSrcResource) override;
    void STDMETHODCALLTYPE UpdateSubresource(ID3D10Resource* pDstResource, UINT DstSubresource, D3D10_BOX const* pDstBox, void const* pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch) override;
    void STDMETHODCALLTYPE ClearRenderTargetView(ID3D10RenderTargetView* pRenderTargetView, FLOAT const ColorRGBA[4]) override;
    void STDMETHODCALLTYPE ClearDepthStencilView(ID3D10DepthStencilView* pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil) override;
    void STDMETHODCALLTYPE GenerateMips(ID3D10ShaderResourceView* pShaderResourceView) override;
    void STDMETHODCALLTYPE ResolveSubresource(ID3D10Resource* pDstResource, UINT DstSubresource, ID3D10Resource* pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format) override;
    void STDMETHODCALLTYPE VSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D10Buffer** ppConstantBuffers) override;
    void STDMETHODCALLTYPE PSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView** ppShaderResourceViews) override;
    void STDMETHODCALLTYPE PSGetShader(ID3D10PixelShader** ppPixelShader) override;
    void STDMETHODCALLTYPE PSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D10SamplerState** ppSamplers) override;
    void STDMETHODCALLTYPE VSGetShader(ID3D10VertexShader** ppVertexShader) override;
    void STDMETHODCALLTYPE PSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D10Buffer** ppConstantBuffers) override;
    void STDMETHODCALLTYPE IAGetInputLayout(ID3D10InputLayout** ppInputLayout) override;
    void STDMETHODCALLTYPE IAGetVertexBuffers(UINT StartSlot, UINT NumBuffers, ID3D10Buffer** ppVertexBuffers, UINT* pStrides, UINT* pOffsets) override;
    void STDMETHODCALLTYPE IAGetIndexBuffer(ID3D10Buffer** pIndexBuffer, DXGI_FORMAT* Format, UINT* Offset) override;
    void STDMETHODCALLTYPE GSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D10Buffer** ppConstantBuffers) override;
    void STDMETHODCALLTYPE GSGetShader(ID3D10GeometryShader** ppGeometryShader) override;
    void STDMETHODCALLTYPE IAGetPrimitiveTopology(D3D10_PRIMITIVE_TOPOLOGY* pTopology) override;
    void STDMETHODCALLTYPE VSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView** ppShaderResourceViews) override;
    void STDMETHODCALLTYPE VSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D10SamplerState** ppSamplers) override;
    void STDMETHODCALLTYPE GetPredication(ID3D10Predicate** ppPredicate, BOOL* pPredicateValue) override;
    void STDMETHODCALLTYPE GSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView** ppShaderResourceViews) override;
    void STDMETHODCALLTYPE GSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D10SamplerState** ppSamplers) override;
    void STDMETHODCALLTYPE OMGetRenderTargets(UINT NumViews, ID3D10RenderTargetView** ppRenderTargetViews, ID3D10DepthStencilView** ppDepthStencilView) override;
    void STDMETHODCALLTYPE OMGetBlendState(ID3D10BlendState** ppBlendState, FLOAT BlendFactor[4], UINT* pSampleMask) override;
    void STDMETHODCALLTYPE OMGetDepthStencilState(ID3D10DepthStencilState** ppDepthStencilState, UINT* pStencilRef) override;
    void STDMETHODCALLTYPE SOGetTargets(UINT NumBuffers, ID3D10Buffer** ppSOTargets, UINT* pOffsets) override;
    void STDMETHODCALLTYPE RSGetState(ID3D10RasterizerState** ppRasterizerState) override;
    void STDMETHODCALLTYPE RSGetViewports(UINT* NumViewports, D3D10_VIEWPORT* pViewports) override;
    void STDMETHODCALLTYPE RSGetScissorRects(UINT* NumRects, D3D10_RECT* pRects) override;
    HRESULT STDMETHODCALLTYPE GetDeviceRemovedReason() override;
    HRESULT STDMETHODCALLTYPE SetExceptionMode(UINT RaiseFlags) override;
    UINT STDMETHODCALLTYPE GetExceptionMode() override;
    HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, void const* pData) override;
    HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, IUnknown const* pData) override;
    void STDMETHODCALLTYPE ClearState() override;
    void STDMETHODCALLTYPE Flush() override;
    HRESULT STDMETHODCALLTYPE CreateBuffer(D3D10_BUFFER_DESC const* pDesc, D3D10_SUBRESOURCE_DATA const* pInitialData, ID3D10Buffer** ppBuffer) override;
    HRESULT STDMETHODCALLTYPE CreateTexture1D(D3D10_TEXTURE1D_DESC const* pDesc, D3D10_SUBRESOURCE_DATA const* pInitialData, ID3D10Texture1D** ppTexture1D) override;
    HRESULT STDMETHODCALLTYPE CreateTexture2D(D3D10_TEXTURE2D_DESC const* pDesc, D3D10_SUBRESOURCE_DATA const* pInitialData, ID3D10Texture2D** ppTexture2D) override;
    HRESULT STDMETHODCALLTYPE CreateTexture3D(D3D10_TEXTURE3D_DESC const* pDesc, D3D10_SUBRESOURCE_DATA const* pInitialData, ID3D10Texture3D** ppTexture3D) override;
    HRESULT STDMETHODCALLTYPE CreateShaderResourceView(ID3D10Resource* pResource, D3D10_SHADER_RESOURCE_VIEW_DESC const* pDesc, ID3D10ShaderResourceView** ppSRView) override;
    HRESULT STDMETHODCALLTYPE CreateRenderTargetView(ID3D10Resource* pResource, D3D10_RENDER_TARGET_VIEW_DESC const* pDesc, ID3D10RenderTargetView** ppRTView) override;
    HRESULT STDMETHODCALLTYPE CreateDepthStencilView(ID3D10Resource* pResource, D3D10_DEPTH_STENCIL_VIEW_DESC const* pDesc, ID3D10DepthStencilView** ppDepthStencilView) override;
    HRESULT STDMETHODCALLTYPE CreateInputLayout(D3D10_INPUT_ELEMENT_DESC const* pInputElementDescs, UINT NumElements, void const* pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D10InputLayout** ppInputLayout) override;
    HRESULT STDMETHODCALLTYPE CreateVertexShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D10VertexShader** ppVertexShader) override;
    HRESULT STDMETHODCALLTYPE CreateGeometryShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D10GeometryShader** ppGeometryShader) override;
    HRESULT STDMETHODCALLTYPE CreateGeometryShaderWithStreamOutput(void const* pShaderBytecode, SIZE_T BytecodeLength, D3D10_SO_DECLARATION_ENTRY const* pSODeclaration, UINT NumEntries, UINT OutputStreamStride, ID3D10GeometryShader** ppGeometryShader) override;
    HRESULT STDMETHODCALLTYPE CreatePixelShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D10PixelShader** ppPixelShader) override;
    HRESULT STDMETHODCALLTYPE CreateBlendState(D3D10_BLEND_DESC const* pBlendStateDesc, ID3D10BlendState** ppBlendState) override;
    HRESULT STDMETHODCALLTYPE CreateDepthStencilState(D3D10_DEPTH_STENCIL_DESC const* pDepthStencilDesc, ID3D10DepthStencilState** ppDepthStencilState) override;
    HRESULT STDMETHODCALLTYPE CreateRasterizerState(D3D10_RASTERIZER_DESC const* pRasterizerDesc, ID3D10RasterizerState** ppRasterizerState) override;
    HRESULT STDMETHODCALLTYPE CreateSamplerState(D3D10_SAMPLER_DESC const* pSamplerDesc, ID3D10SamplerState** ppSamplerState) override;
    HRESULT STDMETHODCALLTYPE CreateQuery(D3D10_QUERY_DESC const* pQueryDesc, ID3D10Query** ppQuery) override;
    HRESULT STDMETHODCALLTYPE CreatePredicate(D3D10_QUERY_DESC const* pPredicateDesc, ID3D10Predicate** ppPredicate) override;
    HRESULT STDMETHODCALLTYPE CreateCounter(D3D10_COUNTER_DESC const* pCounterDesc, ID3D10Counter** ppCounter) override;
    HRESULT STDMETHODCALLTYPE CheckFormatSupport(DXGI_FORMAT Format, UINT* pFormatSupport) override;
    HRESULT STDMETHODCALLTYPE CheckMultisampleQualityLevels(DXGI_FORMAT Format, UINT SampleCount, UINT* pNumQualityLevels) override;
    void STDMETHODCALLTYPE CheckCounterInfo(D3D10_COUNTER_INFO* pCounterInfo) override;
    HRESULT STDMETHODCALLTYPE CheckCounter(D3D10_COUNTER_DESC const* pDesc, D3D10_COUNTER_TYPE* pType, UINT* pActiveCounters, LPSTR szName, UINT* pNameLength, LPSTR szUnits, UINT* pUnitsLength, LPSTR szDescription, UINT* pDescriptionLength) override;
    UINT STDMETHODCALLTYPE GetCreationFlags() override;
    HRESULT STDMETHODCALLTYPE OpenSharedResource(HANDLE hResource, REFIID ReturnedInterface, void** ppResource) override;
    void STDMETHODCALLTYPE SetTextFilterSize(UINT Width, UINT Height) override;
    void STDMETHODCALLTYPE GetTextFilterSize(UINT* pWidth, UINT* pHeight) override;

    // parent methods
public:
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject) override;
    ULONG STDMETHODCALLTYPE AddRef() override;
    ULONG STDMETHODCALLTYPE Release() override;

public:
    ID3D10Device *impl() const;

private:
    ID3D10Device *impl_;
    unique_ptr<IUnknown> parent_base_;
};
      