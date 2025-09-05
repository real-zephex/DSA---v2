#include <iostream>

int main()
{

  for (int i = 0; i < 8; i++)
  {
    std::cout << "*";
  }
  std::cout << "\n";
  for (int i = 0; i < 8; i++)
  {
    if (i == 0 || i == 7)
    {
      std::cout << "*";
    }
    else
    {
      std::cout << " ";
    }
  }
  std::cout << "\n";
  for (int i = 0; i < 8; i++)
  {
    std::cout << "*";
  }
  std::cout << "\n";

  return 0;
}