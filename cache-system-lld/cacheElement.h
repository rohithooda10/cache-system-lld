#ifndef CACHEELEMENT_H
#define CACHEELEMENT_H
#include "header.h"
using namespace std;
class CacheElement
{
public:
    string key, value, expiry;
    CacheElement(string key, string val, string expiry);
};
#endif