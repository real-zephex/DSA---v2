// Find the factorial of a given number

#include <iostream>
#include <cmath>

uint64_t factorial(uint64_t num)
{
  uint64_t product = 1;

  for (int i = 1; i <= num; i++)
  {
    product *= i;
  }

  return product;
}

int main()
{
  int num;
  std::cout << "Enter number: ";
  std::cin >> num;

  if (num < 0 || num > 20)
  {
    std::cerr << "The range of the factorial is beyond the scope of a 64 bit integer. Please enter 0-20.";
  }

  uint64_t fact = factorial(num);
  std::cout << "Factorial of " << num << " is " << fact << "\n";
  return 0;
}