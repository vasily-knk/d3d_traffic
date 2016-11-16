#pragma once

#include "common/dyn_lib.h"

#ifdef D3D_WRAPPERS_EXPORTS
# define D3D_WRAPPERS_API __HELPER_DL_EXPORT
#else
# define D3D_WRAPPERS_API __HELPER_DL_IMPORT
#endif

D3D_WRAPPERS_API HRESULT impl_D3D11CreateDevice(
    _In_opt_ IDXGIAdapter* pAdapter,
    D3D_DRIVER_TYPE DriverType,
    HMODULE Software,
    UINT Flags,
    _In_reads_opt_( FeatureLevels ) CONST D3D_FEATURE_LEVEL* pFeatureLevels,
    UINT FeatureLevels,
    UINT SDKVersion,
    _Out_opt_ ID3D11Device** ppDevice,
    _Out_opt_ D3D_FEATURE_LEVEL* pFeatureLevel,
    _Out_opt_ ID3D11DeviceContext** ppImmediateContext );

D3D_WRAPPERS_API HRESULT impl_D3D11CreateDeviceAndSwapChain(
    _In_opt_ IDXGIAdapter* pAdapter,
    D3D_DRIVER_TYPE DriverType,
    HMODULE Software,
    UINT Flags,
    _In_reads_opt_( FeatureLevels ) CONST D3D_FEATURE_LEVEL* pFeatureLevels,
    UINT FeatureLevels,
    UINT SDKVersion,
    _In_opt_ CONST DXGI_SWAP_CHAIN_DESC* pSwapChainDesc,
    _Out_opt_ IDXGISwapChain** ppSwapChain,
    _Out_opt_ ID3D11Device** ppDevice,
    _Out_opt_ D3D_FEATURE_LEVEL* pFeatureLevel,
    _Out_opt_ ID3D11DeviceContext** ppImmediateContext);

D3D_WRAPPERS_API HRESULT impl_D3D11CoreRegisterLayers(const void *unknown0, DWORD unknown1);
D3D_WRAPPERS_API SIZE_T impl_D3D11CoreGetLayeredDeviceSize(const void *unknown0, DWORD unknown1);
D3D_WRAPPERS_API HRESULT impl_D3D11CoreCreateLayeredDevice(const void *unknown0, DWORD unknown1, const void *unknown2, REFIID riid, void **ppvObj);

D3D_WRAPPERS_API HRESULT impl_CreateDXGIFactory1(REFIID riid, _Out_ void **ppFactory);
