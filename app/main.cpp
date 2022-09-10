#include <common.h>
#include <iostream>

int main([[maybe_unused]] int argc,[[maybe_unused]] char** argv)
{
    std::cout << "Hello world! The sum of 40 + 1 = " << Utils::sum(40, 1) << std::endl;
    return 0;
}