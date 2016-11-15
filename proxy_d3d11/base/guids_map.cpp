#include "stdafx.h"
#include "../guids.h"
#include "../wrappers.h"

create_wrapper_f creator_by_guid(REFIID guid)
{
    static const guid_map_t<create_wrapper_f> mapping = {
        {IID_ID3D11DeviceChild, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11DeviceChild *>(impl)); } },
        {IID_ID3D11DepthStencilState, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11DepthStencilState *>(impl)); } },
        {IID_ID3D11BlendState, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11BlendState *>(impl)); } },
        {IID_ID3D11RasterizerState, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11RasterizerState *>(impl)); } },
        {IID_ID3D11Resource, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11Resource *>(impl)); } },
        {IID_ID3D11Buffer, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11Buffer *>(impl)); } },
        {IID_ID3D11Texture1D, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11Texture1D *>(impl)); } },
        {IID_ID3D11Texture2D, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11Texture2D *>(impl)); } },
        {IID_ID3D11Texture3D, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11Texture3D *>(impl)); } },
        {IID_ID3D11View, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11View *>(impl)); } },
        {IID_ID3D11ShaderResourceView, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11ShaderResourceView *>(impl)); } },
        {IID_ID3D11RenderTargetView, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11RenderTargetView *>(impl)); } },
        {IID_ID3D11DepthStencilView, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11DepthStencilView *>(impl)); } },
        {IID_ID3D11UnorderedAccessView, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11UnorderedAccessView *>(impl)); } },
        {IID_ID3D11VertexShader, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11VertexShader *>(impl)); } },
        {IID_ID3D11HullShader, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11HullShader *>(impl)); } },
        {IID_ID3D11DomainShader, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11DomainShader *>(impl)); } },
        {IID_ID3D11GeometryShader, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11GeometryShader *>(impl)); } },
        {IID_ID3D11PixelShader, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11PixelShader *>(impl)); } },
        {IID_ID3D11ComputeShader, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11ComputeShader *>(impl)); } },
        {IID_ID3D11InputLayout, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11InputLayout *>(impl)); } },
        {IID_ID3D11SamplerState, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11SamplerState *>(impl)); } },
        {IID_ID3D11Asynchronous, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11Asynchronous *>(impl)); } },
        {IID_ID3D11Query, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11Query *>(impl)); } },
        {IID_ID3D11Predicate, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11Predicate *>(impl)); } },
        {IID_ID3D11Counter, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11Counter *>(impl)); } },
        {IID_ID3D11ClassInstance, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11ClassInstance *>(impl)); } },
        {IID_ID3D11ClassLinkage, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11ClassLinkage *>(impl)); } },
        {IID_ID3D11CommandList, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11CommandList *>(impl)); } },
        {IID_ID3D11DeviceContext, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11DeviceContext *>(impl)); } },
        {IID_ID3D11VideoDecoder, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11VideoDecoder *>(impl)); } },
        {IID_ID3D11VideoProcessorEnumerator, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11VideoProcessorEnumerator *>(impl)); } },
        {IID_ID3D11VideoProcessor, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11VideoProcessor *>(impl)); } },
        {IID_ID3D11AuthenticatedChannel, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11AuthenticatedChannel *>(impl)); } },
        {IID_ID3D11CryptoSession, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11CryptoSession *>(impl)); } },
        {IID_ID3D11VideoDecoderOutputView, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11VideoDecoderOutputView *>(impl)); } },
        {IID_ID3D11VideoProcessorInputView, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11VideoProcessorInputView *>(impl)); } },
        {IID_ID3D11VideoProcessorOutputView, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11VideoProcessorOutputView *>(impl)); } },
        {IID_ID3D11VideoContext, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11VideoContext *>(impl)); } },
        {IID_ID3D11VideoDevice, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11VideoDevice *>(impl)); } },
        {IID_ID3D11Device, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11Device *>(impl)); } },
        {IID_ID3D11BlendState1, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11BlendState1 *>(impl)); } },
        {IID_ID3D11RasterizerState1, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11RasterizerState1 *>(impl)); } },
        {IID_ID3DDeviceContextState, [](IUnknown *impl) { return create_wrapper(static_cast<ID3DDeviceContextState *>(impl)); } },
        {IID_ID3D11DeviceContext1, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11DeviceContext1 *>(impl)); } },
        {IID_ID3D11Device1, [](IUnknown *impl) { return create_wrapper(static_cast<ID3D11Device1 *>(impl)); } },
        {IID_ID3DUserDefinedAnnotation, [](IUnknown *impl) { return create_wrapper(static_cast<ID3DUserDefinedAnnotation *>(impl)); } },
        {IID_IUnknown, [](IUnknown *impl) { return create_wrapper(static_cast<IUnknown *>(impl)); } },
    };

    auto it = mapping.find(guid);
    if (it == mapping.end())
        return nullptr;

    return it->second;
}
      
