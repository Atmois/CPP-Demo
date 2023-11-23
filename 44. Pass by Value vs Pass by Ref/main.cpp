#include <iostream>

void swapVal(int x, int y)
{
    /*
    Switches x & y
    */
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swapRef(int &x, int &y)
{
    /*
    Switches x & y
    */
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() // Note: You can do this with arrays, structs or variables
{
    int x = 1;
    int y = 2;
    std::cout << x << " " << y << "\n";

    swapVal(x, y); // Passing by value - Will not swap it because it makes copy not actually changing it
    std::cout << x << " " << y << "\n\n";

    swapRef(x, y); // Passing by reference - Better method
    std::cout << x << " " << y << "\n";

    return 0;
}