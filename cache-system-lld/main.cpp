#include "header.h"
#include "cache.h"
#include "evictionStrategy.h"
#include "lruStrategy.h"
#include "evictor.h"

using namespace std;
int main()
{
    EvictionStrategy* strategy = new LRUStrategy();
    Evictor* evictor = new Evictor(strategy);
    Cache* cache = new Cache(2, evictor);
    cache->put(new CacheElement("IndiaGate","Delhi","100"));
    cache->put(new CacheElement("Gateway","Mumbai","100"));
    cout<<cache->get("IndiaGate")<<endl;
    cout<<cache->get("Gateway")<<endl;
    cache->put(new CacheElement("TajMahal","Agra","100"));
    cout<<cache->get("IndiaGate")<<endl;
    cout<<cache->get("Gateway")<<endl;
    cout<<cache->get("TajMahal")<<endl;
    return 0;
}