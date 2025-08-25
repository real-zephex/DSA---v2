#include "../modules/arrayFunctions.h"
#include <iostream>
#include <vector>

void selectionSort(std::vector<int> &arr)
{
  int size = arr.size();

  for (int i = 0; i < size; i++)
  {
    int min = i;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }

    if (min != i)
    {
      std::swap(arr[i], arr[min]);
    }
  }
}

int main()
{
  std::vector<int> arr = {2, 10, 1, 5, 4};
  std::cout << "Before sorting: \n";
  printArray(arr);

  selectionSort(arr);
  std::cout << "After sorting: \n";
  printArray(arr);
}