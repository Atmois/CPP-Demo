#include <iostream>


int main() // Find more methods here -> https://cplusplus.com/reference/string/string/
{
    std::string name;

    std::getline(std::cin, name);

    if (name.empty())
    { // Checks if var is too long
        std::cout << "No Input";
    }
    else if (name.length() > 12)
    { // Checks legnth of string
        std::cout << "Too Long";
        name.clear(); // Clear string
    }
    else
    {
        name.append("!"); // Appends somthing to the end of the string

        std::cout << name.at(0) << "\n"; // Gets the value at the position in the string

        std::cout << name.find(" ") << "\n"; // Finds where the given character is in a string

        name.insert(0, "!"); // Inserts somthing to a given point in a string
        std::cout << name << "\n";

        name.erase(0, 1); // Removes all characters between 2 indexes (Example shows only first char.)
        std::cout << name << "\n";
    }

    return 0;
}