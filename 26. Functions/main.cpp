#include <iostream>

using str = std::string; 

/*
Any extra functions need to be above the main function.
To pass arguments put var type before var name in function()
Functions can share names but must have differnt paramters
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