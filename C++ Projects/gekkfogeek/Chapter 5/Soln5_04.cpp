// Exercise 5.4 Working with a vector container
#include <iostream>
#include <iomanip>
#include <vector>

int main()
{
  std::vector<int> values;
  // Add element values 1 to 100
  for (int i {1}; i <= 100; ++i)
    values.push_back(i);

  size_t count {};                              // Number of output values
  size_t perline {8};                           // Number output perline                 
  for (auto value : values)
  {
    if ((value % 7) == 0 || (value % 13) == 0) continue;
    std::cout << std::setw(5) << value;
    if ((++count % perline) == 0) std::cout << "\n";
  }
  std::cout << std::endl;
}