#include <iostream>

int main()
{
  int x = 73;

  std::cout << sizeof(x)
            << " bytes." // Shows how much storage space in bytes is taken up by a variable
            << "\n";

  return 0;
}