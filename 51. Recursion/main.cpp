#include <iostream>

void countdown(int counts)
{
    if (counts > 0)
    {
        std::cout << counts << "\n";
        countdown(counts - 1);
    }
}

int main() // Recursion is cleaner and better for sorting/searching algorithms BUT uses more memory (May end in stack overflow) and is slower than iteration - Basically just a function that calls itself 
{
    int counts;
    std::cin >> counts;
    std::cout << "\n";
    countdown(counts);

    return 0;
}