#include <iostream>
#include "../includes/base32.hh"

int main()
{
    Base32 miaou;
    std::string encoded = miaou.encode(32*32*11 + 32*20 + 5);
    std::cout << encoded << "\n";
    std::cout << miaou.decode(encoded);
    return 0;
}