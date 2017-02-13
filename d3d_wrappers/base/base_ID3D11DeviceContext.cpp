#include "stdafx.h"

#include "base_ID3D11DeviceContext.h"
#include "../wrappers.h"

ID3D11DeviceContext *unwrap_inner(ID3D11DeviceContext *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11DeviceContext *>(wrapper);
    return cast_wrapper->impl();
}

//ID3D11DeviceContext *create_wrapper_inner(ID3D11DeviceContext *impl)
//{
//    return new base_ID3D11DeviceContext(impl);
//}
       

base_ID3D11DeviceContext::base_ID3D11DeviceContext(ID3D11DeviceContext *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceChild>(impl))
{

}

void base_ID3D11DeviceContext::VSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    log_method("ID3D11DeviceContext", "VSSetConstantBuffers");
    auto ppConstantBuffers_unwrapped = unwrap_array(ppConstantBuffers, NumBuffers); ppConstantBuffers = ppConstantBuffers_unwrapped.data();
    impl_->VSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    
    
}
     
void base_ID3D11DeviceContext::PSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    log_method("ID3D11DeviceContext", "PSSetShaderResources");
    auto ppShaderResourceViews_unwrapped = unwrap_array(ppShaderResourceViews, NumViews); ppShaderResourceViews = ppShaderResourceViews_unwrapped.data();
    impl_->PSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    
    
}
     
void base_ID3D11DeviceContext::PSSetShader(ID3D11PixelShader* pPixelShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    log_method("ID3D11DeviceContext", "PSSetShader");
    pPixelShader = unwrap(pPixelShader);
    auto ppClassInstances_unwrapped = unwrap_array(ppClassInstances, NumClassInstances); ppClassInstances = ppClassInstances_unwrapped.data();
    impl_->PSSetShader(pPixelShader, ppClassInstances, NumClassInstances);
    
    
}
     
void base_ID3D11DeviceContext::PSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    log_method("ID3D11DeviceContext", "PSSetSamplers");
    auto ppSamplers_unwrapped = unwrap_array(ppSamplers, NumSamplers); ppSamplers = ppSamplers_unwrapped.data();
    impl_->PSSetSamplers(StartSlot, NumSamplers, ppSamplers);
    
    
}
     
void base_ID3D11DeviceContext::VSSetShader(ID3D11VertexShader* pVertexShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    log_method("ID3D11DeviceContext", "VSSetShader");
    pVertexShader = unwrap(pVertexShader);
    auto ppClassInstances_unwrapped = unwrap_array(ppClassInstances, NumClassInstances); ppClassInstances = ppClassInstances_unwrapped.data();
    impl_->VSSetShader(pVertexShader, ppClassInstances, NumClassInstances);
    
    
}
     
void base_ID3D11DeviceContext::DrawIndexed(UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation)
{
    log_method("ID3D11DeviceContext", "DrawIndexed");
    
    impl_->DrawIndexed(IndexCount, StartIndexLocation, BaseVertexLocation);
    
    
}
     
void base_ID3D11DeviceContext::Draw(UINT VertexCount, UINT StartVertexLocation)
{
    log_method("ID3D11DeviceContext", "Draw");
    
    impl_->Draw(VertexCount, StartVertexLocation);
    
    
}
     
HRESULT base_ID3D11DeviceContext::Map(ID3D11Resource* pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE* pMappedResource)
{
    log_method("ID3D11DeviceContext", "Map");
    pResource = unwrap(pResource);
    auto result_ = impl_->Map(pResource, Subresource, MapType, MapFlags, pMappedResource);
    
    return result_;
}
     
void base_ID3D11DeviceContext::Unmap(ID3D11Resource* pResource, UINT Subresource)
{
    log_method("ID3D11DeviceContext", "Unmap");
    pResource = unwrap(pResource);
    impl_->Unmap(pResource, Subresource);
    
    
}
     
void base_ID3D11DeviceContext::PSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    log_method("ID3D11DeviceContext", "PSSetConstantBuffers");
    auto ppConstantBuffers_unwrapped = unwrap_array(ppConstantBuffers, NumBuffers); ppConstantBuffers = ppConstantBuffers_unwrapped.data();
    impl_->PSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    
    
}
     
void base_ID3D11DeviceContext::IASetInputLayout(ID3D11InputLayout* pInputLayout)
{
    log_method("ID3D11DeviceContext", "IASetInputLayout");
    pInputLayout = unwrap(pInputLayout);
    impl_->IASetInputLayout(pInputLayout);
    
    
}
     
void base_ID3D11DeviceContext::IASetVertexBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppVertexBuffers, UINT const* pStrides, UINT const* pOffsets)
{
    log_method("ID3D11DeviceContext", "IASetVertexBuffers");
    auto ppVertexBuffers_unwrapped = unwrap_array(ppVertexBuffers, NumBuffers); ppVertexBuffers = ppVertexBuffers_unwrapped.data();
    impl_->IASetVertexBuffers(StartSlot, NumBuffers, ppVertexBuffers, pStrides, pOffsets);
    
    
}
     
void base_ID3D11DeviceContext::IASetIndexBuffer(ID3D11Buffer* pIndexBuffer, DXGI_FORMAT Format, UINT Offset)
{
    log_method("ID3D11DeviceContext", "IASetIndexBuffer");
    pIndexBuffer = unwrap(pIndexBuffer);
    impl_->IASetIndexBuffer(pIndexBuffer, Format, Offset);
    
    
}
     
void base_ID3D11DeviceContext::DrawIndexedInstanced(UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation)
{
    log_method("ID3D11DeviceContext", "DrawIndexedInstanced");
    
    impl_->DrawIndexedInstanced(IndexCountPerInstance, InstanceCount, StartIndexLocation, BaseVertexLocation, StartInstanceLocation);
    
    
}
     
void base_ID3D11DeviceContext::DrawInstanced(UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation)
{
    log_method("ID3D11DeviceContext", "DrawInstanced");
    
    impl_->DrawInstanced(VertexCountPerInstance, InstanceCount, StartVertexLocation, StartInstanceLocation);
    
    
}
     
void base_ID3D11DeviceContext::GSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    log_method("ID3D11DeviceContext", "GSSetConstantBuffers");
    auto ppConstantBuffers_unwrapped = unwrap_array(ppConstantBuffers, NumBuffers); ppConstantBuffers = ppConstantBuffers_unwrapped.data();
    impl_->GSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    
    
}
     
void base_ID3D11DeviceContext::GSSetShader(ID3D11GeometryShader* pShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    log_method("ID3D11DeviceContext", "GSSetShader");
    pShader = unwrap(pShader);
    auto ppClassInstances_unwrapped = unwrap_array(ppClassInstances, NumClassInstances); ppClassInstances = ppClassInstances_unwrapped.data();
    impl_->GSSetShader(pShader, ppClassInstances, NumClassInstances);
    
    
}
     
void base_ID3D11DeviceContext::IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY Topology)
{
    log_method("ID3D11DeviceContext", "IASetPrimitiveTopology");
    
    impl_->IASetPrimitiveTopology(Topology);
    
    
}
     
void base_ID3D11DeviceContext::VSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    log_method("ID3D11DeviceContext", "VSSetShaderResources");
    auto ppShaderResourceViews_unwrapped = unwrap_array(ppShaderResourceViews, NumViews); ppShaderResourceViews = ppShaderResourceViews_unwrapped.data();
    impl_->VSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    
    
}
     
void base_ID3D11DeviceContext::VSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    log_method("ID3D11DeviceContext", "VSSetSamplers");
    auto ppSamplers_unwrapped = unwrap_array(ppSamplers, NumSamplers); ppSamplers = ppSamplers_unwrapped.data();
    impl_->VSSetSamplers(StartSlot, NumSamplers, ppSamplers);
    
    
}
     
void base_ID3D11DeviceContext::Begin(ID3D11Asynchronous* pAsync)
{
    log_method("ID3D11DeviceContext", "Begin");
    pAsync = unwrap(pAsync);
    impl_->Begin(pAsync);
    
    
}
     
void base_ID3D11DeviceContext::End(ID3D11Asynchronous* pAsync)
{
    log_method("ID3D11DeviceContext", "End");
    pAsync = unwrap(pAsync);
    impl_->End(pAsync);
    
    
}
     
HRESULT base_ID3D11DeviceContext::GetData(ID3D11Asynchronous* pAsync, void* pData, UINT DataSize, UINT GetDataFlags)
{
    log_method("ID3D11DeviceContext", "GetData");
    pAsync = unwrap(pAsync);
    auto result_ = impl_->GetData(pAsync, pData, DataSize, GetDataFlags);
    
    return result_;
}
     
void base_ID3D11DeviceContext::SetPredication(ID3D11Predicate* pPredicate, BOOL PredicateValue)
{
    log_method("ID3D11DeviceContext", "SetPredication");
    pPredicate = unwrap(pPredicate);
    impl_->SetPredication(pPredicate, PredicateValue);
    
    
}
     
void base_ID3D11DeviceContext::GSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    log_method("ID3D11DeviceContext", "GSSetShaderResources");
    auto ppShaderResourceViews_unwrapped = unwrap_array(ppShaderResourceViews, NumViews); ppShaderResourceViews = ppShaderResourceViews_unwrapped.data();
    impl_->GSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    
    
}
     
void base_ID3D11DeviceContext::GSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    log_method("ID3D11DeviceContext", "GSSetSamplers");
    auto ppSamplers_unwrapped = unwrap_array(ppSamplers, NumSamplers); ppSamplers = ppSamplers_unwrapped.data();
    impl_->GSSetSamplers(StartSlot, NumSamplers, ppSamplers);
    
    
}
     
void base_ID3D11DeviceContext::OMSetRenderTargets(UINT NumViews, ID3D11RenderTargetView* const* ppRenderTargetViews, ID3D11DepthStencilView* pDepthStencilView)
{
    log_method("ID3D11DeviceContext", "OMSetRenderTargets");
    auto ppRenderTargetViews_unwrapped = unwrap_array(ppRenderTargetViews, NumViews); ppRenderTargetViews = ppRenderTargetViews_unwrapped.data();
    pDepthStencilView = unwrap(pDepthStencilView);
    impl_->OMSetRenderTargets(NumViews, ppRenderTargetViews, pDepthStencilView);
    
    
}
     
void base_ID3D11DeviceContext::OMSetRenderTargetsAndUnorderedAccessViews(UINT NumRTVs, ID3D11RenderTargetView* const* ppRenderTargetViews, ID3D11DepthStencilView* pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView* const* ppUnorderedAccessViews, UINT const* pUAVInitialCounts)
{
    log_method("ID3D11DeviceContext", "OMSetRenderTargetsAndUnorderedAccessViews");
    
    std::stringstream ss;
    ss << "NumRTVs: " << NumRTVs;

    log_message(ss.str());


    auto ppRenderTargetViews_unwrapped = unwrap_array(ppRenderTargetViews, NumRTVs); ppRenderTargetViews = ppRenderTargetViews_unwrapped.data();
    pDepthStencilView = unwrap(pDepthStencilView);
    auto ppUnorderedAccessViews_unwrapped = unwrap_array(ppUnorderedAccessViews, NumUAVs); ppUnorderedAccessViews = ppUnorderedAccessViews_unwrapped.data();
    impl_->OMSetRenderTargetsAndUnorderedAccessViews(NumRTVs, ppRenderTargetViews, pDepthStencilView, UAVStartSlot, NumUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
    
    
}
     
void base_ID3D11DeviceContext::OMSetBlendState(ID3D11BlendState* pBlendState, FLOAT const BlendFactor[4], UINT SampleMask)
{
    log_method("ID3D11DeviceContext", "OMSetBlendState");
    pBlendState = unwrap(pBlendState);
    impl_->OMSetBlendState(pBlendState, BlendFactor, SampleMask);
    
    
}
     
void base_ID3D11DeviceContext::OMSetDepthStencilState(ID3D11DepthStencilState* pDepthStencilState, UINT StencilRef)
{
    log_method("ID3D11DeviceContext", "OMSetDepthStencilState");
    pDepthStencilState = unwrap(pDepthStencilState);
    impl_->OMSetDepthStencilState(pDepthStencilState, StencilRef);
    
    
}
     
void base_ID3D11DeviceContext::SOSetTargets(UINT NumBuffers, ID3D11Buffer* const* ppSOTargets, UINT const* pOffsets)
{
    log_method("ID3D11DeviceContext", "SOSetTargets");
    auto ppSOTargets_unwrapped = unwrap_array(ppSOTargets, NumBuffers); ppSOTargets = ppSOTargets_unwrapped.data();
    impl_->SOSetTargets(NumBuffers, ppSOTargets, pOffsets);
    
    
}
     
void base_ID3D11DeviceContext::DrawAuto()
{
    log_method("ID3D11DeviceContext", "DrawAuto");
    
    impl_->DrawAuto();
    
    
}
     
void base_ID3D11DeviceContext::DrawIndexedInstancedIndirect(ID3D11Buffer* pBufferForArgs, UINT AlignedByteOffsetForArgs)
{
    log_method("ID3D11DeviceContext", "DrawIndexedInstancedIndirect");
    pBufferForArgs = unwrap(pBufferForArgs);
    impl_->DrawIndexedInstancedIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
    
    
}
     
void base_ID3D11DeviceContext::DrawInstancedIndirect(ID3D11Buffer* pBufferForArgs, UINT AlignedByteOffsetForArgs)
{
    log_method("ID3D11DeviceContext", "DrawInstancedIndirect");
    pBufferForArgs = unwrap(pBufferForArgs);
    impl_->DrawInstancedIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
    
    
}
     
void base_ID3D11DeviceContext::Dispatch(UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ)
{
    log_method("ID3D11DeviceContext", "Dispatch");
    
    impl_->Dispatch(ThreadGroupCountX, ThreadGroupCountY, ThreadGroupCountZ);
    
    
}
     
void base_ID3D11DeviceContext::DispatchIndirect(ID3D11Buffer* pBufferForArgs, UINT AlignedByteOffsetForArgs)
{
    log_method("ID3D11DeviceContext", "DispatchIndirect");
    pBufferForArgs = unwrap(pBufferForArgs);
    impl_->DispatchIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
    
    
}
     
void base_ID3D11DeviceContext::RSSetState(ID3D11RasterizerState* pRasterizerState)
{
    log_method("ID3D11DeviceContext", "RSSetState");
    pRasterizerState = unwrap(pRasterizerState);
    impl_->RSSetState(pRasterizerState);
    
    
}
     
void base_ID3D11DeviceContext::RSSetViewports(UINT NumViewports, D3D11_VIEWPORT const* pViewports)
{
    log_method("ID3D11DeviceContext", "RSSetViewports");
    
    impl_->RSSetViewports(NumViewports, pViewports);
    
    
}
     
void base_ID3D11DeviceContext::RSSetScissorRects(UINT NumRects, D3D11_RECT const* pRects)
{
    log_method("ID3D11DeviceContext", "RSSetScissorRects");
    
    impl_->RSSetScissorRects(NumRects, pRects);
    
    
}
     
void base_ID3D11DeviceContext::CopySubresourceRegion(ID3D11Resource* pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource* pSrcResource, UINT SrcSubresource, D3D11_BOX const* pSrcBox)
{
    log_method("ID3D11DeviceContext", "CopySubresourceRegion");
    pDstResource = unwrap(pDstResource);
    pSrcResource = unwrap(pSrcResource);
    impl_->CopySubresourceRegion(pDstResource, DstSubresource, DstX, DstY, DstZ, pSrcResource, SrcSubresource, pSrcBox);
    
    
}
     
void base_ID3D11DeviceContext::CopyResource(ID3D11Resource* pDstResource, ID3D11Resource* pSrcResource)
{
    log_method("ID3D11DeviceContext", "CopyResource");
    pDstResource = unwrap(pDstResource);
    pSrcResource = unwrap(pSrcResource);
    impl_->CopyResource(pDstResource, pSrcResource);
    
    
}
     
void base_ID3D11DeviceContext::UpdateSubresource(ID3D11Resource* pDstResource, UINT DstSubresource, D3D11_BOX const* pDstBox, void const* pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch)
{
    log_method("ID3D11DeviceContext", "UpdateSubresource");
    pDstResource = unwrap(pDstResource);
    impl_->UpdateSubresource(pDstResource, DstSubresource, pDstBox, pSrcData, SrcRowPitch, SrcDepthPitch);
    
    
}
     
void base_ID3D11DeviceContext::CopyStructureCount(ID3D11Buffer* pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView* pSrcView)
{
    log_method("ID3D11DeviceContext", "CopyStructureCount");
    pDstBuffer = unwrap(pDstBuffer);
    pSrcView = unwrap(pSrcView);
    impl_->CopyStructureCount(pDstBuffer, DstAlignedByteOffset, pSrcView);
    
    
}
     
void base_ID3D11DeviceContext::ClearRenderTargetView(ID3D11RenderTargetView* pRenderTargetView, FLOAT const ColorRGBA[4])
{
    log_method("ID3D11DeviceContext", "ClearRenderTargetView");
    pRenderTargetView = unwrap(pRenderTargetView);
    impl_->ClearRenderTargetView(pRenderTargetView, ColorRGBA);
    
    
}
     
void base_ID3D11DeviceContext::ClearUnorderedAccessViewUint(ID3D11UnorderedAccessView* pUnorderedAccessView, UINT const Values[4])
{
    log_method("ID3D11DeviceContext", "ClearUnorderedAccessViewUint");
    pUnorderedAccessView = unwrap(pUnorderedAccessView);
    impl_->ClearUnorderedAccessViewUint(pUnorderedAccessView, Values);
    
    
}
     
void base_ID3D11DeviceContext::ClearUnorderedAccessViewFloat(ID3D11UnorderedAccessView* pUnorderedAccessView, FLOAT const Values[4])
{
    log_method("ID3D11DeviceContext", "ClearUnorderedAccessViewFloat");
    pUnorderedAccessView = unwrap(pUnorderedAccessView);
    impl_->ClearUnorderedAccessViewFloat(pUnorderedAccessView, Values);
    
    
}
     
void base_ID3D11DeviceContext::ClearDepthStencilView(ID3D11DepthStencilView* pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil)
{
    log_method("ID3D11DeviceContext", "ClearDepthStencilView");
    pDepthStencilView = unwrap(pDepthStencilView);
    impl_->ClearDepthStencilView(pDepthStencilView, ClearFlags, Depth, Stencil);
    
    
}
     
void base_ID3D11DeviceContext::GenerateMips(ID3D11ShaderResourceView* pShaderResourceView)
{
    log_method("ID3D11DeviceContext", "GenerateMips");
    pShaderResourceView = unwrap(pShaderResourceView);
    impl_->GenerateMips(pShaderResourceView);
    
    
}
     
void base_ID3D11DeviceContext::SetResourceMinLOD(ID3D11Resource* pResource, FLOAT MinLOD)
{
    log_method("ID3D11DeviceContext", "SetResourceMinLOD");
    pResource = unwrap(pResource);
    impl_->SetResourceMinLOD(pResource, MinLOD);
    
    
}
     
FLOAT base_ID3D11DeviceContext::GetResourceMinLOD(ID3D11Resource* pResource)
{
    log_method("ID3D11DeviceContext", "GetResourceMinLOD");
    pResource = unwrap(pResource);
    auto result_ = impl_->GetResourceMinLOD(pResource);
    
    return result_;
}
     
void base_ID3D11DeviceContext::ResolveSubresource(ID3D11Resource* pDstResource, UINT DstSubresource, ID3D11Resource* pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format)
{
    log_method("ID3D11DeviceContext", "ResolveSubresource");
    pDstResource = unwrap(pDstResource);
    pSrcResource = unwrap(pSrcResource);
    impl_->ResolveSubresource(pDstResource, DstSubresource, pSrcResource, SrcSubresource, Format);
    
    
}
     
void base_ID3D11DeviceContext::ExecuteCommandList(ID3D11CommandList* pCommandList, BOOL RestoreContextState)
{
    log_method("ID3D11DeviceContext", "ExecuteCommandList");
    pCommandList = unwrap(pCommandList);
    impl_->ExecuteCommandList(pCommandList, RestoreContextState);
    
    
}
     
void base_ID3D11DeviceContext::HSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    log_method("ID3D11DeviceContext", "HSSetShaderResources");
    auto ppShaderResourceViews_unwrapped = unwrap_array(ppShaderResourceViews, NumViews); ppShaderResourceViews = ppShaderResourceViews_unwrapped.data();
    impl_->HSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    
    
}
     
void base_ID3D11DeviceContext::HSSetShader(ID3D11HullShader* pHullShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    log_method("ID3D11DeviceContext", "HSSetShader");
    pHullShader = unwrap(pHullShader);
    auto ppClassInstances_unwrapped = unwrap_array(ppClassInstances, NumClassInstances); ppClassInstances = ppClassInstances_unwrapped.data();
    impl_->HSSetShader(pHullShader, ppClassInstances, NumClassInstances);
    
    
}
     
void base_ID3D11DeviceContext::HSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    log_method("ID3D11DeviceContext", "HSSetSamplers");
    auto ppSamplers_unwrapped = unwrap_array(ppSamplers, NumSamplers); ppSamplers = ppSamplers_unwrapped.data();
    impl_->HSSetSamplers(StartSlot, NumSamplers, ppSamplers);
    
    
}
     
void base_ID3D11DeviceContext::HSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    log_method("ID3D11DeviceContext", "HSSetConstantBuffers");
    auto ppConstantBuffers_unwrapped = unwrap_array(ppConstantBuffers, NumBuffers); ppConstantBuffers = ppConstantBuffers_unwrapped.data();
    impl_->HSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    
    
}
     
void base_ID3D11DeviceContext::DSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    log_method("ID3D11DeviceContext", "DSSetShaderResources");
    auto ppShaderResourceViews_unwrapped = unwrap_array(ppShaderResourceViews, NumViews); ppShaderResourceViews = ppShaderResourceViews_unwrapped.data();
    impl_->DSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    
    
}
     
void base_ID3D11DeviceContext::DSSetShader(ID3D11DomainShader* pDomainShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    log_method("ID3D11DeviceContext", "DSSetShader");
    pDomainShader = unwrap(pDomainShader);
    auto ppClassInstances_unwrapped = unwrap_array(ppClassInstances, NumClassInstances); ppClassInstances = ppClassInstances_unwrapped.data();
    impl_->DSSetShader(pDomainShader, ppClassInstances, NumClassInstances);
    
    
}
     
void base_ID3D11DeviceContext::DSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    log_method("ID3D11DeviceContext", "DSSetSamplers");
    auto ppSamplers_unwrapped = unwrap_array(ppSamplers, NumSamplers); ppSamplers = ppSamplers_unwrapped.data();
    impl_->DSSetSamplers(StartSlot, NumSamplers, ppSamplers);
    
    
}
     
void base_ID3D11DeviceContext::DSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    log_method("ID3D11DeviceContext", "DSSetConstantBuffers");
    auto ppConstantBuffers_unwrapped = unwrap_array(ppConstantBuffers, NumBuffers); ppConstantBuffers = ppConstantBuffers_unwrapped.data();
    impl_->DSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    
    
}
     
void base_ID3D11DeviceContext::CSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    log_method("ID3D11DeviceContext", "CSSetShaderResources");
    auto ppShaderResourceViews_unwrapped = unwrap_array(ppShaderResourceViews, NumViews); ppShaderResourceViews = ppShaderResourceViews_unwrapped.data();
    impl_->CSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    
    
}
     
void base_ID3D11DeviceContext::CSSetUnorderedAccessViews(UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView* const* ppUnorderedAccessViews, UINT const* pUAVInitialCounts)
{
    log_method("ID3D11DeviceContext", "CSSetUnorderedAccessViews");
    auto ppUnorderedAccessViews_unwrapped = unwrap_array(ppUnorderedAccessViews, NumUAVs); ppUnorderedAccessViews = ppUnorderedAccessViews_unwrapped.data();
    impl_->CSSetUnorderedAccessViews(StartSlot, NumUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
    
    
}
     
void base_ID3D11DeviceContext::CSSetShader(ID3D11ComputeShader* pComputeShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    log_method("ID3D11DeviceContext", "CSSetShader");
    pComputeShader = unwrap(pComputeShader);
    auto ppClassInstances_unwrapped = unwrap_array(ppClassInstances, NumClassInstances); ppClassInstances = ppClassInstances_unwrapped.data();
    impl_->CSSetShader(pComputeShader, ppClassInstances, NumClassInstances);
    
    
}
     
void base_ID3D11DeviceContext::CSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    log_method("ID3D11DeviceContext", "CSSetSamplers");
    auto ppSamplers_unwrapped = unwrap_array(ppSamplers, NumSamplers); ppSamplers = ppSamplers_unwrapped.data();
    impl_->CSSetSamplers(StartSlot, NumSamplers, ppSamplers);
    
    
}
     
void base_ID3D11DeviceContext::CSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    log_method("ID3D11DeviceContext", "CSSetConstantBuffers");
    auto ppConstantBuffers_unwrapped = unwrap_array(ppConstantBuffers, NumBuffers); ppConstantBuffers = ppConstantBuffers_unwrapped.data();
    impl_->CSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    
    
}
     
void base_ID3D11DeviceContext::VSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    log_method("ID3D11DeviceContext", "VSGetConstantBuffers");
    
    impl_->VSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    wrap_array(ppConstantBuffers, NumBuffers);
    
}
     
void base_ID3D11DeviceContext::PSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    log_method("ID3D11DeviceContext", "PSGetShaderResources");
    
    impl_->PSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    wrap_array(ppShaderResourceViews, NumViews);
    
}
     
void base_ID3D11DeviceContext::PSGetShader(ID3D11PixelShader** ppPixelShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    log_method("ID3D11DeviceContext", "PSGetShader");
    
    impl_->PSGetShader(ppPixelShader, ppClassInstances, pNumClassInstances);
    if (ppPixelShader != nullptr) *ppPixelShader = wrap(*ppPixelShader);
    wrap_array(ppClassInstances, *pNumClassInstances);
    
}
     
void base_ID3D11DeviceContext::PSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    log_method("ID3D11DeviceContext", "PSGetSamplers");
    
    impl_->PSGetSamplers(StartSlot, NumSamplers, ppSamplers);
    wrap_array(ppSamplers, NumSamplers);
    
}
     
void base_ID3D11DeviceContext::VSGetShader(ID3D11VertexShader** ppVertexShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    log_method("ID3D11DeviceContext", "VSGetShader");
    
    impl_->VSGetShader(ppVertexShader, ppClassInstances, pNumClassInstances);
    if (ppVertexShader != nullptr) *ppVertexShader = wrap(*ppVertexShader);
    wrap_array(ppClassInstances, *pNumClassInstances);
    
}
     
void base_ID3D11DeviceContext::PSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    log_method("ID3D11DeviceContext", "PSGetConstantBuffers");
    
    impl_->PSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    wrap_array(ppConstantBuffers, NumBuffers);
    
}
     
void base_ID3D11DeviceContext::IAGetInputLayout(ID3D11InputLayout** ppInputLayout)
{
    log_method("ID3D11DeviceContext", "IAGetInputLayout");
    
    impl_->IAGetInputLayout(ppInputLayout);
    if (ppInputLayout != nullptr) *ppInputLayout = wrap(*ppInputLayout);
    
}
     
void base_ID3D11DeviceContext::IAGetVertexBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppVertexBuffers, UINT* pStrides, UINT* pOffsets)
{
    log_method("ID3D11DeviceContext", "IAGetVertexBuffers");
    
    impl_->IAGetVertexBuffers(StartSlot, NumBuffers, ppVertexBuffers, pStrides, pOffsets);
    wrap_array(ppVertexBuffers, NumBuffers);
    
}
     
void base_ID3D11DeviceContext::IAGetIndexBuffer(ID3D11Buffer** pIndexBuffer, DXGI_FORMAT* Format, UINT* Offset)
{
    log_method("ID3D11DeviceContext", "IAGetIndexBuffer");
    
    impl_->IAGetIndexBuffer(pIndexBuffer, Format, Offset);
    if (pIndexBuffer != nullptr) *pIndexBuffer = wrap(*pIndexBuffer);
    
}
     
void base_ID3D11DeviceContext::GSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    log_method("ID3D11DeviceContext", "GSGetConstantBuffers");
    
    impl_->GSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    wrap_array(ppConstantBuffers, NumBuffers);
    
}
     
void base_ID3D11DeviceContext::GSGetShader(ID3D11GeometryShader** ppGeometryShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    log_method("ID3D11DeviceContext", "GSGetShader");
    
    impl_->GSGetShader(ppGeometryShader, ppClassInstances, pNumClassInstances);
    if (ppGeometryShader != nullptr) *ppGeometryShader = wrap(*ppGeometryShader);
    wrap_array(ppClassInstances, *pNumClassInstances);
    
}
     
void base_ID3D11DeviceContext::IAGetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY* pTopology)
{
    log_method("ID3D11DeviceContext", "IAGetPrimitiveTopology");
    
    impl_->IAGetPrimitiveTopology(pTopology);
    
    
}
     
void base_ID3D11DeviceContext::VSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    log_method("ID3D11DeviceContext", "VSGetShaderResources");
    
    impl_->VSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    wrap_array(ppShaderResourceViews, NumViews);
    
}
     
void base_ID3D11DeviceContext::VSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    log_method("ID3D11DeviceContext", "VSGetSamplers");
    
    impl_->VSGetSamplers(StartSlot, NumSamplers, ppSamplers);
    wrap_array(ppSamplers, NumSamplers);
    
}
     
void base_ID3D11DeviceContext::GetPredication(ID3D11Predicate** ppPredicate, BOOL* pPredicateValue)
{
    log_method("ID3D11DeviceContext", "GetPredication");
    
    impl_->GetPredication(ppPredicate, pPredicateValue);
    if (ppPredicate != nullptr) *ppPredicate = wrap(*ppPredicate);
    
}
     
void base_ID3D11DeviceContext::GSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    log_method("ID3D11DeviceContext", "GSGetShaderResources");
    
    impl_->GSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    wrap_array(ppShaderResourceViews, NumViews);
    
}
     
void base_ID3D11DeviceContext::GSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    log_method("ID3D11DeviceContext", "GSGetSamplers");
    
    impl_->GSGetSamplers(StartSlot, NumSamplers, ppSamplers);
    wrap_array(ppSamplers, NumSamplers);
    
}
     
void base_ID3D11DeviceContext::OMGetRenderTargets(UINT NumViews, ID3D11RenderTargetView** ppRenderTargetViews, ID3D11DepthStencilView** ppDepthStencilView)
{
    log_method("ID3D11DeviceContext", "OMGetRenderTargets");
    
    impl_->OMGetRenderTargets(NumViews, ppRenderTargetViews, ppDepthStencilView);
    wrap_array(ppRenderTargetViews, NumViews);
    if (ppDepthStencilView != nullptr) *ppDepthStencilView = wrap(*ppDepthStencilView);
    
}
     
void base_ID3D11DeviceContext::OMGetRenderTargetsAndUnorderedAccessViews(UINT NumRTVs, ID3D11RenderTargetView** ppRenderTargetViews, ID3D11DepthStencilView** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView** ppUnorderedAccessViews)
{
    log_method("ID3D11DeviceContext", "OMGetRenderTargetsAndUnorderedAccessViews");
    
    impl_->OMGetRenderTargetsAndUnorderedAccessViews(NumRTVs, ppRenderTargetViews, ppDepthStencilView, UAVStartSlot, NumUAVs, ppUnorderedAccessViews);
    wrap_array(ppRenderTargetViews, NumRTVs);
    if (ppDepthStencilView != nullptr) *ppDepthStencilView = wrap(*ppDepthStencilView);
    wrap_array(ppUnorderedAccessViews, NumUAVs);
    
}
     
void base_ID3D11DeviceContext::OMGetBlendState(ID3D11BlendState** ppBlendState, FLOAT BlendFactor[4], UINT* pSampleMask)
{
    log_method("ID3D11DeviceContext", "OMGetBlendState");
    
    impl_->OMGetBlendState(ppBlendState, BlendFactor, pSampleMask);
    if (ppBlendState != nullptr) *ppBlendState = wrap(*ppBlendState);
    
}
     
void base_ID3D11DeviceContext::OMGetDepthStencilState(ID3D11DepthStencilState** ppDepthStencilState, UINT* pStencilRef)
{
    log_method("ID3D11DeviceContext", "OMGetDepthStencilState");
    
    impl_->OMGetDepthStencilState(ppDepthStencilState, pStencilRef);
    if (ppDepthStencilState != nullptr) *ppDepthStencilState = wrap(*ppDepthStencilState);
    
}
     
void base_ID3D11DeviceContext::SOGetTargets(UINT NumBuffers, ID3D11Buffer** ppSOTargets)
{
    log_method("ID3D11DeviceContext", "SOGetTargets");
    
    impl_->SOGetTargets(NumBuffers, ppSOTargets);
    wrap_array(ppSOTargets, NumBuffers);
    
}
     
void base_ID3D11DeviceContext::RSGetState(ID3D11RasterizerState** ppRasterizerState)
{
    log_method("ID3D11DeviceContext", "RSGetState");
    
    impl_->RSGetState(ppRasterizerState);
    if (ppRasterizerState != nullptr) *ppRasterizerState = wrap(*ppRasterizerState);
    
}
     
void base_ID3D11DeviceContext::RSGetViewports(UINT* pNumViewports, D3D11_VIEWPORT* pViewports)
{
    log_method("ID3D11DeviceContext", "RSGetViewports");
    
    impl_->RSGetViewports(pNumViewports, pViewports);
    
    
}
     
void base_ID3D11DeviceContext::RSGetScissorRects(UINT* pNumRects, D3D11_RECT* pRects)
{
    log_method("ID3D11DeviceContext", "RSGetScissorRects");
    
    impl_->RSGetScissorRects(pNumRects, pRects);
    
    
}
     
void base_ID3D11DeviceContext::HSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    log_method("ID3D11DeviceContext", "HSGetShaderResources");
    
    impl_->HSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    wrap_array(ppShaderResourceViews, NumViews);
    
}
     
void base_ID3D11DeviceContext::HSGetShader(ID3D11HullShader** ppHullShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    log_method("ID3D11DeviceContext", "HSGetShader");
    
    impl_->HSGetShader(ppHullShader, ppClassInstances, pNumClassInstances);
    if (ppHullShader != nullptr) *ppHullShader = wrap(*ppHullShader);
    wrap_array(ppClassInstances, *pNumClassInstances);
    
}
     
void base_ID3D11DeviceContext::HSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    log_method("ID3D11DeviceContext", "HSGetSamplers");
    
    impl_->HSGetSamplers(StartSlot, NumSamplers, ppSamplers);
    wrap_array(ppSamplers, NumSamplers);
    
}
     
void base_ID3D11DeviceContext::HSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    log_method("ID3D11DeviceContext", "HSGetConstantBuffers");
    
    impl_->HSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    wrap_array(ppConstantBuffers, NumBuffers);
    
}
     
void base_ID3D11DeviceContext::DSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    log_method("ID3D11DeviceContext", "DSGetShaderResources");
    
    impl_->DSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    wrap_array(ppShaderResourceViews, NumViews);
    
}
     
void base_ID3D11DeviceContext::DSGetShader(ID3D11DomainShader** ppDomainShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    log_method("ID3D11DeviceContext", "DSGetShader");
    
    impl_->DSGetShader(ppDomainShader, ppClassInstances, pNumClassInstances);
    if (ppDomainShader != nullptr) *ppDomainShader = wrap(*ppDomainShader);
    wrap_array(ppClassInstances, *pNumClassInstances);
    
}
     
void base_ID3D11DeviceContext::DSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    log_method("ID3D11DeviceContext", "DSGetSamplers");
    
    impl_->DSGetSamplers(StartSlot, NumSamplers, ppSamplers);
    wrap_array(ppSamplers, NumSamplers);
    
}
     
void base_ID3D11DeviceContext::DSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    log_method("ID3D11DeviceContext", "DSGetConstantBuffers");
    
    impl_->DSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    wrap_array(ppConstantBuffers, NumBuffers);
    
}
     
void base_ID3D11DeviceContext::CSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    log_method("ID3D11DeviceContext", "CSGetShaderResources");
    
    impl_->CSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
    wrap_array(ppShaderResourceViews, NumViews);
    
}
     
void base_ID3D11DeviceContext::CSGetUnorderedAccessViews(UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView** ppUnorderedAccessViews)
{
    log_method("ID3D11DeviceContext", "CSGetUnorderedAccessViews");
    
    impl_->CSGetUnorderedAccessViews(StartSlot, NumUAVs, ppUnorderedAccessViews);
    wrap_array(ppUnorderedAccessViews, NumUAVs);
    
}
     
void base_ID3D11DeviceContext::CSGetShader(ID3D11ComputeShader** ppComputeShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    log_method("ID3D11DeviceContext", "CSGetShader");
    
    impl_->CSGetShader(ppComputeShader, ppClassInstances, pNumClassInstances);
    if (ppComputeShader != nullptr) *ppComputeShader = wrap(*ppComputeShader);
    wrap_array(ppClassInstances, *pNumClassInstances);
    
}
     
void base_ID3D11DeviceContext::CSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    log_method("ID3D11DeviceContext", "CSGetSamplers");
    
    impl_->CSGetSamplers(StartSlot, NumSamplers, ppSamplers);
    wrap_array(ppSamplers, NumSamplers);
    
}
     
void base_ID3D11DeviceContext::CSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    log_method("ID3D11DeviceContext", "CSGetConstantBuffers");
    
    impl_->CSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
    wrap_array(ppConstantBuffers, NumBuffers);
    
}
     
void base_ID3D11DeviceContext::ClearState()
{
    log_method("ID3D11DeviceContext", "ClearState");
    
    impl_->ClearState();
    
    
}
     
void base_ID3D11DeviceContext::Flush()
{
    log_method("ID3D11DeviceContext", "Flush");
    
    impl_->Flush();
    
    
}
     
D3D11_DEVICE_CONTEXT_TYPE base_ID3D11DeviceContext::GetType()
{
    log_method("ID3D11DeviceContext", "GetType");
    
    auto result_ = impl_->GetType();
    
    return result_;
}
     
UINT base_ID3D11DeviceContext::GetContextFlags()
{
    log_method("ID3D11DeviceContext", "GetContextFlags");
    
    auto result_ = impl_->GetContextFlags();
    
    return result_;
}
     
HRESULT base_ID3D11DeviceContext::FinishCommandList(BOOL RestoreDeferredContextState, ID3D11CommandList** ppCommandList)
{
    log_method("ID3D11DeviceContext", "FinishCommandList");
    
    auto result_ = impl_->FinishCommandList(RestoreDeferredContextState, ppCommandList);
    if (ppCommandList != nullptr) *ppCommandList = wrap(*ppCommandList);
    return result_;
}
     

void base_ID3D11DeviceContext::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11DeviceContext::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11DeviceContext::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11DeviceContext::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11DeviceContext::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11DeviceContext::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11DeviceContext::Release()
{
    return parent_base_->Release();
}
     

ID3D11DeviceContext *base_ID3D11DeviceContext::impl() const
{
    return impl_;
}
      
