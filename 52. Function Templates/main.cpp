#include <iostream>

template <typename T, typename U> // Makes the T/U work 


auto max(T x, U y) // Works with up to 2 datatypes, 'auto' makes sure the function uses the right datatype - If both will always be the same you can use 'T' in place of 'U' & 'auto'
{
    return (x > y) ? x : y;
}

int main() // Basically allows it so any datatype can be passed and it will work without needing to change the function - Used to easily make overloaded functions
{
    int x = 1;
    int y = 2;

    std::cout << max(x, y); 
    
    return 0;
}