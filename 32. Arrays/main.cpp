#include <iostream>

using str = std::string;

double getTotal(double prices[], int size)
{
  double total = 0;
  for (int i = 0; i < size; i++) // Adds all the numbers within the array
  {
    total += prices[i];
  }

  return total;
}

double searchArray(double prices[], int size, double value)
{

  for (int i = 0; i < size;
       i++) // Checks every value in the array for the value
  {
    if (prices[i] == value)
    {
      return i;
    }
  }
  return -1;
}

void sortArray(double prices[], int size)
{
  double tempValue;
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - 1; j++)
    {
      if (prices[j] >
          prices[j + 1])
      { // Change to less than to get in descending order
        tempValue = prices[j];
        prices[j] = prices[j + 1];
        prices[j + 1] = tempValue;
      }
    }
  }
}

int main()
{
  double prices[] = {1.99, 5.99, 7.99, 3.99, 8.99,
                     2.99, 4.99, 6.99, 9.99}; // Must all be the same data type
  int size =
      sizeof(prices) / sizeof(prices[0]); // Get amount of idex's in the array

  std::cout << prices[0] << "\n"; // Index starts from 0
  std::cout << prices[3] << "\n";

  /*
    To show all of an array you can do either of these for loops
  */
  for (int i = 0; i < size; i++)
  {
    std::cout << prices[i] << "\n";
  }
  std::cout << "\n";

  // For Each Loop
  for (double price : prices)
  {
    std::cout << price << "\n";
  }

  /*
    Functions with arrays
  */
  double total = getTotal(prices, size);
  std::cout << "=\n"
            << "$" << total;
  std::cout << "\n\n";

  /*
    Array Searching (Linear Search)
  */
  int index;
  double value = 2.99;
  index = searchArray(prices, size, value);

  if (index != -1)
  {
    std::cout << "Index: " << index << "\n";
  }
  else
  {
    std::cout << "Not found"
              << "\n";
  }

  /*
    Array Sorting (Bubble Sort)
  */
  sortArray(prices, size);
  for (double price : prices)
  {
    std::cout << price << " ";
  }

  /*
    Fill() Function
  */
  str items[10];

  return 0;
}