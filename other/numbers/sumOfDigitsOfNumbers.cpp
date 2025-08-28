// Find the sum of all the digits of a number
#include <iostream>

int sumFinder(int &num)
{
  int sum = 0;

  while (num > 0)
  {
    int lastDigit = num % 10;
    sum += lastDigit;
    num /= 10;
  }

  return sum;
}

int main()
{
  int num;

  std::cout << "Enter the number: ";
  std::cin >> num;

  std::cout << "The sum of digits of " << num << " is " << sumFinder(num) << "\n";

  return 0;
}