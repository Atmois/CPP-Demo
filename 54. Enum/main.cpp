#include <iostream>

enum Day {Monday = 0, Tuesday = 1, Wednesday = 2, Thursday = 3, Friday = 4, Saturday = 5, Sunday = 6}; // Sets each option to a number in the enum - Without number it implicitly assigns it from 0

int main() // Allows for using strings in switches & just as preset values - You can also use it to ensure valid inputs
{
    Day today = Monday; // Makes variable using the enum

    return 0;
}