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
      };
    }

    if (min != i)
    {
      std::swap(arr[i], arr[min]);
    }
  };
}

int main()
{
  std::vector<int> arr = {3, 10, 1, 2, 34, 5};

  std::cout << "Before sorting: \n";
  for (int i : arr)
  {
    std::cout << i << " ";
  }
  selectionSort(arr);

  std::cout << "\nAfter sorting: \n";
  for (int i : arr)
  {
    std::cout << i << " ";
  }
}