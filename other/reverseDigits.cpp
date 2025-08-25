// Reverse the digits of a given number

#include <iostream>

int reversedNumber(int num)
{
  int reversed = 0;

  while (num > 0)
  {
    int lastDigit = num % 10;
    reversed = reversed * 10 + lastDigit;
    num /= 10;
  }

  return reversed;
}

int main()
{
  int num;
  std::cout << "Enter number: ";
  std::cin >> num;

  int reverse = reversedNumber(num);

  std::cout << "Reversed number is: " << reverse << std::endl;
  return 0;
}