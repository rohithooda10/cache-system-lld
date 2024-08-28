#include "header.h"
#include "cache.h"

using namespace std;

Cache::Cache(int cap, Evictor* e){
    capacity = cap;
    evictor = e;
}

string Cache::get(string key) {
    if(currCache.find(key) != currCache.end())
        return currCache[key]->value;
    return "NOT FOUND";
}

void Cache::put(CacheElement *ele)
{
    if(capacity == 0)
    {
        evictor->evict(&currCache);
    }
    capacity--;
    currCache[ele->key] = ele;
}