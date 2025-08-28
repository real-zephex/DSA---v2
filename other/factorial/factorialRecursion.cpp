// Find the factorial of a number using recursion
#include <iostream>

uint64_t factorial(uint64_t num)
{
  if (num == 0 || num == 1)
  {
    return 1;
  }
  else
  {
    return (num * factorial(num - 1));
  }
}

int main()
{
  uint64_t num;
  std::cout << "Enter number: ";
  std::cin >> num;

  int fact = factorial(num);

  std::cout << fact << "\n";

  return 0;
}