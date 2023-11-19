#include <iostream>

int main() // Used for assiging memory during runtime, allows the memrory to be flexible
{
    int *pNum = NULL; 
    pNum = new int; // Allocates memory in the heap rather than the stack

    std::cin >> *pNum;
    std::cout << *pNum;

    delete pNum; // Deletes the memory to prevent memory leaks

    // With arrays
    std::string *pFoods = NULL;
    int size;

    std::cout << "Size: ";
    std::cin >> size;

    pFoods = new std::string[size]; // Creates a new array with whatever size is needed

    for (int i = 0; i < size; i++)
    {
        std::cin >> pFoods[i];
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << pFoods[i] << "\n";
    }

    delete[] pFoods; // [] needed to delete arrays

    return 0;
}