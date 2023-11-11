#include <iostream>
#include <cmath>

int main()
{
  double x = 3.1;
  double y = 4;
  double z;

  z = std::max(x, y); // Shows largest number
  z = std::min(x, y); // Shows smallest number

  // Cmath - Find more at https://cplusplus.com/reference/cmath/
  z = pow(2, 3); // Does to the power of (2^3)
  z = sqrt(9);   // Square root
  z = abs(-3);   // Gives value as positive number
  z = round(x);  // Round normally
  z = ceil(x);   // Force rounds up
  z = floor(x);  // Force rounds down

  return 0;
}