#pragma once
#include "header.h"
#include "evictionPolicyStrategy.h"
class Evictor
{
public:
    EvictionPolicyStrategy* policy;
    Evictor(EvictionPolicyStrategy* policy);
    string evict();
};