#pragma once
#include "header.h"
#include "cacheElement.h"
#include "evictor.h"
class Cache
{
public:
    Evictor* evictor;
    int capacity;
    unordered_map<string, CacheElement*> currentCache;
    Cache(int capacity, Evictor* evictor);
    void put(string key, string val, string expiry);
    string get(string key);
    void eviction();
};