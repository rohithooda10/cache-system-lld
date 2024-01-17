#include "cacheElement.h"
CacheElement::CacheElement(string key, string val, string expiry)
{
    this->key = key;
    this->value = val;
    this->expiry = expiry;
}