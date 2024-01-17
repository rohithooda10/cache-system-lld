#pragma once
#include "header.h"
using namespace std;
class EvictionPolicyStrategy
{
public:
    virtual string evictElement() = 0;
};