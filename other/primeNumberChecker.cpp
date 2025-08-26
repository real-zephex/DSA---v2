// Check whether a given number is prime or not

#include <iostream>
#include <cmath>

bool isPrime(uint64_t &num)
{
  if (num < 1 || num == 1)
  {
    return false;
  }

  uint64_t sqrtNum = std::sqrt(num);
  for (std::size_t i = 2; i <= sqrtNum; i++)
  {
    if (num % i == 0)
    {
      std::cout << "First factor found: " << i << "\n";
      return false;
    }
  }

  return true;
}
int main()
{
  uint64_t num;

  std::cout << "Enter number: ";
  std::cin >> num;

  bool primeCheck = isPrime(num);

  if (primeCheck)
  {
    std::cout << num << " is a prime number.";
  }
  else
  {
    std::cout << num << " is not a prime number.";
  }
  std::cout << "\n";

  return 0;
}