#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3D10Multithread.h"

ID3D10Multithread *create_wrapper_inner(ID3D10Multithread *impl)
{
    return new impl_ID3D10Multithread(impl);
}

impl_ID3D10Multithread::impl_ID3D10Multithread(ID3D10Multithread *impl)
    : base_ID3D10Multithread(impl)
{

}
      