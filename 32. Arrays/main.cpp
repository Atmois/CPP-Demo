#include <iostream>

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
      if (prices[j] > prices[j + 1])
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
  double prices[10] = {1.99, 5.99, 7.99, 3.99, 8.99, 2.99, 4.99, 6.99, 9.99}; // Must all be the same data type - [10] sets list length limit to 10 - This CAN NOT be changed during runtime
  int size = sizeof(prices) / sizeof(prices[0]);                              // Get amount of index's in the array

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
  std::cout << "\n"
            << "\n";

  /*
  Fill() Function
  */
  const int itemsLimit = 10;
  std::string items[itemsLimit];

  fill(items, items + itemsLimit, "Placeholder"); // Where to being, where to end, what to fill
  for (std::string item : items)
  {
    std::cout << item << " ";
  }
  std::cout << "\n"
            << "\n";

  /*
  Put inputs into arrays
  */
  std::string foods[5];
  std::string foodsTemp;
  int foodSize = sizeof(foods) / sizeof(foods[0]);
  for (int i = 0; i < foodSize; i++)
  {
    std::cout << "Food/Exit(/): ";
    std::getline(std::cin, foodsTemp); // Assigns to temp value to check if user wants to quit program or continue
    if (foodsTemp == "/")
    {
      break;
    }
    else
    {
      foods[i] = foodsTemp;
    }
  }

  for (int i = 0; !foods[i].empty(); i++) // Does not display empty elements
  {
    std::cout << foods[i] << " ";
  }
  std::cout << "\n"
            << "\n";

  /*
  Multi-Dimension Arrays (2D)
  */
  std::string cars[][3] = {// [Row Size][Collumn Size] // Only collumn size required
                           {"Mustang", "Escape", "F150"},
                           {"Corvette", "Equinox", "Silverado"},
                           {"Challanger", "Durang", "Ram"}};

  std::cout << cars[0][0] << "\n"; // Need two index's in [Row Size][Collumn Size] format
  std::cout << cars[2][2] << "\n";
  std::cout << "\n";

  // Output a full 2D array
  int rows = sizeof(cars) / sizeof(cars[0]);
  int columns = sizeof(cars[0]) / sizeof(cars[0][0]);
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      std::cout << cars[i][j] << " ";
    }
    std::cout << '\n';
  }
  return 0;
}