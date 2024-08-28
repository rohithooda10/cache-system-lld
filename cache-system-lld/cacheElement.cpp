#include "cacheElement.h"

CacheElement::CacheElement(string k, string v, string exp)
{
    key = k;
    value = v;
    expiry = exp;
}