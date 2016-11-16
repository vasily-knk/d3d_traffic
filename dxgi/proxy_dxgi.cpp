#include "stdafx.h"
#include "d3d_wrappers/d3d_wrappers.h"

HRESULT WINAPI CreateDXGIFactory1(REFIID riid, _Out_ void **ppFactory)
{
    return impl_CreateDXGIFactory1(riid, ppFactory);
}                 


BOOL WINAPI DllMain(
  _In_ HINSTANCE hinstDLL,
  _In_ DWORD     fdwReason,
  _In_ LPVOID    lpvReserved
)
{
    int aaa = 5;
}                        