#include "stdafx.h"

#include "base_ID3D11DeviceContext1.h"
#include "../wrappers.h"

ID3D11DeviceContext1 *unwrap_inner(ID3D11DeviceContext1 *wrapper)
{
    auto *cast_wrapper = static_cast<base_ID3D11DeviceContext1 *>(wrapper);
    return cast_wrapper->impl();
}

ID3D11DeviceContext1 *create_wrapper_inner(ID3D11DeviceContext1 *impl)
{
    return new base_ID3D11DeviceContext1(impl);
}
       

base_ID3D11DeviceContext1::base_ID3D11DeviceContext1(ID3D11DeviceContext1 *impl)
    : impl_(impl)
    , parent_base_(create_wrapper<ID3D11DeviceContext>(impl))
{

}

void base_ID3D11DeviceContext1::CopySubresourceRegion1(ID3D11Resource* pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource* pSrcResource, UINT SrcSubresource, D3D11_BOX const* pSrcBox, UINT CopyFlags)
{
    pDstResource = unwrap(pDstResource);
    pSrcResource = unwrap(pSrcResource);
    impl_->CopySubresourceRegion1(pDstResource, DstSubresource, DstX, DstY, DstZ, pSrcResource, SrcSubresource, pSrcBox, CopyFlags);
    
    
}
     
void base_ID3D11DeviceContext1::UpdateSubresource1(ID3D11Resource* pDstResource, UINT DstSubresource, D3D11_BOX const* pDstBox, void const* pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, UINT CopyFlags)
{
    pDstResource = unwrap(pDstResource);
    impl_->UpdateSubresource1(pDstResource, DstSubresource, pDstBox, pSrcData, SrcRowPitch, SrcDepthPitch, CopyFlags);
    
    
}
     
void base_ID3D11DeviceContext1::DiscardResource(ID3D11Resource* pResource)
{
    pResource = unwrap(pResource);
    impl_->DiscardResource(pResource);
    
    
}
     
void base_ID3D11DeviceContext1::DiscardView(ID3D11View* pResourceView)
{
    pResourceView = unwrap(pResourceView);
    impl_->DiscardView(pResourceView);
    
    
}
     
void base_ID3D11DeviceContext1::VSSetConstantBuffers1(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers, UINT const* pFirstConstant, UINT const* pNumConstants)
{
    auto ppConstantBuffers_unwrapped = unwrap_array(ppConstantBuffers, NumBuffers); ppConstantBuffers = ppConstantBuffers_unwrapped.data();
    impl_->VSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
    
    
}
     
void base_ID3D11DeviceContext1::HSSetConstantBuffers1(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers, UINT const* pFirstConstant, UINT const* pNumConstants)
{
    auto ppConstantBuffers_unwrapped = unwrap_array(ppConstantBuffers, NumBuffers); ppConstantBuffers = ppConstantBuffers_unwrapped.data();
    impl_->HSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
    
    
}
     
void base_ID3D11DeviceContext1::DSSetConstantBuffers1(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers, UINT const* pFirstConstant, UINT const* pNumConstants)
{
    auto ppConstantBuffers_unwrapped = unwrap_array(ppConstantBuffers, NumBuffers); ppConstantBuffers = ppConstantBuffers_unwrapped.data();
    impl_->DSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
    
    
}
     
void base_ID3D11DeviceContext1::GSSetConstantBuffers1(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers, UINT const* pFirstConstant, UINT const* pNumConstants)
{
    auto ppConstantBuffers_unwrapped = unwrap_array(ppConstantBuffers, NumBuffers); ppConstantBuffers = ppConstantBuffers_unwrapped.data();
    impl_->GSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
    
    
}
     
void base_ID3D11DeviceContext1::PSSetConstantBuffers1(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers, UINT const* pFirstConstant, UINT const* pNumConstants)
{
    auto ppConstantBuffers_unwrapped = unwrap_array(ppConstantBuffers, NumBuffers); ppConstantBuffers = ppConstantBuffers_unwrapped.data();
    impl_->PSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
    
    
}
     
void base_ID3D11DeviceContext1::CSSetConstantBuffers1(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers, UINT const* pFirstConstant, UINT const* pNumConstants)
{
    auto ppConstantBuffers_unwrapped = unwrap_array(ppConstantBuffers, NumBuffers); ppConstantBuffers = ppConstantBuffers_unwrapped.data();
    impl_->CSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
    
    
}
     
void base_ID3D11DeviceContext1::VSGetConstantBuffers1(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers, UINT* pFirstConstant, UINT* pNumConstants)
{
    
    impl_->VSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
    wrap_array(ppConstantBuffers, NumBuffers);
    
}
     
void base_ID3D11DeviceContext1::HSGetConstantBuffers1(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers, UINT* pFirstConstant, UINT* pNumConstants)
{
    
    impl_->HSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
    wrap_array(ppConstantBuffers, NumBuffers);
    
}
     
void base_ID3D11DeviceContext1::DSGetConstantBuffers1(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers, UINT* pFirstConstant, UINT* pNumConstants)
{
    
    impl_->DSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
    wrap_array(ppConstantBuffers, NumBuffers);
    
}
     
void base_ID3D11DeviceContext1::GSGetConstantBuffers1(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers, UINT* pFirstConstant, UINT* pNumConstants)
{
    
    impl_->GSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
    wrap_array(ppConstantBuffers, NumBuffers);
    
}
     
void base_ID3D11DeviceContext1::PSGetConstantBuffers1(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers, UINT* pFirstConstant, UINT* pNumConstants)
{
    
    impl_->PSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
    wrap_array(ppConstantBuffers, NumBuffers);
    
}
     
void base_ID3D11DeviceContext1::CSGetConstantBuffers1(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers, UINT* pFirstConstant, UINT* pNumConstants)
{
    
    impl_->CSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
    wrap_array(ppConstantBuffers, NumBuffers);
    
}
     
void base_ID3D11DeviceContext1::SwapDeviceContextState(ID3DDeviceContextState* pState, ID3DDeviceContextState** ppPreviousState)
{
    pState = unwrap(pState);
    impl_->SwapDeviceContextState(pState, ppPreviousState);
    if (ppPreviousState != nullptr) *ppPreviousState = wrap(*ppPreviousState);
    
}
     
void base_ID3D11DeviceContext1::ClearView(ID3D11View* pView, FLOAT const Color[4], D3D11_RECT const* pRect, UINT NumRects)
{
    pView = unwrap(pView);
    impl_->ClearView(pView, Color, pRect, NumRects);
    
    
}
     
void base_ID3D11DeviceContext1::DiscardView1(ID3D11View* pResourceView, D3D11_RECT const* pRects, UINT NumRects)
{
    pResourceView = unwrap(pResourceView);
    impl_->DiscardView1(pResourceView, pRects, NumRects);
    
    
}
     

void base_ID3D11DeviceContext1::VSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    return parent_base_->VSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext1::PSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    return parent_base_->PSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext1::PSSetShader(ID3D11PixelShader* pPixelShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    return parent_base_->PSSetShader(pPixelShader, ppClassInstances, NumClassInstances);
}
     
void base_ID3D11DeviceContext1::PSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    return parent_base_->PSSetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext1::VSSetShader(ID3D11VertexShader* pVertexShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    return parent_base_->VSSetShader(pVertexShader, ppClassInstances, NumClassInstances);
}
     
void base_ID3D11DeviceContext1::DrawIndexed(UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation)
{
    return parent_base_->DrawIndexed(IndexCount, StartIndexLocation, BaseVertexLocation);
}
     
void base_ID3D11DeviceContext1::Draw(UINT VertexCount, UINT StartVertexLocation)
{
    return parent_base_->Draw(VertexCount, StartVertexLocation);
}
     
HRESULT base_ID3D11DeviceContext1::Map(ID3D11Resource* pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE* pMappedResource)
{
    return parent_base_->Map(pResource, Subresource, MapType, MapFlags, pMappedResource);
}
     
void base_ID3D11DeviceContext1::Unmap(ID3D11Resource* pResource, UINT Subresource)
{
    return parent_base_->Unmap(pResource, Subresource);
}
     
void base_ID3D11DeviceContext1::PSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    return parent_base_->PSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext1::IASetInputLayout(ID3D11InputLayout* pInputLayout)
{
    return parent_base_->IASetInputLayout(pInputLayout);
}
     
void base_ID3D11DeviceContext1::IASetVertexBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppVertexBuffers, UINT const* pStrides, UINT const* pOffsets)
{
    return parent_base_->IASetVertexBuffers(StartSlot, NumBuffers, ppVertexBuffers, pStrides, pOffsets);
}
     
void base_ID3D11DeviceContext1::IASetIndexBuffer(ID3D11Buffer* pIndexBuffer, DXGI_FORMAT Format, UINT Offset)
{
    return parent_base_->IASetIndexBuffer(pIndexBuffer, Format, Offset);
}
     
void base_ID3D11DeviceContext1::DrawIndexedInstanced(UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation)
{
    return parent_base_->DrawIndexedInstanced(IndexCountPerInstance, InstanceCount, StartIndexLocation, BaseVertexLocation, StartInstanceLocation);
}
     
void base_ID3D11DeviceContext1::DrawInstanced(UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation)
{
    return parent_base_->DrawInstanced(VertexCountPerInstance, InstanceCount, StartVertexLocation, StartInstanceLocation);
}
     
void base_ID3D11DeviceContext1::GSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    return parent_base_->GSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext1::GSSetShader(ID3D11GeometryShader* pShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    return parent_base_->GSSetShader(pShader, ppClassInstances, NumClassInstances);
}
     
void base_ID3D11DeviceContext1::IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY Topology)
{
    return parent_base_->IASetPrimitiveTopology(Topology);
}
     
void base_ID3D11DeviceContext1::VSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    return parent_base_->VSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext1::VSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    return parent_base_->VSSetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext1::Begin(ID3D11Asynchronous* pAsync)
{
    return parent_base_->Begin(pAsync);
}
     
void base_ID3D11DeviceContext1::End(ID3D11Asynchronous* pAsync)
{
    return parent_base_->End(pAsync);
}
     
HRESULT base_ID3D11DeviceContext1::GetData(ID3D11Asynchronous* pAsync, void* pData, UINT DataSize, UINT GetDataFlags)
{
    return parent_base_->GetData(pAsync, pData, DataSize, GetDataFlags);
}
     
void base_ID3D11DeviceContext1::SetPredication(ID3D11Predicate* pPredicate, BOOL PredicateValue)
{
    return parent_base_->SetPredication(pPredicate, PredicateValue);
}
     
void base_ID3D11DeviceContext1::GSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    return parent_base_->GSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext1::GSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    return parent_base_->GSSetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext1::OMSetRenderTargets(UINT NumViews, ID3D11RenderTargetView* const* ppRenderTargetViews, ID3D11DepthStencilView* pDepthStencilView)
{
    return parent_base_->OMSetRenderTargets(NumViews, ppRenderTargetViews, pDepthStencilView);
}
     
void base_ID3D11DeviceContext1::OMSetRenderTargetsAndUnorderedAccessViews(UINT NumRTVs, ID3D11RenderTargetView* const* ppRenderTargetViews, ID3D11DepthStencilView* pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView* const* ppUnorderedAccessViews, UINT const* pUAVInitialCounts)
{
    return parent_base_->OMSetRenderTargetsAndUnorderedAccessViews(NumRTVs, ppRenderTargetViews, pDepthStencilView, UAVStartSlot, NumUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
}
     
void base_ID3D11DeviceContext1::OMSetBlendState(ID3D11BlendState* pBlendState, FLOAT const BlendFactor[4], UINT SampleMask)
{
    return parent_base_->OMSetBlendState(pBlendState, BlendFactor, SampleMask);
}
     
void base_ID3D11DeviceContext1::OMSetDepthStencilState(ID3D11DepthStencilState* pDepthStencilState, UINT StencilRef)
{
    return parent_base_->OMSetDepthStencilState(pDepthStencilState, StencilRef);
}
     
void base_ID3D11DeviceContext1::SOSetTargets(UINT NumBuffers, ID3D11Buffer* const* ppSOTargets, UINT const* pOffsets)
{
    return parent_base_->SOSetTargets(NumBuffers, ppSOTargets, pOffsets);
}
     
void base_ID3D11DeviceContext1::DrawAuto()
{
    return parent_base_->DrawAuto();
}
     
void base_ID3D11DeviceContext1::DrawIndexedInstancedIndirect(ID3D11Buffer* pBufferForArgs, UINT AlignedByteOffsetForArgs)
{
    return parent_base_->DrawIndexedInstancedIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
}
     
void base_ID3D11DeviceContext1::DrawInstancedIndirect(ID3D11Buffer* pBufferForArgs, UINT AlignedByteOffsetForArgs)
{
    return parent_base_->DrawInstancedIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
}
     
void base_ID3D11DeviceContext1::Dispatch(UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ)
{
    return parent_base_->Dispatch(ThreadGroupCountX, ThreadGroupCountY, ThreadGroupCountZ);
}
     
void base_ID3D11DeviceContext1::DispatchIndirect(ID3D11Buffer* pBufferForArgs, UINT AlignedByteOffsetForArgs)
{
    return parent_base_->DispatchIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
}
     
void base_ID3D11DeviceContext1::RSSetState(ID3D11RasterizerState* pRasterizerState)
{
    return parent_base_->RSSetState(pRasterizerState);
}
     
void base_ID3D11DeviceContext1::RSSetViewports(UINT NumViewports, D3D11_VIEWPORT const* pViewports)
{
    return parent_base_->RSSetViewports(NumViewports, pViewports);
}
     
void base_ID3D11DeviceContext1::RSSetScissorRects(UINT NumRects, D3D11_RECT const* pRects)
{
    return parent_base_->RSSetScissorRects(NumRects, pRects);
}
     
void base_ID3D11DeviceContext1::CopySubresourceRegion(ID3D11Resource* pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource* pSrcResource, UINT SrcSubresource, D3D11_BOX const* pSrcBox)
{
    return parent_base_->CopySubresourceRegion(pDstResource, DstSubresource, DstX, DstY, DstZ, pSrcResource, SrcSubresource, pSrcBox);
}
     
void base_ID3D11DeviceContext1::CopyResource(ID3D11Resource* pDstResource, ID3D11Resource* pSrcResource)
{
    return parent_base_->CopyResource(pDstResource, pSrcResource);
}
     
void base_ID3D11DeviceContext1::UpdateSubresource(ID3D11Resource* pDstResource, UINT DstSubresource, D3D11_BOX const* pDstBox, void const* pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch)
{
    return parent_base_->UpdateSubresource(pDstResource, DstSubresource, pDstBox, pSrcData, SrcRowPitch, SrcDepthPitch);
}
     
void base_ID3D11DeviceContext1::CopyStructureCount(ID3D11Buffer* pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView* pSrcView)
{
    return parent_base_->CopyStructureCount(pDstBuffer, DstAlignedByteOffset, pSrcView);
}
     
void base_ID3D11DeviceContext1::ClearRenderTargetView(ID3D11RenderTargetView* pRenderTargetView, FLOAT const ColorRGBA[4])
{
    return parent_base_->ClearRenderTargetView(pRenderTargetView, ColorRGBA);
}
     
void base_ID3D11DeviceContext1::ClearUnorderedAccessViewUint(ID3D11UnorderedAccessView* pUnorderedAccessView, UINT const Values[4])
{
    return parent_base_->ClearUnorderedAccessViewUint(pUnorderedAccessView, Values);
}
     
void base_ID3D11DeviceContext1::ClearUnorderedAccessViewFloat(ID3D11UnorderedAccessView* pUnorderedAccessView, FLOAT const Values[4])
{
    return parent_base_->ClearUnorderedAccessViewFloat(pUnorderedAccessView, Values);
}
     
void base_ID3D11DeviceContext1::ClearDepthStencilView(ID3D11DepthStencilView* pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil)
{
    return parent_base_->ClearDepthStencilView(pDepthStencilView, ClearFlags, Depth, Stencil);
}
     
void base_ID3D11DeviceContext1::GenerateMips(ID3D11ShaderResourceView* pShaderResourceView)
{
    return parent_base_->GenerateMips(pShaderResourceView);
}
     
void base_ID3D11DeviceContext1::SetResourceMinLOD(ID3D11Resource* pResource, FLOAT MinLOD)
{
    return parent_base_->SetResourceMinLOD(pResource, MinLOD);
}
     
FLOAT base_ID3D11DeviceContext1::GetResourceMinLOD(ID3D11Resource* pResource)
{
    return parent_base_->GetResourceMinLOD(pResource);
}
     
void base_ID3D11DeviceContext1::ResolveSubresource(ID3D11Resource* pDstResource, UINT DstSubresource, ID3D11Resource* pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format)
{
    return parent_base_->ResolveSubresource(pDstResource, DstSubresource, pSrcResource, SrcSubresource, Format);
}
     
void base_ID3D11DeviceContext1::ExecuteCommandList(ID3D11CommandList* pCommandList, BOOL RestoreContextState)
{
    return parent_base_->ExecuteCommandList(pCommandList, RestoreContextState);
}
     
void base_ID3D11DeviceContext1::HSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    return parent_base_->HSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext1::HSSetShader(ID3D11HullShader* pHullShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    return parent_base_->HSSetShader(pHullShader, ppClassInstances, NumClassInstances);
}
     
void base_ID3D11DeviceContext1::HSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    return parent_base_->HSSetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext1::HSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    return parent_base_->HSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext1::DSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    return parent_base_->DSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext1::DSSetShader(ID3D11DomainShader* pDomainShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    return parent_base_->DSSetShader(pDomainShader, ppClassInstances, NumClassInstances);
}
     
void base_ID3D11DeviceContext1::DSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    return parent_base_->DSSetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext1::DSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    return parent_base_->DSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext1::CSSetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView* const* ppShaderResourceViews)
{
    return parent_base_->CSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext1::CSSetUnorderedAccessViews(UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView* const* ppUnorderedAccessViews, UINT const* pUAVInitialCounts)
{
    return parent_base_->CSSetUnorderedAccessViews(StartSlot, NumUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
}
     
void base_ID3D11DeviceContext1::CSSetShader(ID3D11ComputeShader* pComputeShader, ID3D11ClassInstance* const* ppClassInstances, UINT NumClassInstances)
{
    return parent_base_->CSSetShader(pComputeShader, ppClassInstances, NumClassInstances);
}
     
void base_ID3D11DeviceContext1::CSSetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState* const* ppSamplers)
{
    return parent_base_->CSSetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext1::CSSetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer* const* ppConstantBuffers)
{
    return parent_base_->CSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext1::VSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    return parent_base_->VSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext1::PSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    return parent_base_->PSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext1::PSGetShader(ID3D11PixelShader** ppPixelShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    return parent_base_->PSGetShader(ppPixelShader, ppClassInstances, pNumClassInstances);
}
     
void base_ID3D11DeviceContext1::PSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    return parent_base_->PSGetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext1::VSGetShader(ID3D11VertexShader** ppVertexShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    return parent_base_->VSGetShader(ppVertexShader, ppClassInstances, pNumClassInstances);
}
     
void base_ID3D11DeviceContext1::PSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    return parent_base_->PSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext1::IAGetInputLayout(ID3D11InputLayout** ppInputLayout)
{
    return parent_base_->IAGetInputLayout(ppInputLayout);
}
     
void base_ID3D11DeviceContext1::IAGetVertexBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppVertexBuffers, UINT* pStrides, UINT* pOffsets)
{
    return parent_base_->IAGetVertexBuffers(StartSlot, NumBuffers, ppVertexBuffers, pStrides, pOffsets);
}
     
void base_ID3D11DeviceContext1::IAGetIndexBuffer(ID3D11Buffer** pIndexBuffer, DXGI_FORMAT* Format, UINT* Offset)
{
    return parent_base_->IAGetIndexBuffer(pIndexBuffer, Format, Offset);
}
     
void base_ID3D11DeviceContext1::GSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    return parent_base_->GSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext1::GSGetShader(ID3D11GeometryShader** ppGeometryShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    return parent_base_->GSGetShader(ppGeometryShader, ppClassInstances, pNumClassInstances);
}
     
void base_ID3D11DeviceContext1::IAGetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY* pTopology)
{
    return parent_base_->IAGetPrimitiveTopology(pTopology);
}
     
void base_ID3D11DeviceContext1::VSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    return parent_base_->VSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext1::VSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    return parent_base_->VSGetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext1::GetPredication(ID3D11Predicate** ppPredicate, BOOL* pPredicateValue)
{
    return parent_base_->GetPredication(ppPredicate, pPredicateValue);
}
     
void base_ID3D11DeviceContext1::GSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    return parent_base_->GSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext1::GSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    return parent_base_->GSGetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext1::OMGetRenderTargets(UINT NumViews, ID3D11RenderTargetView** ppRenderTargetViews, ID3D11DepthStencilView** ppDepthStencilView)
{
    return parent_base_->OMGetRenderTargets(NumViews, ppRenderTargetViews, ppDepthStencilView);
}
     
void base_ID3D11DeviceContext1::OMGetRenderTargetsAndUnorderedAccessViews(UINT NumRTVs, ID3D11RenderTargetView** ppRenderTargetViews, ID3D11DepthStencilView** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView** ppUnorderedAccessViews)
{
    return parent_base_->OMGetRenderTargetsAndUnorderedAccessViews(NumRTVs, ppRenderTargetViews, ppDepthStencilView, UAVStartSlot, NumUAVs, ppUnorderedAccessViews);
}
     
void base_ID3D11DeviceContext1::OMGetBlendState(ID3D11BlendState** ppBlendState, FLOAT BlendFactor[4], UINT* pSampleMask)
{
    return parent_base_->OMGetBlendState(ppBlendState, BlendFactor, pSampleMask);
}
     
void base_ID3D11DeviceContext1::OMGetDepthStencilState(ID3D11DepthStencilState** ppDepthStencilState, UINT* pStencilRef)
{
    return parent_base_->OMGetDepthStencilState(ppDepthStencilState, pStencilRef);
}
     
void base_ID3D11DeviceContext1::SOGetTargets(UINT NumBuffers, ID3D11Buffer** ppSOTargets)
{
    return parent_base_->SOGetTargets(NumBuffers, ppSOTargets);
}
     
void base_ID3D11DeviceContext1::RSGetState(ID3D11RasterizerState** ppRasterizerState)
{
    return parent_base_->RSGetState(ppRasterizerState);
}
     
void base_ID3D11DeviceContext1::RSGetViewports(UINT* pNumViewports, D3D11_VIEWPORT* pViewports)
{
    return parent_base_->RSGetViewports(pNumViewports, pViewports);
}
     
void base_ID3D11DeviceContext1::RSGetScissorRects(UINT* pNumRects, D3D11_RECT* pRects)
{
    return parent_base_->RSGetScissorRects(pNumRects, pRects);
}
     
void base_ID3D11DeviceContext1::HSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    return parent_base_->HSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext1::HSGetShader(ID3D11HullShader** ppHullShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    return parent_base_->HSGetShader(ppHullShader, ppClassInstances, pNumClassInstances);
}
     
void base_ID3D11DeviceContext1::HSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    return parent_base_->HSGetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext1::HSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    return parent_base_->HSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext1::DSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    return parent_base_->DSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext1::DSGetShader(ID3D11DomainShader** ppDomainShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    return parent_base_->DSGetShader(ppDomainShader, ppClassInstances, pNumClassInstances);
}
     
void base_ID3D11DeviceContext1::DSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    return parent_base_->DSGetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext1::DSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    return parent_base_->DSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext1::CSGetShaderResources(UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView** ppShaderResourceViews)
{
    return parent_base_->CSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
}
     
void base_ID3D11DeviceContext1::CSGetUnorderedAccessViews(UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView** ppUnorderedAccessViews)
{
    return parent_base_->CSGetUnorderedAccessViews(StartSlot, NumUAVs, ppUnorderedAccessViews);
}
     
void base_ID3D11DeviceContext1::CSGetShader(ID3D11ComputeShader** ppComputeShader, ID3D11ClassInstance** ppClassInstances, UINT* pNumClassInstances)
{
    return parent_base_->CSGetShader(ppComputeShader, ppClassInstances, pNumClassInstances);
}
     
void base_ID3D11DeviceContext1::CSGetSamplers(UINT StartSlot, UINT NumSamplers, ID3D11SamplerState** ppSamplers)
{
    return parent_base_->CSGetSamplers(StartSlot, NumSamplers, ppSamplers);
}
     
void base_ID3D11DeviceContext1::CSGetConstantBuffers(UINT StartSlot, UINT NumBuffers, ID3D11Buffer** ppConstantBuffers)
{
    return parent_base_->CSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
}
     
void base_ID3D11DeviceContext1::ClearState()
{
    return parent_base_->ClearState();
}
     
void base_ID3D11DeviceContext1::Flush()
{
    return parent_base_->Flush();
}
     
D3D11_DEVICE_CONTEXT_TYPE base_ID3D11DeviceContext1::GetType()
{
    return parent_base_->GetType();
}
     
UINT base_ID3D11DeviceContext1::GetContextFlags()
{
    return parent_base_->GetContextFlags();
}
     
HRESULT base_ID3D11DeviceContext1::FinishCommandList(BOOL RestoreDeferredContextState, ID3D11CommandList** ppCommandList)
{
    return parent_base_->FinishCommandList(RestoreDeferredContextState, ppCommandList);
}
     
void base_ID3D11DeviceContext1::GetDevice(ID3D11Device** ppDevice)
{
    return parent_base_->GetDevice(ppDevice);
}
     
HRESULT base_ID3D11DeviceContext1::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
    return parent_base_->GetPrivateData(guid, pDataSize, pData);
}
     
HRESULT base_ID3D11DeviceContext1::SetPrivateData(REFGUID guid, UINT DataSize, void const* pData)
{
    return parent_base_->SetPrivateData(guid, DataSize, pData);
}
     
HRESULT base_ID3D11DeviceContext1::SetPrivateDataInterface(REFGUID guid, IUnknown const* pData)
{
    return parent_base_->SetPrivateDataInterface(guid, pData);
}
     
HRESULT base_ID3D11DeviceContext1::QueryInterface(REFIID riid, void** ppvObject)
{
    return parent_base_->QueryInterface(riid, ppvObject);
}
     
ULONG base_ID3D11DeviceContext1::AddRef()
{
    return parent_base_->AddRef();
}
     
ULONG base_ID3D11DeviceContext1::Release()
{
    return parent_base_->Release();
}
     

ID3D11DeviceContext1 *base_ID3D11DeviceContext1::impl() const
{
    return impl_;
}
      
