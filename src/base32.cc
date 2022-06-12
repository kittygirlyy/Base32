#include <cstring>
#include <string>
#include "../includes/base32.hh"

long Base32::decode(std::string b32)
{
    return strtol( b32.c_str(), 0, 32 );
}

std::string Base32::encode(long i)
{
    unsigned long u = *(reinterpret_cast<unsigned long*>(&i));
    std::string b32;

    do
    {
        int d = u % 32;
        if (d < 10)
        {
            b32.insert( 0, 1, '0' + d );
        } else {
            b32.insert( 0, 1, 'a' + d - 10 );
        }
        u /= 32;
    } while( u > 0 );

    return b32;
}