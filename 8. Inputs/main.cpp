#include <iostream>

int main()
{

  std::string name;
  std::string alias;

  std::cout << "Alias: ";
  std::cin >> alias; // Normal Input (NO SPACES)

  std::cout << "Full Name: ";
  std::getline(std::cin >> std::ws, name); // Allows for spaces & makes sure to ignore white spaces

  std::cout << "\n"
            << "Your alias is " << alias << "!";
  std::cout << "\n"
            << "Your name is " << name << "!";

  return 0;
}