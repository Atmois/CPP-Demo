#include <iostream>

std::string exampleGlobalVar = "Example"; // Global Variable that works in all functions.

int main()
{ // Anything within the main function is LOCAL, same applies if it is in any other function or
  // namespace.

  // Int - Whole Number
  int x;      // Decleration
  x = 73;     // Assignment
  int y = 37; // Decleration & Assignment

  // Double - Decimals
  double price = 7.99;

  // Char - Single Character
  char letter = 'Z'; // Only single quotes

  // Bool - True or False - 1 = True / 0 = False
  bool boolean = true;

  // String - A string lol
  std::string userName = "Atmois"; // See 5. Type Alias's for a way to shorten this

  // Consts - Can't change var 
  const double pi = 3.14159;
  /*
  When passing into functions as parameters make sure to put const in it
  This is especially useful when it is a memory address or pointer
  */

  return 0;
}