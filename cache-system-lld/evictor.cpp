#include "evictor.h"
using namespace std;
Evictor::Evictor(EvictionPolicyStrategy* policy)
{
    this->policy = policy;
}
string Evictor::evict()
{
    return this->policy->evictElement();
}