#include <iostream>

using str = std::string; 

/*
Any extra functions need to be above the main function.
To pass arguments put var type before var name in function()
*/

void exampleFunction(str name) { 
    std::cout << "Hello " << name << "!" ;
}

int main()
{
    str name;
    std::cin >> name;

    exampleFunction(name);

    return 0;
}