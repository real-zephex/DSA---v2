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
  std::vector<int> arr = {3, 10, 1, 2, 34, 5};

  std::cout << "Before sorting: \n";
  for (int i : arr)
  {
    std::cout << i << " ";
  }
  insertionSort(arr);

  std::cout << "\nAfter sorting: \n";
  for (int i : arr)
  {
    std::cout << i << " ";
  }
}