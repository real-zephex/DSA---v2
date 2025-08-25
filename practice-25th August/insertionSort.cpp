#include "../modules/arrayFunctions.h"
#include <iostream>
#include <vector>

void insertionSort(std::vector<int> &arr)
{
  int size = arr.size();

  for (int i = 1; i < size; i++)
  {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = key;
  }
};

int main()
{
  std::vector<int> arr = {2, 10, 1, 5, 4};
  std::cout << "Before sorting: \n";
  printArray(arr);

  insertionSort(arr);
  std::cout << "After sorting: \n";
  printArray(arr);
}