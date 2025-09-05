#ifndef arrayFunctions_h
#define arrayFunctions_h

#include <vector>
#include <iostream>

void printArray(std::vector<u_int64_t> &arr)
{
  for (uint64_t num : arr)
  {
    std::cout << num << " ";
  }
  std::cout << "\n";
}

#endif