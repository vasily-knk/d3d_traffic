#pragma once

struct GUIDComparer
{
    bool operator()(const GUID & Left, const GUID & Right) const
    {
        // comparison logic goes here
        return memcmp(&Left , &Right,sizeof(Right)) < 0;
    }
};

template<typename T>
using guid_map_t = std::map<GUID, T, GUIDComparer>;