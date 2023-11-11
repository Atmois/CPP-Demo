#include <iostream>

namespace one
{
  int x = 1;
}

namespace two
{
  int x = 2;
}

int main()
{
  using namespace two; // Anything below is in 'two' namespace

  int x = 0;
  std::cout << one::x; // Uses 'x' from 'one' namespace

  return 0;
}