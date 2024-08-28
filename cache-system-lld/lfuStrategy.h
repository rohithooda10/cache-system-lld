#pragma once
#include "header.h"
#include "evictionStrategy.h"

using namespace std;
class LFUStrategy: public EvictionStrategy {
public:
    void evict(unordered_map<string, CacheElement*> *currCache);
};