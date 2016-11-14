#pragma once

#include "base_ID3DUserDefinedAnnotation.h"

struct impl_ID3DUserDefinedAnnotation
    : base_ID3DUserDefinedAnnotation
{
    explicit impl_ID3DUserDefinedAnnotation(ID3DUserDefinedAnnotation *impl);
};
      