#include <iostream>

using str = std::string;

int main()
{
    str countries[] = {"Italy", "Finland", "Japan", "Australia", "Canada"}; // Must all be the same data type

    std::cout << countries[0] << "\n";
    std::cout << countries[1] << "\n";
    std::cout << countries[2] << "\n";
    std::cout << countries[3] << "\n";
    std::cout << countries[4] << "\n";

    return 0;
}