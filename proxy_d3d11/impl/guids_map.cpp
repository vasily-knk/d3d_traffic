#include "stdafx.h"
#include "../guids.h"
#include "../wrappers.h"

IUnknown *wrap_by_guid(IUnknown *impl, REFIID guid)
{
    static const guid_map_t<wrap_f> mapping = {
        {IID_ID3D11DeviceChild, [](IUnknown *p) { return wrap(static_cast<ID3D11DeviceChild *>(p)); }},
        {IID_ID3D11DepthStencilState, [](IUnknown *p) { return wrap(static_cast<ID3D11DepthStencilState *>(p)); }},
        {IID_ID3D11BlendState, [](IUnknown *p) { return wrap(static_cast<ID3D11BlendState *>(p)); }},
        {IID_ID3D11RasterizerState, [](IUnknown *p) { return wrap(static_cast<ID3D11RasterizerState *>(p)); }},
        {IID_ID3D11Resource, [](IUnknown *p) { return wrap(static_cast<ID3D11Resource *>(p)); }},
        {IID_ID3D11Buffer, [](IUnknown *p) { return wrap(static_cast<ID3D11Buffer *>(p)); }},
        {IID_ID3D11Texture1D, [](IUnknown *p) { return wrap(static_cast<ID3D11Texture1D *>(p)); }},
        {IID_ID3D11Texture2D, [](IUnknown *p) { return wrap(static_cast<ID3D11Texture2D *>(p)); }},
        {IID_ID3D11Texture3D, [](IUnknown *p) { return wrap(static_cast<ID3D11Texture3D *>(p)); }},
        {IID_ID3D11View, [](IUnknown *p) { return wrap(static_cast<ID3D11View *>(p)); }},
        {IID_ID3D11ShaderResourceView, [](IUnknown *p) { return wrap(static_cast<ID3D11ShaderResourceView *>(p)); }},
        {IID_ID3D11RenderTargetView, [](IUnknown *p) { return wrap(static_cast<ID3D11RenderTargetView *>(p)); }},
        {IID_ID3D11DepthStencilView, [](IUnknown *p) { return wrap(static_cast<ID3D11DepthStencilView *>(p)); }},
        {IID_ID3D11UnorderedAccessView, [](IUnknown *p) { return wrap(static_cast<ID3D11UnorderedAccessView *>(p)); }},
        {IID_ID3D11VertexShader, [](IUnknown *p) { return wrap(static_cast<ID3D11VertexShader *>(p)); }},
        {IID_ID3D11HullShader, [](IUnknown *p) { return wrap(static_cast<ID3D11HullShader *>(p)); }},
        {IID_ID3D11DomainShader, [](IUnknown *p) { return wrap(static_cast<ID3D11DomainShader *>(p)); }},
        {IID_ID3D11GeometryShader, [](IUnknown *p) { return wrap(static_cast<ID3D11GeometryShader *>(p)); }},
        {IID_ID3D11PixelShader, [](IUnknown *p) { return wrap(static_cast<ID3D11PixelShader *>(p)); }},
        {IID_ID3D11ComputeShader, [](IUnknown *p) { return wrap(static_cast<ID3D11ComputeShader *>(p)); }},
        {IID_ID3D11InputLayout, [](IUnknown *p) { return wrap(static_cast<ID3D11InputLayout *>(p)); }},
        {IID_ID3D11SamplerState, [](IUnknown *p) { return wrap(static_cast<ID3D11SamplerState *>(p)); }},
        {IID_ID3D11Asynchronous, [](IUnknown *p) { return wrap(static_cast<ID3D11Asynchronous *>(p)); }},
        {IID_ID3D11Query, [](IUnknown *p) { return wrap(static_cast<ID3D11Query *>(p)); }},
        {IID_ID3D11Predicate, [](IUnknown *p) { return wrap(static_cast<ID3D11Predicate *>(p)); }},
        {IID_ID3D11Counter, [](IUnknown *p) { return wrap(static_cast<ID3D11Counter *>(p)); }},
        {IID_ID3D11ClassInstance, [](IUnknown *p) { return wrap(static_cast<ID3D11ClassInstance *>(p)); }},
        {IID_ID3D11ClassLinkage, [](IUnknown *p) { return wrap(static_cast<ID3D11ClassLinkage *>(p)); }},
        {IID_ID3D11CommandList, [](IUnknown *p) { return wrap(static_cast<ID3D11CommandList *>(p)); }},
        {IID_ID3D11DeviceContext, [](IUnknown *p) { return wrap(static_cast<ID3D11DeviceContext *>(p)); }},
        {IID_ID3D11VideoDecoder, [](IUnknown *p) { return wrap(static_cast<ID3D11VideoDecoder *>(p)); }},
        {IID_ID3D11VideoProcessorEnumerator, [](IUnknown *p) { return wrap(static_cast<ID3D11VideoProcessorEnumerator *>(p)); }},
        {IID_ID3D11VideoProcessor, [](IUnknown *p) { return wrap(static_cast<ID3D11VideoProcessor *>(p)); }},
        {IID_ID3D11AuthenticatedChannel, [](IUnknown *p) { return wrap(static_cast<ID3D11AuthenticatedChannel *>(p)); }},
        {IID_ID3D11CryptoSession, [](IUnknown *p) { return wrap(static_cast<ID3D11CryptoSession *>(p)); }},
        {IID_ID3D11VideoDecoderOutputView, [](IUnknown *p) { return wrap(static_cast<ID3D11VideoDecoderOutputView *>(p)); }},
        {IID_ID3D11VideoProcessorInputView, [](IUnknown *p) { return wrap(static_cast<ID3D11VideoProcessorInputView *>(p)); }},
        {IID_ID3D11VideoProcessorOutputView, [](IUnknown *p) { return wrap(static_cast<ID3D11VideoProcessorOutputView *>(p)); }},
        {IID_ID3D11VideoContext, [](IUnknown *p) { return wrap(static_cast<ID3D11VideoContext *>(p)); }},
        {IID_ID3D11VideoDevice, [](IUnknown *p) { return wrap(static_cast<ID3D11VideoDevice *>(p)); }},
        {IID_ID3D11Device, [](IUnknown *p) { return wrap(static_cast<ID3D11Device *>(p)); }},
        {IID_IUnknown, [](IUnknown *p) { return wrap(static_cast<IUnknown *>(p)); }},
    };

    auto it = mapping.find(guid);
    if (it == mapping.end())
        return impl;

    return it->second(impl);
}
      
