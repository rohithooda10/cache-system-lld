#pragma once
#include "header.h"
#include "evictionStrategy.h"
#include "cacheElement.h"

class Evictor {
public:
    EvictionStrategy* strategy;
    Evictor(EvictionStrategy* s);
    void evict(unordered_map<string, CacheElement*> *currCache);
};