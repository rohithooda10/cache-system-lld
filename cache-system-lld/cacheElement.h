#pragma once
#include "header.h"
using namespace std;

class CacheElement {
public:
    string key, value, expiry;
    CacheElement(string k, string v, string exp);
};