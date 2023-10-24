#include <iostream>

using str = std::string;

double getTotal(double prices[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }

    return total;
}

double searchArray(double prices[], int size, double value)
{

    for (int i = 0; i < size; i++)
    {
        if (prices[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    double prices[] = {1.99, 2.99, 3.99, 4.99, 5.99}; // Must all be the same data type
    int size = sizeof(prices) / sizeof(prices[0]); // Get amount of idex's in the array

    std::cout << prices[0] << "\n"; // Index starts from 0
    std::cout << prices[3] << "\n";

    /*
    To show all of an array you can do either of these for loops
    */
    for (int i = 0; i < size; i++)
    {
        std::cout << prices[i] << "\n";
    }
    std::cout << "\n";

    // For Each Loop
    for (double price : prices)
    {
        std::cout << price << "\n";
    }

    /*
    Functions with arrays
    */
    double total = getTotal(prices, size);
    std::cout << "=\n"
              << "$" << total;
    std::cout << "\n\n";

    /*
    Array Searching (Linear Search)
    */
    int index;
    double value = 2.99;
    index = searchArray(prices, size, value);

    if (index != -1)
    {
        std::cout << "Index: " << index;
    }
    else
    {
        std::cout << "Not found";
    }

    return 0;
}