#include <iostream>

/* 
A pointer is a variable that stores a memory address of a variable
- Can be useful if needing to say where somthing is rather than always moving to it
& Address-of Operator
* Dereference Operator

Null Value - Special value that means somthing has no value, a null pointer (nullptr) is a pointer not pointing at an address
It is good practise to always use null pointers if not assiging a value straight away
*/

int main()
{
    int number = 73;
    int *pNumber = &number;        // Makes pointer pNumber with the address for number - Datatype for pointer SHOULD be same as datatype for variable
    std::cout << *pNumber << "\n"; // You need '*' to output what's inside the variable rather than the address

    std::string foods[3] = {"Pizza", "Pasta", "Burger"};
    std::string *pFoods = foods;  // You don't need '&' for arrays
    std::cout << *pFoods << "\n"; // Gives out first element in the array

    int *pointer = NULL; // Use this to make sure there are no issues, you can then reference it or assign values later on

    if(pointer == NULL) // Check if pointer is null
    {
        std::cout << "Null Pointer";
    }


    return 0;
}