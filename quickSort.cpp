#include <iostream>
#include <vector>

int partition(std::vector<int> &arr, int low, int high)
{
  int pivot = arr[high];
  int j = low - 1;

  for (int i = low; i < high; i++)
  {
    if (arr[i] <= pivot)
    {
      j++;
      std::swap(arr[i], arr[j]);
    }
  }
  std::swap(arr[j + 1], arr[high]);
  return j + 1;
};

void quickSort(std::vector<int> &arr, int low, int high)
{
  if (low < high)
  {
    int index = partition(arr, low, high);
    quickSort(arr, low, index - 1);
    quickSort(arr, index + 1, high);
  }
}
int main()
{
  std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

  std::cout << "Original array: ";
  for (int num : arr)
  {
    std::cout << num << " ";
  }
  std::cout << "\n";

  quickSort(arr, 0, arr.size() - 1);

  std::cout << "Sorted array: ";
  for (int num : arr)
  {
    std::cout << num << " ";
  }
  std::cout << "\n";

  return 0;
}