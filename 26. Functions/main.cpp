#include <iostream>

/*
Any extra functions need to be above the main function.
To pass arguments put var type before var name in function().
Functions can share names but must have differnt paramters.
Function prefix before name should be named by the datatype processed within the function or 'void'..
*/

double add(double num1, double num2)
{
  double ans = num1 + num2;
  return ans;
}

int main()
{
  double num1;
  double num2;

  std::cin >> num1;
  std::cin >> num2;

  double ans = add(
      num1, num2); // Ensure you set a function = to a var if taking a return
  std::cout << ans;

  return 0;
}