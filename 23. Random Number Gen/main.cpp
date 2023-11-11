#include <ctime>
#include <iostream>

int main() // Not truly random but close enough
{

  srand(time(0));

  int num = rand() % 6 + 1; // First number is max value to output and + 1 is required cause funny C++ moment

  std::cout << num;

  return 0;
}