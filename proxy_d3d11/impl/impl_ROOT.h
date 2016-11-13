#pragma once

struct impl_ROOT
{
    virtual ~impl_ROOT() {}

    explicit impl_ROOT(void *) {}

private:
    uint32_t magic_ = 117;
};