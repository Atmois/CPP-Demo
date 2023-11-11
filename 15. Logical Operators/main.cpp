#include <iostream>

int main() {

  int temp;

  std::cin >> temp;

  if (temp >= 10 && temp <= 30) // && - And
  {
    std::cout << "Good Temp";
  } else if (!temp < 100 || !temp > -100) // ! - Not
  {
    std::cout << "Impossible Temp";
  } else if (temp > 30 || temp < 10) // || - Or
  {
    std::cout << "Bad Temp";
  }

  else {
    std::cout << "Idk somthing broke";
  }

  return 0;
}