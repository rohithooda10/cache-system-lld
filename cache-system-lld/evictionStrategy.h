#pragma once
#include "header.h"
#include "cacheElement.h"

class EvictionStrategy {
public:
    virtual void evict(unordered_map<string, CacheElement*> *currCache) = 0;
};