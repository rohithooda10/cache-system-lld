#include "cache.h"
Cache::Cache(int cap, Evictor* evictor)
{
    this->capacity = cap;
    this->evictor = evictor;
}
void Cache::put(string key, string value, string expiry)
{
    if(this->currentCache.size() == capacity)
        this->eviction();
    CacheElement* newCacheElement = new CacheElement(key, value, expiry);
    this->currentCache[key] = newCacheElement;
}
string Cache::get(string key)
{
    if(this->currentCache.find(key) == this->currentCache.end())
    {
        return "Not in cache";
    }
    return this->currentCache[key]->value;
}
void Cache::eviction()
{
    string key = this->evictor->evict();
    this->currentCache.erase(key);
}