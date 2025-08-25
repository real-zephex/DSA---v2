// Count the number of digits in a number

#include <iostream>

int numberOfDigits(int num)
{
  int count = 0;

  while (num > 0)
  {
    int lastDigit = num % 10;
    num /= 10;
    count++;
  }

  return count;
}

int main()
{
  int num;
  std::cout << "Enter number: ";
  std::cin >> num;

  int count = numberOfDigits(num);

  std::cout << "Number of digits in " << num << " is " << count << "\n";
  return 0;
}