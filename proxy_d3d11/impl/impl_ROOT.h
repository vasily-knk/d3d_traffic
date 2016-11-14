#pragma once

#include "../wrappers.h"

struct impl_ROOT
    : ROOT
{
    virtual ~impl_ROOT() {}

    explicit impl_ROOT(void *) {}
};