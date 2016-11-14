#include "stdafx.h"
#include "../wrappers.h"

#include "impl_ID3DUserDefinedAnnotation.h"

ID3DUserDefinedAnnotation *create_wrapper_inner(ID3DUserDefinedAnnotation *impl)
{
    return new impl_ID3DUserDefinedAnnotation(impl);
}

impl_ID3DUserDefinedAnnotation::impl_ID3DUserDefinedAnnotation(ID3DUserDefinedAnnotation *impl)
    : base_ID3DUserDefinedAnnotation(impl)
{

}
      