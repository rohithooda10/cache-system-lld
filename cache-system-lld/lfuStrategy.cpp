#include "header.h"
#include "lfuStrategy.h"

using namespace std;
void LFUStrategy::evict(unordered_map<string, CacheElement*> *currCache) {
    currCache->erase("IndiaGate");
}