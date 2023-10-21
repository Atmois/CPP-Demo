#include <iostream>

using str = std::string; 

int main()
{
    int age;
    std::cout << "Age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "18+";
    }
    else if(age < 0){
        std::cout << "Invalid Number for 'age'";
    }
    else{
        std::cout << "Under 18";
    }


    return 0;
}