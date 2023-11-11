#include <iostream>

// Fun Fact: When you get the address you can convert it to denary and see how many bits of memory each variable takes up

int main()
{
    std::string name = "Atmo";
    std::cout << &name; // Prefix var with & to get memory address - Outputs in hexadecimal format

    return 0;
}