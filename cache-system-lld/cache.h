#pragma once
#include "header.h"
#include "cacheElement.h"
#include "evictor.h"

class Cache {
public:
    Evictor *evictor;
    int capacity;
    Cache(int cap, Evictor* e);
    unordered_map<string, CacheElement*> currCache;
    string get(string key);
    void put(CacheElement* ele);
};