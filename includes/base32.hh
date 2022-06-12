#pragma once
#include <iostream>

class Base32
{
    public:
        long decode(std::string b32);
        std::string encode(long i);
};