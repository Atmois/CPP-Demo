#include <iostream>

int main()
{

  for (int i = 1; i <= 25; i++)
  {
    if (i == 20)
    {
      break; // Does not carry on with the loop
    }
    else if (i == 13)
    {
      continue; // Skips that iteration
    }
    std::cout << i << "\n";
  }
  return 0;
}