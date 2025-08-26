// Count the number of prime numbers and armstrong numbers upto a limit

#include <vector>
#include <iostream>
#include <cmath>
#include <vector>

bool isPrime(uint64_t num)
{
  if (num <= 1)
  {
    return false;
  }

  uint64_t limit = std::sqrt(num);
  for (uint64_t i = 2; i <= limit; i++)
  {
    if (num % i == 0)
    {
      return false;
    }
  }
  return true;
}

bool isArmstrong(uint64_t num)
{
  uint64_t originalNumber = num;

  int count = 0;
  uint64_t sum = 0;

  std::vector<uint64_t> nums;

  while (num > 0)
  {
    int lastDigit = num % 10;
    num /= 10;
    nums.push_back(lastDigit);
    count++;
  }

  for (std::size_t i = 0; i < nums.size(); i++)
  {
    nums[i] = pow(nums[i], count);
  }

  for (uint64_t i : nums)
  {
    sum += i;
  }

  return originalNumber == sum;
}

int main()
{
  // Example usage:
  uint64_t limit;
  std::cout << "Enter the limit: ";
  std::cin >> limit;

  int primeCount = 0;
  int armstrongCount = 0;

  for (uint64_t i = 1; i <= limit; i++)
  {
    if (isPrime(i))
    {
      primeCount++;
    }
    if (isArmstrong(i))
    {
      armstrongCount++;
    }
  }

  std::cout << "Number of primes up to " << limit << ": " << primeCount << "\n";
  std::cout << "Number of Armstrong numbers up to " << limit << ": " << armstrongCount << "\n";

  return 0;
}