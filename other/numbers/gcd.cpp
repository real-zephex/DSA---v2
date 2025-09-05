// GCD - Greatest Common Divisor

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<uint64_t> factorsFinder(uint64_t num)
{
  std::vector<uint64_t> factors;

  if (num == 1)
    return factors;

  for (int i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      factors.push_back(i);
    }
  }
  
  return factors;
}

std::vector<uint64_t> commonFactorsFinder(std::vector<uint64_t> arr1, std::vector<uint64_t> arr2)
{
  std::vector<uint64_t> cf;
  // for (int i = 0; i < arr1.size(); i++)
  // {
  //   for (int j = 0; j < arr2.size(); j++)
  //   {
  //     if (arr1[i] == arr2[j])
  //     {
  //       cf.push_back(arr1[i]);
  //     }
  //   }
  // }

  std::sort(arr1.begin(), arr1.end());
  std::sort(arr2.begin(), arr2.end());

  std::set_intersection(
      arr1.begin(), arr1.end(),
      arr2.begin(), arr2.end(),
      std::back_inserter(cf));

  return cf;
}

int main()
{
  uint64_t num1, num2;
  std::cout << "Enter numbers separated by space: ";
  std::cin >> num1 >> num2;

  auto factors_1 = factorsFinder(num1);
  auto factors_2 = factorsFinder(num2);

  std::vector<uint64_t> commonFactors = commonFactorsFinder(factors_1, factors_2);
  if (commonFactors.size() > 0)
  {

    uint64_t gcd = commonFactors.back();
    std::cout << "GCD of " << num1 << " and " << num2 << " is " << gcd << "\n";
  }
  else
  {
    std::cout << "No common factors found.\n";
  }

  return 0;
}