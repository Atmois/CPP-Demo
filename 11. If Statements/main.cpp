#include <iostream>

int main()
{
  int age;
  std::cout << "Age: ";
  std::cin >> age;

  if (age >= 18)
  { // Condition in () and process in {}
    std::cout << "18+";
  }
  else if (age < 0)
  {
    std::cout << "Invalid Number for 'age'";
  }
  else
  { // No conditions
    std::cout << "Under 18";
  }

  return 0;
}