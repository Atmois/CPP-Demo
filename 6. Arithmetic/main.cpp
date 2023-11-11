#include <iostream>
#include <string>

int main()
{

    int number = 2; // All arithmetic follows BIDMAS :D

    // Multiply
    number = number * 2;
    number *= 2; // number * 2

    // Divide
    number = number / 2;
    number /= 2; // number / 2

    // Add
    number = number + 2;
    number += 2; // number + 2
    number++;    // number + 1

    // Subtract
    number = number - 2;
    number -= 2; // number - 2
    number--;    // number - 1

    // Mod - Only shows remainder
    double remainder = number % 3;

    return 0;
}