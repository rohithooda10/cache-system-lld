#include "header.h"
#include "evictor.h"
using namespace std;
Evictor::Evictor(EvictionStrategy* e) {
    strategy = e;
}
void Evictor::evict(unordered_map<string, CacheElement*> *currCache){
    strategy->evict(currCache);
}