#include "stdafx.h"

#include "base_ID3D11DeviceContext.h"

base_ID3D11DeviceContext::base_ID3D11DeviceContext(ID3D11DeviceContext *impl)
    : impl_ID3D11DeviceChild(impl)
    , impl_(impl)
{

}

void base_ID3D11DeviceContext::VSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    return impl_->VSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext::PSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    return impl_->PSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext::PSSetShader(ID3D11PixelShader* pPixelShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    return impl_->PSSetShader(pPixelShader, ppClassInstances, NumClassInstances);
}
     
void base_ID3D11DeviceContext::PSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    return impl_->PSSetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext::VSSetShader(ID3D11VertexShader* pVertexShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    return impl_->VSSetShader(pVertexShader, ppClassInstances, NumClassInstances);
}
     
void base_ID3D11DeviceContext::DrawIndexed(UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation)
{
    return impl_->DrawIndexed(IndexCount, StartIndexLocation, BaseVertexLocation);
}
     
void base_ID3D11DeviceContext::Draw(UINT VertexCount, UINT StartVertexLocation)
{
    return impl_->Draw(VertexCount, StartVertexLocation);
}
     
HRESULT base_ID3D11DeviceContext::Map(ID3D11Resource* pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE* pMappedResource)
{
    return impl_->Map(pResource, Subresource, MapType, MapFlags, pMappedResource);
}
     
void base_ID3D11DeviceContext::Unmap(ID3D11Resource* pResource, UINT Subresource)
{
    return impl_->Unmap(pResource, Subresource);
}
     
void base_ID3D11DeviceContext::PSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    return impl_->PSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext::IASetInputLayout(ID3D11InputLayout* pInputLayout)
{
    return impl_->IASetInputLayout(pInputLayout);
}
     
void base_ID3D11DeviceContext::IASetVertexBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppVertexBuffers, UINT const* pStrides, UINT const* pOffsets)
{
    return impl_->IASetVertexBuffers(StartSlot, NumBuffers, ppVertexBuffers, pStrides, pOffsets);
}
     
void base_ID3D11DeviceContext::IASetIndexBuffer(ID3D11Buffer* pIndexBuffer, DXGI_FORMAT Format, UINT Offset)
{
    return impl_->IASetIndexBuffer(pIndexBuffer, Format, Offset);
}
     
void base_ID3D11DeviceContext::DrawIndexedInstanced(UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation)
{
    return impl_->DrawIndexedInstanced(IndexCountPerInstance, InstanceCount, StartIndexLocation, BaseVertexLocation, StartInstanceLocation);
}
     
void base_ID3D11DeviceContext::DrawInstanced(UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation)
{
    return impl_->DrawInstanced(VertexCountPerInstance, InstanceCount, StartVertexLocation, StartInstanceLocation);
}
     
void base_ID3D11DeviceContext::GSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    return impl_->GSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext::GSSetShader(ID3D11GeometryShader* pShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    return impl_->GSSetShader(pShader, ppClassInstances, NumClassInstances);
}
     
void base_ID3D11DeviceContext::IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY Topology)
{
    return impl_->IASetPrimitiveTopology(Topology);
}
     
void base_ID3D11DeviceContext::VSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    return impl_->VSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext::VSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    return impl_->VSSetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext::Begin(ID3D11Asynchronous* pAsync)
{
    return impl_->Begin(pAsync);
}
     
void base_ID3D11DeviceContext::End(ID3D11Asynchronous* pAsync)
{
    return impl_->End(pAsync);
}
     
HRESULT base_ID3D11DeviceContext::GetData(ID3D11Asynchronous* pAsync, void* pData, UINT DataSize, UINT GetDataFlags)
{
    return impl_->GetData(pAsync, pData, DataSize, GetDataFlags);
}
     
void base_ID3D11DeviceContext::SetPredication(ID3D11Predicate* pPredicate, BOOL PredicateValue)
{
    return impl_->SetPredication(pPredicate, PredicateValue);
}
     
void base_ID3D11DeviceContext::GSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    return impl_->GSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext::GSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    return impl_->GSSetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext::OMSetRenderTargets(UINT NumViews, ID3D11RenderTargetView* const* ppRenderTargetViews, ID3D11DepthStencilView* pDepthStencilView)
{
    return impl_->OMSetRenderTargets(NumViews, ppRenderTargetViews, pDepthStencilView);
}
     
void base_ID3D11DeviceContext::OMSetRenderTargetsAndUnorderedAccessViews(UINT NumRTVs, ID3D11RenderTargetView* const* ppRenderTargetViews, ID3D11DepthStencilView* pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView* const* ppUnorderedAccessViews, UINT const* pUAVInitialCounts)
{
    return impl_->OMSetRenderTargetsAndUnorderedAccessViews(NumRTVs, ppRenderTargetViews, pDepthStencilView, UAVStartSlot, NumUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
}
     
void base_ID3D11DeviceContext::OMSetBlendState(ID3D11BlendState* pBlendState, FLOAT const BlendFactor[4], UINT SampleMask)
{
    return impl_->OMSetBlendState(pBlendState, BlendFactor, SampleMask);
}
     
void base_ID3D11DeviceContext::OMSetDepthStencilState(ID3D11DepthStencilState* pDepthStencilState, UINT StencilRef)
{
    return impl_->OMSetDepthStencilState(pDepthStencilState, StencilRef);
}
     
void base_ID3D11DeviceContext::SOSetTargets(UINT NumBuffers, ID3D11Buffer* const* ppSOTargets, UINT const* pOffsets)
{
    return impl_->SOSetTargets(NumBuffers, ppSOTargets, pOffsets);
}
     
void base_ID3D11DeviceContext::DrawAuto()
{
    return impl_->DrawAuto();
}
     
void base_ID3D11DeviceContext::DrawIndexedInstancedIndirect(ID3D11Buffer* pBufferForArgs, UINT AlignedByteOffsetForArgs)
{
    return impl_->DrawIndexedInstancedIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
}
     
void base_ID3D11DeviceContext::DrawInstancedIndirect(ID3D11Buffer* pBufferForArgs, UINT AlignedByteOffsetForArgs)
{
    return impl_->DrawInstancedIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
}
     
void base_ID3D11DeviceContext::Dispatch(UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ)
{
    return impl_->Dispatch(ThreadGroupCountX, ThreadGroupCountY, ThreadGroupCountZ);
}
     
void base_ID3D11DeviceContext::DispatchIndirect(ID3D11Buffer* pBufferForArgs, UINT AlignedByteOffsetForArgs)
{
    return impl_->DispatchIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
}
     
void base_ID3D11DeviceContext::RSSetState(ID3D11RasterizerState* pRasterizerState)
{
    return impl_->RSSetState(pRasterizerState);
}
     
void base_ID3D11DeviceContext::RSSetViewports(UINT NumViewports, D3D11_VIEWPORT const* pViewports)
{
    return impl_->RSSetViewports(NumViewports, pViewports);
}
     
void base_ID3D11DeviceContext::RSSetScissorRects(UINT NumRects, D3D11_RECT const* pRects)
{
    return impl_->RSSetScissorRects(NumRects, pRects);
}
     
void base_ID3D11DeviceContext::CopySubresourceRegion(ID3D11Resource* pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource* pSrcResource, UINT SrcSubresource, D3D11_BOX const* pSrcBox)
{
    return impl_->CopySubresourceRegion(pDstResource, DstSubresource, DstX, DstY, DstZ, pSrcResource, SrcSubresource, pSrcBox);
}
     
void base_ID3D11DeviceContext::CopyResource(ID3D11Resource* pDstResource, ID3D11Resource* pSrcResource)
{
    return impl_->CopyResource(pDstResource, pSrcResource);
}
     
void base_ID3D11DeviceContext::UpdateSubresource(ID3D11Resource* pDstResource, UINT DstSubresource, D3D11_BOX const* pDstBox, void const* pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch)
{
    return impl_->UpdateSubresource(pDstResource, DstSubresource, pDstBox, pSrcData, SrcRowPitch, SrcDepthPitch);
}
     
void base_ID3D11DeviceContext::CopyStructureCount(ID3D11Buffer* pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView* pSrcView)
{
    return impl_->CopyStructureCount(pDstBuffer, DstAlignedByteOffset, pSrcView);
}
     
void base_ID3D11DeviceContext::ClearRenderTargetView(ID3D11RenderTargetView* pRenderTargetView, FLOAT const ColorRGBA[4])
{
    return impl_->ClearRenderTargetView(pRenderTargetView, ColorRGBA);
}
     
void base_ID3D11DeviceContext::ClearUnorderedAccessViewUint(ID3D11UnorderedAccessView* pUnorderedAccessView, UINT const Values[4])
{
    return impl_->ClearUnorderedAccessViewUint(pUnorderedAccessView, Values);
}
     
void base_ID3D11DeviceContext::ClearUnorderedAccessViewFloat(ID3D11UnorderedAccessView* pUnorderedAccessView, FLOAT const Values[4])
{
    return impl_->ClearUnorderedAccessViewFloat(pUnorderedAccessView, Values);
}
     
void base_ID3D11DeviceContext::ClearDepthStencilView(ID3D11DepthStencilView* pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil)
{
    return impl_->ClearDepthStencilView(pDepthStencilView, ClearFlags, Depth, Stencil);
}
     
void base_ID3D11DeviceContext::GenerateMips(ID3D11ShaderResourceView* pShaderResourceView)
{
    return impl_->GenerateMips(pShaderResourceView);
}
     
void base_ID3D11DeviceContext::SetResourceMinLOD(ID3D11Resource* pResource, FLOAT MinLOD)
{
    return impl_->SetResourceMinLOD(pResource, MinLOD);
}
     
FLOAT base_ID3D11DeviceContext::GetResourceMinLOD(ID3D11Resource* pResource)
{
    return impl_->GetResourceMinLOD(pResource);
}
     
void base_ID3D11DeviceContext::ResolveSubresource(ID3D11Resource* pDstResource, UINT DstSubresource, ID3D11Resource* pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format)
{
    return impl_->ResolveSubresource(pDstResource, DstSubresource, pSrcResource, SrcSubresource, Format);
}
     
void base_ID3D11DeviceContext::ExecuteCommandList(ID3D11CommandList* pCommandList, BOOL RestoreContextState)
{
    return impl_->ExecuteCommandList(pCommandList, RestoreContextState);
}
     
void base_ID3D11DeviceContext::HSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    return impl_->HSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext::HSSetShader(ID3D11HullShader* pHullShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    return impl_->HSSetShader(pHullShader, ppClassInstances, NumClassInstances);
}
     
void base_ID3D11DeviceContext::HSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    return impl_->HSSetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext::HSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    return impl_->HSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext::DSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    return impl_->DSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext::DSSetShader(ID3D11DomainShader* pDomainShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    return impl_->DSSetShader(pDomainShader, ppClassInstances, NumClassInstances);
}
     
void base_ID3D11DeviceContext::DSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    return impl_->DSSetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext::DSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    return impl_->DSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext::CSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    return impl_->CSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext::CSSetUnorderedAccessViews(UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView* const* ppUnorderedAccessViews, UINT const* pUAVInitialCounts)
{
    return impl_->CSSetUnorderedAccessViews(StartSlot, NumUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
}
     
void base_ID3D11DeviceContext::CSSetShader(ID3D11ComputeShader* pComputeShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    return impl_->CSSetShader(pComputeShader, ppClassInstances, NumClassInstances);
}
     
void base_ID3D11DeviceContext::CSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    return impl_->CSSetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext::CSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    return impl_->CSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext::VSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    return impl_->VSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext::PSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    return impl_->PSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext::PSGetShader(ID3D11PixelShader** ppPixelShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    return impl_->PSGetShader(ppPixelShader, ppClassInstances, pNumClassInstances);
}
     
void base_ID3D11DeviceContext::PSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    return impl_->PSGetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext::VSGetShader(ID3D11VertexShader** ppVertexShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    return impl_->VSGetShader(ppVertexShader, ppClassInstances, pNumClassInstances);
}
     
void base_ID3D11DeviceContext::PSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    return impl_->PSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext::IAGetInputLayout(ID3D11InputLayout** ppInputLayout)
{
    return impl_->IAGetInputLayout(ppInputLayout);
}
     
void base_ID3D11DeviceContext::IAGetVertexBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppVertexBuffers, UINT* pStrides, UINT* pOffsets)
{
    return impl_->IAGetVertexBuffers(StartSlot, NumBuffers, ppVertexBuffers, pStrides, pOffsets);
}
     
void base_ID3D11DeviceContext::IAGetIndexBuffer(ID3D11Buffer** pIndexBuffer, DXGI_FORMAT* Format, UINT* Offset)
{
    return impl_->IAGetIndexBuffer(pIndexBuffer, Format, Offset);
}
     
void base_ID3D11DeviceContext::GSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    return impl_->GSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext::GSGetShader(ID3D11GeometryShader** ppGeometryShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    return impl_->GSGetShader(ppGeometryShader, ppClassInstances, pNumClassInstances);
}
     
void base_ID3D11DeviceContext::IAGetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY* pTopology)
{
    return impl_->IAGetPrimitiveTopology(pTopology);
}
     
void base_ID3D11DeviceContext::VSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    return impl_->VSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext::VSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    return impl_->VSGetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext::GetPredication(ID3D11Predicate** ppPredicate, BOOL* pPredicateValue)
{
    return impl_->GetPredication(ppPredicate, pPredicateValue);
}
     
void base_ID3D11DeviceContext::GSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    return impl_->GSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext::GSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    return impl_->GSGetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext::OMGetRenderTargets(UINT NumViews, ID3D11RenderTargetView** ppRenderTargetViews, ID3D11DepthStencilView** ppDepthStencilView)
{
    return impl_->OMGetRenderTargets(NumViews, ppRenderTargetViews, ppDepthStencilView);
}
     
void base_ID3D11DeviceContext::OMGetRenderTargetsAndUnorderedAccessViews(UINT NumRTVs, ID3D11RenderTargetView** ppRenderTargetViews, ID3D11DepthStencilView** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView** ppUnorderedAccessViews)
{
    return impl_->OMGetRenderTargetsAndUnorderedAccessViews(NumRTVs, ppRenderTargetViews, ppDepthStencilView, UAVStartSlot, NumUAVs, ppUnorderedAccessViews);
}
     
void base_ID3D11DeviceContext::OMGetBlendState(ID3D11BlendState** ppBlendState, FLOAT BlendFactor[4], UINT* pSampleMask)
{
    return impl_->OMGetBlendState(ppBlendState, BlendFactor, pSampleMask);
}
     
void base_ID3D11DeviceContext::OMGetDepthStencilState(ID3D11DepthStencilState** ppDepthStencilState, UINT* pStencilRef)
{
    return impl_->OMGetDepthStencilState(ppDepthStencilState, pStencilRef);
}
     
void base_ID3D11DeviceContext::SOGetTargets(UINT NumBuffers, ID3D11Buffer** ppSOTargets)
{
    return impl_->SOGetTargets(NumBuffers, ppSOTargets);
}
     
void base_ID3D11DeviceContext::RSGetState(ID3D11RasterizerState** ppRasterizerState)
{
    return impl_->RSGetState(ppRasterizerState);
}
     
void base_ID3D11DeviceContext::RSGetViewports(UINT* pNumViewports, D3D11_VIEWPORT* pViewports)
{
    return impl_->RSGetViewports(pNumViewports, pViewports);
}
     
void base_ID3D11DeviceContext::RSGetScissorRects(UINT* pNumRects, D3D11_RECT* pRects)
{
    return impl_->RSGetScissorRects(pNumRects, pRects);
}
     
void base_ID3D11DeviceContext::HSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    return impl_->HSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext::HSGetShader(ID3D11HullShader** ppHullShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    return impl_->HSGetShader(ppHullShader, ppClassInstances, pNumClassInstances);
}
     
void base_ID3D11DeviceContext::HSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    return impl_->HSGetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext::HSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    return impl_->HSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext::DSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    return impl_->DSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext::DSGetShader(ID3D11DomainShader** ppDomainShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    return impl_->DSGetShader(ppDomainShader, ppClassInstances, pNumClassInstances);
}
     
void base_ID3D11DeviceContext::DSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    return impl_->DSGetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext::DSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    return impl_->DSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext::CSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    return impl_->CSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext::CSGetUnorderedAccessViews(UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView** ppUnorderedAccessViews)
{
    return impl_->CSGetUnorderedAccessViews(StartSlot, NumUAVs, ppUnorderedAccessViews);
}
     
void base_ID3D11DeviceContext::CSGetShader(ID3D11ComputeShader** ppComputeShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    return impl_->CSGetShader(ppComputeShader, ppClassInstances, pNumClassInstances);
}
     
void base_ID3D11DeviceContext::CSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    return impl_->CSGetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext::CSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    return impl_->CSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext::ClearState()
{
    return impl_->ClearState();
}
     
void base_ID3D11DeviceContext::Flush()
{
    return impl_->Flush();
}
     
D3D11_DEVICE_CONTEXT_TYPE base_ID3D11DeviceContext::GetType()
{
    return impl_->GetType();
}
     
UINT base_ID3D11DeviceContext::GetContextFlags()
{
    return impl_->GetContextFlags();
}
     
HRESULT base_ID3D11DeviceContext::FinishCommandList(BOOL RestoreDeferredContextState, ID3D11CommandList** ppCommandList)
{
    return impl_->FinishCommandList(RestoreDeferredContextState, ppCommandList);
}
     

void base_ID3D11DeviceContext::GetDevice(ID3D11Device** ppDevice)
{
    return impl_ID3D11DeviceChild::GetDevice(ppDevice);
}
     
HRESULT base_ID3D11DeviceContext::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return impl_ID3D11DeviceChild::GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11DeviceContext::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11DeviceContext::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return impl_ID3D11DeviceChild::SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11DeviceContext::QueryInterface(REFIID riid, void** ppvObject)
{
    return impl_ID3D11DeviceChild::QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11DeviceContext::AddRef()
{
    return impl_ID3D11DeviceChild::AddRef();
}
     
ULONG base_ID3D11DeviceContext::Release()
{
    return impl_ID3D11DeviceChild::Release();
}
     

ID3D11DeviceContext *base_ID3D11DeviceContext::impl() const
{
    return impl_;
}
      
