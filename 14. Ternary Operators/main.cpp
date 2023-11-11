#include <iostream>

int main()
{

  int number;

  std::cin >> number;

  number % 2
      ? std::cout << "Odd"
      : std::cout << "Even"; // If has remainder it's odd if not it's even

  return 0;
}