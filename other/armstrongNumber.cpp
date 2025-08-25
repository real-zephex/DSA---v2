// Check whether a given number is an armstrong number or not

#include <iostream>
#include <vector>
#include <math.h>

bool isArmstrong(int num)
{
  int originalNumber = num;
  int count = 0, sum = 0;
  std::vector<int> nums;

  while (num > 0)
  {
    int lastDigit = num % 10;
    nums.push_back(lastDigit);
    num /= 10;
    count++;
  }

  for (int i = 0; i < nums.size(); i++)
  {
    nums[i] = pow(nums[i], count);
  }

  for (int i : nums)
  {
    sum += i;
  }

  return sum == originalNumber;
}

int main()
{
  int num;
  std::cout << "Enter number: ";
  std::cin >> num;

  bool valid = isArmstrong(num);
  if (valid)
  {
    std::cout << num << " is an armstrong number.";
  }
  else
  {
    std::cout << num << " is not an armstrong number.";
  }

  std::cout << "\n";

  return 0;
}