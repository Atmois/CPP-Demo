#include <iostream>

int main()
{
  std::string name;
  while (name.empty())
  { // While x is true do y
    std::getline(std::cin, name);
  }
  std::cout << name << "\n";

  int age; // Same as while but first tries the code then while
  do
  {
    std::cin >> age;
    std::cout << "Under 18";
  } while (age <= 18);
  std::cout << "Over 18";

  return 0;
}