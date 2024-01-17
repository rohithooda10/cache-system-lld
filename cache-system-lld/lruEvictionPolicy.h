#pragma once
#include "evictionPolicyStrategy.h"
using namespace std;
class LruEvictionPolicy: public EvictionPolicyStrategy
{
public:
    string evictElement();
};