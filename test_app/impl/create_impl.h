#pragma once

ID3D11DeviceChild *create_wrapper_inner(ID3D11DeviceChild *impl);
ID3D11DepthStencilState *create_wrapper_inner(ID3D11DepthStencilState *impl);
ID3D11BlendState *create_wrapper_inner(ID3D11BlendState *impl);
ID3D11RasterizerState *create_wrapper_inner(ID3D11RasterizerState *impl);
ID3D11Resource *create_wrapper_inner(ID3D11Resource *impl);
ID3D11Buffer *create_wrapper_inner(ID3D11Buffer *impl);
ID3D11Texture1D *create_wrapper_inner(ID3D11Texture1D *impl);
ID3D11Texture2D *create_wrapper_inner(ID3D11Texture2D *impl);
ID3D11Texture3D *create_wrapper_inner(ID3D11Texture3D *impl);
ID3D11View *create_wrapper_inner(ID3D11View *impl);
ID3D11ShaderResourceView *create_wrapper_inner(ID3D11ShaderResourceView *impl);
ID3D11RenderTargetView *create_wrapper_inner(ID3D11RenderTargetView *impl);
ID3D11DepthStencilView *create_wrapper_inner(ID3D11DepthStencilView *impl);
ID3D11UnorderedAccessView *create_wrapper_inner(ID3D11UnorderedAccessView *impl);
ID3D11VertexShader *create_wrapper_inner(ID3D11VertexShader *impl);
ID3D11HullShader *create_wrapper_inner(ID3D11HullShader *impl);
ID3D11DomainShader *create_wrapper_inner(ID3D11DomainShader *impl);
ID3D11GeometryShader *create_wrapper_inner(ID3D11GeometryShader *impl);
ID3D11PixelShader *create_wrapper_inner(ID3D11PixelShader *impl);
ID3D11ComputeShader *create_wrapper_inner(ID3D11ComputeShader *impl);
ID3D11InputLayout *create_wrapper_inner(ID3D11InputLayout *impl);
ID3D11SamplerState *create_wrapper_inner(ID3D11SamplerState *impl);
ID3D11Asynchronous *create_wrapper_inner(ID3D11Asynchronous *impl);
ID3D11Query *create_wrapper_inner(ID3D11Query *impl);
ID3D11Predicate *create_wrapper_inner(ID3D11Predicate *impl);
ID3D11Counter *create_wrapper_inner(ID3D11Counter *impl);
ID3D11ClassInstance *create_wrapper_inner(ID3D11ClassInstance *impl);
ID3D11ClassLinkage *create_wrapper_inner(ID3D11ClassLinkage *impl);
ID3D11CommandList *create_wrapper_inner(ID3D11CommandList *impl);
ID3D11DeviceContext *create_wrapper_inner(ID3D11DeviceContext *impl);
ID3D11VideoDecoder *create_wrapper_inner(ID3D11VideoDecoder *impl);
ID3D11VideoProcessorEnumerator *create_wrapper_inner(ID3D11VideoProcessorEnumerator *impl);
ID3D11VideoProcessor *create_wrapper_inner(ID3D11VideoProcessor *impl);
ID3D11AuthenticatedChannel *create_wrapper_inner(ID3D11AuthenticatedChannel *impl);
ID3D11CryptoSession *create_wrapper_inner(ID3D11CryptoSession *impl);
ID3D11VideoDecoderOutputView *create_wrapper_inner(ID3D11VideoDecoderOutputView *impl);
ID3D11VideoProcessorInputView *create_wrapper_inner(ID3D11VideoProcessorInputView *impl);
ID3D11VideoProcessorOutputView *create_wrapper_inner(ID3D11VideoProcessorOutputView *impl);
ID3D11VideoContext *create_wrapper_inner(ID3D11VideoContext *impl);
ID3D11VideoDevice *create_wrapper_inner(ID3D11VideoDevice *impl);
ID3D11Device *create_wrapper_inner(ID3D11Device *impl);
IUnknown *create_wrapper_inner(IUnknown *impl);

ID3D11DeviceChild *unwrap_inner(ID3D11DeviceChild *wrapper);
ID3D11DepthStencilState *unwrap_inner(ID3D11DepthStencilState *wrapper);
ID3D11BlendState *unwrap_inner(ID3D11BlendState *wrapper);
ID3D11RasterizerState *unwrap_inner(ID3D11RasterizerState *wrapper);
ID3D11Resource *unwrap_inner(ID3D11Resource *wrapper);
ID3D11Buffer *unwrap_inner(ID3D11Buffer *wrapper);
ID3D11Texture1D *unwrap_inner(ID3D11Texture1D *wrapper);
ID3D11Texture2D *unwrap_inner(ID3D11Texture2D *wrapper);
ID3D11Texture3D *unwrap_inner(ID3D11Texture3D *wrapper);
ID3D11View *unwrap_inner(ID3D11View *wrapper);
ID3D11ShaderResourceView *unwrap_inner(ID3D11ShaderResourceView *wrapper);
ID3D11RenderTargetView *unwrap_inner(ID3D11RenderTargetView *wrapper);
ID3D11DepthStencilView *unwrap_inner(ID3D11DepthStencilView *wrapper);
ID3D11UnorderedAccessView *unwrap_inner(ID3D11UnorderedAccessView *wrapper);
ID3D11VertexShader *unwrap_inner(ID3D11VertexShader *wrapper);
ID3D11HullShader *unwrap_inner(ID3D11HullShader *wrapper);
ID3D11DomainShader *unwrap_inner(ID3D11DomainShader *wrapper);
ID3D11GeometryShader *unwrap_inner(ID3D11GeometryShader *wrapper);
ID3D11PixelShader *unwrap_inner(ID3D11PixelShader *wrapper);
ID3D11ComputeShader *unwrap_inner(ID3D11ComputeShader *wrapper);
ID3D11InputLayout *unwrap_inner(ID3D11InputLayout *wrapper);
ID3D11SamplerState *unwrap_inner(ID3D11SamplerState *wrapper);
ID3D11Asynchronous *unwrap_inner(ID3D11Asynchronous *wrapper);
ID3D11Query *unwrap_inner(ID3D11Query *wrapper);
ID3D11Predicate *unwrap_inner(ID3D11Predicate *wrapper);
ID3D11Counter *unwrap_inner(ID3D11Counter *wrapper);
ID3D11ClassInstance *unwrap_inner(ID3D11ClassInstance *wrapper);
ID3D11ClassLinkage *unwrap_inner(ID3D11ClassLinkage *wrapper);
ID3D11CommandList *unwrap_inner(ID3D11CommandList *wrapper);
ID3D11DeviceContext *unwrap_inner(ID3D11DeviceContext *wrapper);
ID3D11VideoDecoder *unwrap_inner(ID3D11VideoDecoder *wrapper);
ID3D11VideoProcessorEnumerator *unwrap_inner(ID3D11VideoProcessorEnumerator *wrapper);
ID3D11VideoProcessor *unwrap_inner(ID3D11VideoProcessor *wrapper);
ID3D11AuthenticatedChannel *unwrap_inner(ID3D11AuthenticatedChannel *wrapper);
ID3D11CryptoSession *unwrap_inner(ID3D11CryptoSession *wrapper);
ID3D11VideoDecoderOutputView *unwrap_inner(ID3D11VideoDecoderOutputView *wrapper);
ID3D11VideoProcessorInputView *unwrap_inner(ID3D11VideoProcessorInputView *wrapper);
ID3D11VideoProcessorOutputView *unwrap_inner(ID3D11VideoProcessorOutputView *wrapper);
ID3D11VideoContext *unwrap_inner(ID3D11VideoContext *wrapper);
ID3D11VideoDevice *unwrap_inner(ID3D11VideoDevice *wrapper);
ID3D11Device *unwrap_inner(ID3D11Device *wrapper);
IUnknown *unwrap_inner(IUnknown *wrapper);

template<typename T>
T *create_wrapper(T *impl)
{
    return create_wrapper_inner(impl);
}

template<typename T>
T *unwrap(T *impl)
{
    if (!impl)
        return nullptr;

    return unwrap_inner(impl);
}


