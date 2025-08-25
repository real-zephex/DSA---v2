// Check whether a given number is a palindrome or not.

/*
  One of the approach is to take the input in form of string and apply the same logic as string and DONE but why take the easy route when we can complicate things, right?
*/

#include <iostream>

int reversedNumber(int &num)
{
  int originalNumber = num;
  int reversedNumber = 0;

  while (num > 0)
  {
    int digit = num % 10;
    reversedNumber = reversedNumber * 10 + digit;
    num = num / 10;
  }

  return originalNumber == reversedNumber;
}

int main()
{
  int number;
  std::cout << "Enter number: ";
  std::cin >> number;

  int original = number;
  if (reversedNumber(number))
    std::cout << original << " is a palindrome\n";
  else
    std::cout << original << " is not a palindrome\n";
  return 0;
}
