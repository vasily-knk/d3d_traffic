#include "stdafx.h"

#include "base_ID3D10Device.h"
#include "../wrappers.h"

ID3D10Device *unwrap_inner(ID3D10Device *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D10Device *>(wrapper);
    return cast_wrapper->impl();
}

base_ID3D10Device::base_ID3D10Device(ID3D10Device *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<IUnknown>(impl))
{

}

void base_ID3D10Device::VSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D10Buffer* const* ppConstantBuffers)
{
    auto ppConstantBuffers_unwrapped = unwrap_array(ppConstantBuffers, NumBuffers); ppConstantBuffers = ppConstantBuffers_unwrapped.data();
    impl_->VSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    
    
}
     
void base_ID3D10Device::PSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView* const* ppShaderResourceViews)
{
    auto ppShaderResourceViews_unwrapped = unwrap_array(ppShaderResourceViews, NumViews); ppShaderResourceViews = ppShaderResourceViews_unwrapped.data();
    impl_->PSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    
    
}
     
void base_ID3D10Device::PSSetShader(ID3D10PixelShader* pPixelShader)
{
    pPixelShader = unwrap(pPixelShader);
    impl_->PSSetShader(pPixelShader);
    
    
}
     
void base_ID3D10Device::PSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D10SamplerState* const* ppSamplers)
{
    auto ppSamplers_unwrapped = unwrap_array(ppSamplers, NumSamplers); ppSamplers = ppSamplers_unwrapped.data();
    impl_->PSSetSamplers(StartSlot, NumSamplers, ppSamplers);
    
    
}
     
void base_ID3D10Device::VSSetShader(ID3D10VertexShader* pVertexShader)
{
    pVertexShader = unwrap(pVertexShader);
    impl_->VSSetShader(pVertexShader);
    
    
}
     
void base_ID3D10Device::DrawIndexed(UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation)
{
    
    impl_->DrawIndexed(IndexCount, StartIndexLocation, BaseVertexLocation);
    
    
}
     
void base_ID3D10Device::Draw(UINT VertexCount, UINT StartVertexLocation)
{
    
    impl_->Draw(VertexCount, StartVertexLocation);
    
    
}
     
void base_ID3D10Device::PSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D10Buffer* const* ppConstantBuffers)
{
    auto ppConstantBuffers_unwrapped = unwrap_array(ppConstantBuffers, NumBuffers); ppConstantBuffers = ppConstantBuffers_unwrapped.data();
    impl_->PSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    
    
}
     
void base_ID3D10Device::IASetInputLayout(ID3D10InputLayout* pInputLayout)
{
    pInputLayout = unwrap(pInputLayout);
    impl_->IASetInputLayout(pInputLayout);
    
    
}
     
void base_ID3D10Device::IASetVertexBuffers(UINT StartSlot, UINT NumBuffers, ID3D10Buffer* const* ppVertexBuffers, UINT const* pStrides, UINT const* pOffsets)
{
    auto ppVertexBuffers_unwrapped = unwrap_array(ppVertexBuffers, NumBuffers); ppVertexBuffers = ppVertexBuffers_unwrapped.data();
    impl_->IASetVertexBuffers(StartSlot, NumBuffers, ppVertexBuffers, pStrides, pOffsets);
    
    
}
     
void base_ID3D10Device::IASetIndexBuffer(ID3D10Buffer* pIndexBuffer, DXGI_FORMAT Format, UINT Offset)
{
    pIndexBuffer = unwrap(pIndexBuffer);
    impl_->IASetIndexBuffer(pIndexBuffer, Format, Offset);
    
    
}
     
void base_ID3D10Device::DrawIndexedInstanced(UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation)
{
    
    impl_->DrawIndexedInstanced(IndexCountPerInstance, InstanceCount, StartIndexLocation, BaseVertexLocation, StartInstanceLocation);
    
    
}
     
void base_ID3D10Device::DrawInstanced(UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation)
{
    
    impl_->DrawInstanced(VertexCountPerInstance, InstanceCount, StartVertexLocation, StartInstanceLocation);
    
    
}
     
void base_ID3D10Device::GSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D10Buffer* const* ppConstantBuffers)
{
    auto ppConstantBuffers_unwrapped = unwrap_array(ppConstantBuffers, NumBuffers); ppConstantBuffers = ppConstantBuffers_unwrapped.data();
    impl_->GSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    
    
}
     
void base_ID3D10Device::GSSetShader(ID3D10GeometryShader* pShader)
{
    pShader = unwrap(pShader);
    impl_->GSSetShader(pShader);
    
    
}
     
void base_ID3D10Device::IASetPrimitiveTopology(D3D10_PRIMITIVE_TOPOLOGY Topology)
{
    
    impl_->IASetPrimitiveTopology(Topology);
    
    
}
     
void base_ID3D10Device::VSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView* const* ppShaderResourceViews)
{
    auto ppShaderResourceViews_unwrapped = unwrap_array(ppShaderResourceViews, NumViews); ppShaderResourceViews = ppShaderResourceViews_unwrapped.data();
    impl_->VSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    
    
}
     
void base_ID3D10Device::VSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D10SamplerState* const* ppSamplers)
{
    auto ppSamplers_unwrapped = unwrap_array(ppSamplers, NumSamplers); ppSamplers = ppSamplers_unwrapped.data();
    impl_->VSSetSamplers(StartSlot, NumSamplers, ppSamplers);
    
    
}
     
void base_ID3D10Device::SetPredication(ID3D10Predicate* pPredicate, BOOL PredicateValue)
{
    pPredicate = unwrap(pPredicate);
    impl_->SetPredication(pPredicate, PredicateValue);
    
    
}
     
void base_ID3D10Device::GSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView* const* ppShaderResourceViews)
{
    auto ppShaderResourceViews_unwrapped = unwrap_array(ppShaderResourceViews, NumViews); ppShaderResourceViews = ppShaderResourceViews_unwrapped.data();
    impl_->GSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    
    
}
     
void base_ID3D10Device::GSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D10SamplerState* const* ppSamplers)
{
    auto ppSamplers_unwrapped = unwrap_array(ppSamplers, NumSamplers); ppSamplers = ppSamplers_unwrapped.data();
    impl_->GSSetSamplers(StartSlot, NumSamplers, ppSamplers);
    
    
}
     
void base_ID3D10Device::OMSetRenderTargets(UINT NumViews, ID3D10RenderTargetView* const* ppRenderTargetViews, ID3D10DepthStencilView* pDepthStencilView)
{
    auto ppRenderTargetViews_unwrapped = unwrap_array(ppRenderTargetViews, NumViews); ppRenderTargetViews = ppRenderTargetViews_unwrapped.data();
    pDepthStencilView = unwrap(pDepthStencilView);
    impl_->OMSetRenderTargets(NumViews, ppRenderTargetViews, pDepthStencilView);
    
    
}
     
void base_ID3D10Device::OMSetBlendState(ID3D10BlendState* pBlendState, FLOAT const BlendFactor[4], UINT SampleMask)
{
    pBlendState = unwrap(pBlendState);
    impl_->OMSetBlendState(pBlendState, BlendFactor, SampleMask);
    
    
}
     
void base_ID3D10Device::OMSetDepthStencilState(ID3D10DepthStencilState* pDepthStencilState, UINT StencilRef)
{
    pDepthStencilState = unwrap(pDepthStencilState);
    impl_->OMSetDepthStencilState(pDepthStencilState, StencilRef);
    
    
}
     
void base_ID3D10Device::SOSetTargets(UINT NumBuffers, ID3D10Buffer* const* ppSOTargets, UINT const* pOffsets)
{
    auto ppSOTargets_unwrapped = unwrap_array(ppSOTargets, NumBuffers); ppSOTargets = ppSOTargets_unwrapped.data();
    impl_->SOSetTargets(NumBuffers, ppSOTargets, pOffsets);
    
    
}
     
void base_ID3D10Device::DrawAuto()
{
    
    impl_->DrawAuto();
    
    
}
     
void base_ID3D10Device::RSSetState(ID3D10RasterizerState* pRasterizerState)
{
    pRasterizerState = unwrap(pRasterizerState);
    impl_->RSSetState(pRasterizerState);
    
    
}
     
void base_ID3D10Device::RSSetViewports(UINT NumViewports, D3D10_VIEWPORT const* pViewports)
{
    
    impl_->RSSetViewports(NumViewports, pViewports);
    
    
}
     
void base_ID3D10Device::RSSetScissorRects(UINT NumRects, D3D10_RECT const* pRects)
{
    
    impl_->RSSetScissorRects(NumRects, pRects);
    
    
}
     
void base_ID3D10Device::CopySubresourceRegion(ID3D10Resource* pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D10Resource* pSrcResource, UINT SrcSubresource, D3D10_BOX const* pSrcBox)
{
    pDstResource = unwrap(pDstResource);
    pSrcResource = unwrap(pSrcResource);
    impl_->CopySubresourceRegion(pDstResource, DstSubresource, DstX, DstY, DstZ, pSrcResource, SrcSubresource, pSrcBox);
    
    
}
     
void base_ID3D10Device::CopyResource(ID3D10Resource* pDstResource, ID3D10Resource* pSrcResource)
{
    pDstResource = unwrap(pDstResource);
    pSrcResource = unwrap(pSrcResource);
    impl_->CopyResource(pDstResource, pSrcResource);
    
    
}
     
void base_ID3D10Device::UpdateSubresource(ID3D10Resource* pDstResource, UINT DstSubresource, D3D10_BOX const* pDstBox, void const* pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch)
{
    pDstResource = unwrap(pDstResource);
    impl_->UpdateSubresource(pDstResource, DstSubresource, pDstBox, pSrcData, SrcRowPitch, SrcDepthPitch);
    
    
}
     
void base_ID3D10Device::ClearRenderTargetView(ID3D10RenderTargetView* pRenderTargetView, FLOAT const ColorRGBA[4])
{
    pRenderTargetView = unwrap(pRenderTargetView);
    impl_->ClearRenderTargetView(pRenderTargetView, ColorRGBA);
    
    
}
     
void base_ID3D10Device::ClearDepthStencilView(ID3D10DepthStencilView* pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil)
{
    pDepthStencilView = unwrap(pDepthStencilView);
    impl_->ClearDepthStencilView(pDepthStencilView, ClearFlags, Depth, Stencil);
    
    
}
     
void base_ID3D10Device::GenerateMips(ID3D10ShaderResourceView* pShaderResourceView)
{
    pShaderResourceView = unwrap(pShaderResourceView);
    impl_->GenerateMips(pShaderResourceView);
    
    
}
     
void base_ID3D10Device::ResolveSubresource(ID3D10Resource* pDstResource, UINT DstSubresource, ID3D10Resource* pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format)
{
    pDstResource = unwrap(pDstResource);
    pSrcResource = unwrap(pSrcResource);
    impl_->ResolveSubresource(pDstResource, DstSubresource, pSrcResource, SrcSubresource, Format);
    
    
}
     
void base_ID3D10Device::VSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D10Buffer** ppConstantBuffers)
{
    
    impl_->VSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    wrap_array(ppConstantBuffers, NumBuffers);
    
}
     
void base_ID3D10Device::PSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView** ppShaderResourceViews)
{
    
    impl_->PSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    wrap_array(ppShaderResourceViews, NumViews);
    
}
     
void base_ID3D10Device::PSGetShader(ID3D10PixelShader** ppPixelShader)
{
    
    impl_->PSGetShader(ppPixelShader);
    if (ppPixelShader != nullptr) *ppPixelShader = wrap(*ppPixelShader);
    
}
     
void base_ID3D10Device::PSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D10SamplerState** ppSamplers)
{
    
    impl_->PSGetSamplers(StartSlot, NumSamplers, ppSamplers);
    wrap_array(ppSamplers, NumSamplers);
    
}
     
void base_ID3D10Device::VSGetShader(ID3D10VertexShader** ppVertexShader)
{
    
    impl_->VSGetShader(ppVertexShader);
    if (ppVertexShader != nullptr) *ppVertexShader = wrap(*ppVertexShader);
    
}
     
void base_ID3D10Device::PSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D10Buffer** ppConstantBuffers)
{
    
    impl_->PSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    wrap_array(ppConstantBuffers, NumBuffers);
    
}
     
void base_ID3D10Device::IAGetInputLayout(ID3D10InputLayout** ppInputLayout)
{
    
    impl_->IAGetInputLayout(ppInputLayout);
    if (ppInputLayout != nullptr) *ppInputLayout = wrap(*ppInputLayout);
    
}
     
void base_ID3D10Device::IAGetVertexBuffers(UINT StartSlot, UINT NumBuffers, ID3D10Buffer** ppVertexBuffers, UINT* pStrides, UINT* pOffsets)
{
    
    impl_->IAGetVertexBuffers(StartSlot, NumBuffers, ppVertexBuffers, pStrides, pOffsets);
    wrap_array(ppVertexBuffers, NumBuffers);
    
}
     
void base_ID3D10Device::IAGetIndexBuffer(ID3D10Buffer** pIndexBuffer, DXGI_FORMAT* Format, UINT* Offset)
{
    
    impl_->IAGetIndexBuffer(pIndexBuffer, Format, Offset);
    if (pIndexBuffer != nullptr) *pIndexBuffer = wrap(*pIndexBuffer);
    
}
     
void base_ID3D10Device::GSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D10Buffer** ppConstantBuffers)
{
    
    impl_->GSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    wrap_array(ppConstantBuffers, NumBuffers);
    
}
     
void base_ID3D10Device::GSGetShader(ID3D10GeometryShader** ppGeometryShader)
{
    
    impl_->GSGetShader(ppGeometryShader);
    if (ppGeometryShader != nullptr) *ppGeometryShader = wrap(*ppGeometryShader);
    
}
     
void base_ID3D10Device::IAGetPrimitiveTopology(D3D10_PRIMITIVE_TOPOLOGY* pTopology)
{
    
    impl_->IAGetPrimitiveTopology(pTopology);
    
    
}
     
void base_ID3D10Device::VSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView** ppShaderResourceViews)
{
    
    impl_->VSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    wrap_array(ppShaderResourceViews, NumViews);
    
}
     
void base_ID3D10Device::VSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D10SamplerState** ppSamplers)
{
    
    impl_->VSGetSamplers(StartSlot, NumSamplers, ppSamplers);
    wrap_array(ppSamplers, NumSamplers);
    
}
     
void base_ID3D10Device::GetPredication(ID3D10Predicate** ppPredicate, BOOL* pPredicateValue)
{
    
    impl_->GetPredication(ppPredicate, pPredicateValue);
    if (ppPredicate != nullptr) *ppPredicate = wrap(*ppPredicate);
    
}
     
void base_ID3D10Device::GSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView** ppShaderResourceViews)
{
    
    impl_->GSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    wrap_array(ppShaderResourceViews, NumViews);
    
}
     
void base_ID3D10Device::GSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D10SamplerState** ppSamplers)
{
    
    impl_->GSGetSamplers(StartSlot, NumSamplers, ppSamplers);
    wrap_array(ppSamplers, NumSamplers);
    
}
     
void base_ID3D10Device::OMGetRenderTargets(UINT NumViews, ID3D10RenderTargetView** ppRenderTargetViews, ID3D10DepthStencilView** ppDepthStencilView)
{
    
    impl_->OMGetRenderTargets(NumViews, ppRenderTargetViews, ppDepthStencilView);
    wrap_array(ppRenderTargetViews, NumViews);
    if (ppDepthStencilView != nullptr) *ppDepthStencilView = wrap(*ppDepthStencilView);
    
}
     
void base_ID3D10Device::OMGetBlendState(ID3D10BlendState** ppBlendState, FLOAT BlendFactor[4], UINT* pSampleMask)
{
    
    impl_->OMGetBlendState(ppBlendState, BlendFactor, pSampleMask);
    if (ppBlendState != nullptr) *ppBlendState = wrap(*ppBlendState);
    
}
     
void base_ID3D10Device::OMGetDepthStencilState(ID3D10DepthStencilState** ppDepthStencilState, UINT* pStencilRef)
{
    
    impl_->OMGetDepthStencilState(ppDepthStencilState, pStencilRef);
    if (ppDepthStencilState != nullptr) *ppDepthStencilState = wrap(*ppDepthStencilState);
    
}
     
void base_ID3D10Device::SOGetTargets(UINT NumBuffers, ID3D10Buffer** ppSOTargets, UINT* pOffsets)
{
    
    impl_->SOGetTargets(NumBuffers, ppSOTargets, pOffsets);
    wrap_array(ppSOTargets, NumBuffers);
    
}
     
void base_ID3D10Device::RSGetState(ID3D10RasterizerState** ppRasterizerState)
{
    
    impl_->RSGetState(ppRasterizerState);
    if (ppRasterizerState != nullptr) *ppRasterizerState = wrap(*ppRasterizerState);
    
}
     
void base_ID3D10Device::RSGetViewports(UINT* NumViewports, D3D10_VIEWPORT* pViewports)
{
    
    impl_->RSGetViewports(NumViewports, pViewports);
    
    
}
     
void base_ID3D10Device::RSGetScissorRects(UINT* NumRects, D3D10_RECT* pRects)
{
    
    impl_->RSGetScissorRects(NumRects, pRects);
    
    
}
     
HRESULT base_ID3D10Device::GetDeviceRemovedReason()
{
    
    auto result_ = impl_->GetDeviceRemovedReason();
    
    return result_;
}
     
HRESULT base_ID3D10Device::SetExceptionMode(UINT RaiseFlags)
{
    
    auto result_ = impl_->SetExceptionMode(RaiseFlags);
    
    return result_;
}
     
UINT base_ID3D10Device::GetExceptionMode()
{
    
    auto result_ = impl_->GetExceptionMode();
    
    return result_;
}
     
HRESULT base_ID3D10Device::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    
    auto result_ = impl_->GetPrivateData(guid, pDataSize, pData);
    
    return result_;
}
     
HRESULT base_ID3D10Device::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    
    auto result_ = impl_->SetPrivateData(guid, DataSize, pData);
    
    return result_;
}
     
HRESULT base_ID3D10Device::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    pData = unwrap(pData);
    auto result_ = impl_->SetPrivateDataInterface(guid, pData);
    
    return result_;
}
     
void base_ID3D10Device::ClearState()
{
    
    impl_->ClearState();
    
    
}
     
void base_ID3D10Device::Flush()
{
    
    impl_->Flush();
    
    
}
     
HRESULT base_ID3D10Device::CreateBuffer(D3D10_BUFFER_DESC const* pDesc, D3D10_SUBRESOURCE_DATA const* pInitialData, ID3D10Buffer** ppBuffer)
{
    
    auto result_ = impl_->CreateBuffer(pDesc, pInitialData, ppBuffer);
    if (ppBuffer != nullptr) *ppBuffer = wrap(*ppBuffer);
    return result_;
}
     
HRESULT base_ID3D10Device::CreateTexture1D(D3D10_TEXTURE1D_DESC const* pDesc, D3D10_SUBRESOURCE_DATA const* pInitialData, ID3D10Texture1D** ppTexture1D)
{
    
    auto result_ = impl_->CreateTexture1D(pDesc, pInitialData, ppTexture1D);
    if (ppTexture1D != nullptr) *ppTexture1D = wrap(*ppTexture1D);
    return result_;
}
     
HRESULT base_ID3D10Device::CreateTexture2D(D3D10_TEXTURE2D_DESC const* pDesc, D3D10_SUBRESOURCE_DATA const* pInitialData, ID3D10Texture2D** ppTexture2D)
{
    
    auto result_ = impl_->CreateTexture2D(pDesc, pInitialData, ppTexture2D);
    if (ppTexture2D != nullptr) *ppTexture2D = wrap(*ppTexture2D);
    return result_;
}
     
HRESULT base_ID3D10Device::CreateTexture3D(D3D10_TEXTURE3D_DESC const* pDesc, D3D10_SUBRESOURCE_DATA const* pInitialData, ID3D10Texture3D** ppTexture3D)
{
    
    auto result_ = impl_->CreateTexture3D(pDesc, pInitialData, ppTexture3D);
    if (ppTexture3D != nullptr) *ppTexture3D = wrap(*ppTexture3D);
    return result_;
}
     
HRESULT base_ID3D10Device::CreateShaderResourceView(ID3D10Resource* pResource, D3D10_SHADER_RESOURCE_VIEW_DESC const* pDesc, ID3D10ShaderResourceView** ppSRView)
{
    pResource = unwrap(pResource);
    auto result_ = impl_->CreateShaderResourceView(pResource, pDesc, ppSRView);
    if (ppSRView != nullptr) *ppSRView = wrap(*ppSRView);
    return result_;
}
     
HRESULT base_ID3D10Device::CreateRenderTargetView(ID3D10Resource* pResource, D3D10_RENDER_TARGET_VIEW_DESC const* pDesc, ID3D10RenderTargetView** ppRTView)
{
    pResource = unwrap(pResource);
    auto result_ = impl_->CreateRenderTargetView(pResource, pDesc, ppRTView);
    if (ppRTView != nullptr) *ppRTView = wrap(*ppRTView);
    return result_;
}
     
HRESULT base_ID3D10Device::CreateDepthStencilView(ID3D10Resource* pResource, D3D10_DEPTH_STENCIL_VIEW_DESC const* pDesc, ID3D10DepthStencilView** ppDepthStencilView)
{
    pResource = unwrap(pResource);
    auto result_ = impl_->CreateDepthStencilView(pResource, pDesc, ppDepthStencilView);
    if (ppDepthStencilView != nullptr) *ppDepthStencilView = wrap(*ppDepthStencilView);
    return result_;
}
     
HRESULT base_ID3D10Device::CreateInputLayout(D3D10_INPUT_ELEMENT_DESC const* pInputElementDescs, UINT NumElements, void const* pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D10InputLayout** ppInputLayout)
{
    
    auto result_ = impl_->CreateInputLayout(pInputElementDescs, NumElements, pShaderBytecodeWithInputSignature, BytecodeLength, ppInputLayout);
    if (ppInputLayout != nullptr) *ppInputLayout = wrap(*ppInputLayout);
    return result_;
}
     
HRESULT base_ID3D10Device::CreateVertexShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D10VertexShader** ppVertexShader)
{
    
    auto result_ = impl_->CreateVertexShader(pShaderBytecode, BytecodeLength, ppVertexShader);
    if (ppVertexShader != nullptr) *ppVertexShader = wrap(*ppVertexShader);
    return result_;
}
     
HRESULT base_ID3D10Device::CreateGeometryShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D10GeometryShader** ppGeometryShader)
{
    
    auto result_ = impl_->CreateGeometryShader(pShaderBytecode, BytecodeLength, ppGeometryShader);
    if (ppGeometryShader != nullptr) *ppGeometryShader = wrap(*ppGeometryShader);
    return result_;
}
     
HRESULT base_ID3D10Device::CreateGeometryShaderWithStreamOutput(void const* pShaderBytecode, SIZE_T BytecodeLength, D3D10_SO_DECLARATION_ENTRY const* pSODeclaration, UINT NumEntries, UINT OutputStreamStride, ID3D10GeometryShader** ppGeometryShader)
{
    
    auto result_ = impl_->CreateGeometryShaderWithStreamOutput(pShaderBytecode, BytecodeLength, pSODeclaration, NumEntries, OutputStreamStride, ppGeometryShader);
    if (ppGeometryShader != nullptr) *ppGeometryShader = wrap(*ppGeometryShader);
    return result_;
}
     
HRESULT base_ID3D10Device::CreatePixelShader(void const* pShaderBytecode, SIZE_T BytecodeLength, ID3D10PixelShader** ppPixelShader)
{
    
    auto result_ = impl_->CreatePixelShader(pShaderBytecode, BytecodeLength, ppPixelShader);
    if (ppPixelShader != nullptr) *ppPixelShader = wrap(*ppPixelShader);
    return result_;
}
     
HRESULT base_ID3D10Device::CreateBlendState(D3D10_BLEND_DESC const* pBlendStateDesc, ID3D10BlendState** ppBlendState)
{
    
    auto result_ = impl_->CreateBlendState(pBlendStateDesc, ppBlendState);
    if (ppBlendState != nullptr) *ppBlendState = wrap(*ppBlendState);
    return result_;
}
     
HRESULT base_ID3D10Device::CreateDepthStencilState(D3D10_DEPTH_STENCIL_DESC const* pDepthStencilDesc, ID3D10DepthStencilState** ppDepthStencilState)
{
    
    auto result_ = impl_->CreateDepthStencilState(pDepthStencilDesc, ppDepthStencilState);
    if (ppDepthStencilState != nullptr) *ppDepthStencilState = wrap(*ppDepthStencilState);
    return result_;
}
     
HRESULT base_ID3D10Device::CreateRasterizerState(D3D10_RASTERIZER_DESC const* pRasterizerDesc, ID3D10RasterizerState** ppRasterizerState)
{
    
    auto result_ = impl_->CreateRasterizerState(pRasterizerDesc, ppRasterizerState);
    if (ppRasterizerState != nullptr) *ppRasterizerState = wrap(*ppRasterizerState);
    return result_;
}
     
HRESULT base_ID3D10Device::CreateSamplerState(D3D10_SAMPLER_DESC const* pSamplerDesc, ID3D10SamplerState** ppSamplerState)
{
    
    auto result_ = impl_->CreateSamplerState(pSamplerDesc, ppSamplerState);
    if (ppSamplerState != nullptr) *ppSamplerState = wrap(*ppSamplerState);
    return result_;
}
     
HRESULT base_ID3D10Device::CreateQuery(D3D10_QUERY_DESC const* pQueryDesc, ID3D10Query** ppQuery)
{
    
    auto result_ = impl_->CreateQuery(pQueryDesc, ppQuery);
    if (ppQuery != nullptr) *ppQuery = wrap(*ppQuery);
    return result_;
}
     
HRESULT base_ID3D10Device::CreatePredicate(D3D10_QUERY_DESC const* pPredicateDesc, ID3D10Predicate** ppPredicate)
{
    
    auto result_ = impl_->CreatePredicate(pPredicateDesc, ppPredicate);
    if (ppPredicate != nullptr) *ppPredicate = wrap(*ppPredicate);
    return result_;
}
     
HRESULT base_ID3D10Device::CreateCounter(D3D10_COUNTER_DESC const* pCounterDesc, ID3D10Counter** ppCounter)
{
    
    auto result_ = impl_->CreateCounter(pCounterDesc, ppCounter);
    if (ppCounter != nullptr) *ppCounter = wrap(*ppCounter);
    return result_;
}
     
HRESULT base_ID3D10Device::CheckFormatSupport(DXGI_FORMAT Format, UINT* pFormatSupport)
{
    
    auto result_ = impl_->CheckFormatSupport(Format, pFormatSupport);
    
    return result_;
}
     
HRESULT base_ID3D10Device::CheckMultisampleQualityLevels(DXGI_FORMAT Format, UINT SampleCount, UINT* pNumQualityLevels)
{
    
    auto result_ = impl_->CheckMultisampleQualityLevels(Format, SampleCount, pNumQualityLevels);
    
    return result_;
}
     
void base_ID3D10Device::CheckCounterInfo(D3D10_COUNTER_INFO* pCounterInfo)
{
    
    impl_->CheckCounterInfo(pCounterInfo);
    
    
}
     
HRESULT base_ID3D10Device::CheckCounter(D3D10_COUNTER_DESC const* pDesc, D3D10_COUNTER_TYPE* pType, UINT* pActiveCounters, LPSTR szName, UINT* pNameLength, LPSTR szUnits, UINT* pUnitsLength, LPSTR szDescription, UINT* pDescriptionLength)
{
    
    auto result_ = impl_->CheckCounter(pDesc, pType, pActiveCounters, szName, pNameLength, szUnits, pUnitsLength, szDescription, pDescriptionLength);
    
    return result_;
}
     
UINT base_ID3D10Device::GetCreationFlags()
{
    
    auto result_ = impl_->GetCreationFlags();
    
    return result_;
}
     
HRESULT base_ID3D10Device::OpenSharedResource(HANDLE hResource, REFIID ReturnedInterface, void** ppResource)
{
    
    auto result_ = impl_->OpenSharedResource(hResource, ReturnedInterface, ppResource);
    
    return result_;
}
     
void base_ID3D10Device::SetTextFilterSize(UINT Width, UINT Height)
{
    
    impl_->SetTextFilterSize(Width, Height);
    
    
}
     
void base_ID3D10Device::GetTextFilterSize(UINT* pWidth, UINT* pHeight)
{
    
    impl_->GetTextFilterSize(pWidth, pHeight);
    
    
}
     

HRESULT base_ID3D10Device::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D10Device::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D10Device::Release()
{
    return parent_base_->Release();
}
     

ID3D10Device *base_ID3D10Device::impl() const
{
    return impl_;
}
      
