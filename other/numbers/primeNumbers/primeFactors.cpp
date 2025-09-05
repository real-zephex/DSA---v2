// Write a program to find the prime factors of a number

#include <vector>
#include <iostream>
#include <cmath>

std::vector<uint64_t> primeFactors(uint64_t n)
{
  std::vector<uint64_t> factors;

  if (n == 1)
  {
    return factors;
  }

  while (n % 2 == 0)
  {
    factors.push_back(2);
    n /= 2;
  }

  for (uint64_t i = 3; i <= sqrt(n); i += 2)
  {
    while (n % i == 0)
    {
      factors.push_back(i);
      n /= i;
    }
  }

  if (n > 2)
  {
    factors.push_back(n);
  }

  return factors;
}

int main()
{
  uint64_t num;
  std::cout << "Enter number: ";
  std::cin >> num;

  std::vector<uint64_t> factors = primeFactors(num);
  for (auto i : factors)
  {
    std::cout << i << " ";
  }
  std::cout << "\n";

  return 0;
}