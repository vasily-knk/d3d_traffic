#include "stdafx.h"
#include "common/lib_wrapper.h"
#include "wrappers.h"

namespace
{

lib_wrapper &get_d3d11_lib()
{
    static lib_wrapper d3d11("C:\\windows\\system32\\d3d11.dll");
    return d3d11;
}


PFN_D3D11_CREATE_DEVICE get_create_device_fn()
{
    return get_d3d11_lib().get_function<PFN_D3D11_CREATE_DEVICE>("D3D11CreateDevice");
}


    
}

HRESULT WINAPI D3D11CreateDevice(
    IDXGIAdapter* pAdapter,
    D3D_DRIVER_TYPE DriverType,
    HMODULE Software,
    UINT Flags,
    CONST D3D_FEATURE_LEVEL* pFeatureLevels,
    UINT FeatureLevels,
    UINT SDKVersion,
    ID3D11Device** ppDevice,
    D3D_FEATURE_LEVEL* pFeatureLevel,
    ID3D11DeviceContext** ppImmediateContext)
{
    PFN_D3D11_CREATE_DEVICE f = get_create_device_fn();
   
    auto result = f(pAdapter, DriverType, Software, Flags, pFeatureLevels, FeatureLevels, SDKVersion, ppDevice, pFeatureLevel, ppImmediateContext);
    if (ppDevice != nullptr) *ppDevice = wrap(*ppDevice);
    if (ppImmediateContext != nullptr) *ppImmediateContext = wrap(*ppImmediateContext);

    return result;
}

HRESULT WINAPI D3D11CoreRegisterLayers(const void *unknown0, DWORD unknown1)
{
    typedef HRESULT (WINAPI *pfn_t)(const void *unknown0, DWORD unknown1);
    auto f = get_d3d11_lib().get_function<pfn_t>("D3D11CoreRegisterLayers");
    return f(unknown0, unknown1);
}

SIZE_T WINAPI D3D11CoreGetLayeredDeviceSize(const void *unknown0, DWORD unknown1)
{
    typedef SIZE_T (WINAPI *pfn_t)(const void *unknown0, DWORD unknown1);
    auto f = get_d3d11_lib().get_function<pfn_t>("D3D11CoreGetLayeredDeviceSize");
    return f(unknown0, unknown1);
}

HRESULT WINAPI D3D11CoreCreateLayeredDevice(const void *unknown0, DWORD unknown1, const void *unknown2, REFIID riid, void **ppvObj) 
{
    typedef HRESULT (WINAPI *pfn_t)(const void *unknown0, DWORD unknown1, const void *unknown2, REFIID riid, void **ppvObj);
    auto f = get_d3d11_lib().get_function<pfn_t>("D3D11CoreCreateLayeredDevice");
    return f(unknown0, unknown1, unknown2, riid, ppvObj);
}