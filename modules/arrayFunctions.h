#ifndef arrayFunctions_h
#define arrayFunctions_h

#include <vector>
#include <iostream>

void printArray(std::vector<int> &arr)
{
  for (int num : arr)
  {
    std::cout << num << " ";
  }
  std::cout << "\n";
}

#endif