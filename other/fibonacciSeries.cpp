// Print the fibonacci series
#include <iostream>
#include <vector>

int fibonacciSeries(uint64_t &x, uint64_t &y)
{
  uint64_t sum = x + y;
  x = y;
  y = sum;

  return sum;
}

int main()
{
  int limit;
  std::cout << "How many numbers of the series do you want: ";
  std::cin >> limit;

  std::vector<uint64_t> series;
  uint64_t x = 0, y = 1;

  series.push_back(0);
  series.push_back(1);

  for (std::size_t i = 2; i < limit; i++)
  {
    uint64_t nextNum = fibonacciSeries(x, y);
    series.push_back(nextNum);
  }

  for (uint64_t i : series)
  {
    std::cout << i << " ";
  }
  std::cout << "\n";

  return 0;
}