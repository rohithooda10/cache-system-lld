#include "header.h"
#include "cache.h"
#include "evictor.h"
#include "lruEvictionPolicy.h"
#include <vector>

using namespace std;

int main()
{
    EvictionPolicyStrategy* strategy = new LruEvictionPolicy();
    Evictor* evictor = new Evictor(strategy);
    Cache* cache = new Cache(2, evictor);
    cache->put("Rohit", "IITH", "3600");
    cache->put("Hooda", "Mumbai", "3600");
    cout<<cache->get("Rohit")<<endl;
    cache->put("AnotherKey", "Hyd", "3600");
    // cache->eviction();
    cout<<cache->get("Rohit")<<endl;
    cout<<cache->get("Hooda")<<endl;
    cout<<cache->get("AnotherKey")<<endl;
    return 0;
}