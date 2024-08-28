#include "header.h"
#include "lruStrategy.h"

using namespace std;
void LRUStrategy::evict(unordered_map<string, CacheElement*> *currCache) {
    currCache->erase("IndiaGate");
}