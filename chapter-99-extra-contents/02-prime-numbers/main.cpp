#include <iostream>

using namespace std;

int main()
{
  int max = 1000;
  bool isPrime;

  std::cout << "Prime numbers until " << max << std::endl;

  for (int i = 2; i <= max; i++)
  {
    isPrime = true;

    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        isPrime = false;
        break;
      }
    }

    if (isPrime)
    {
      std::cout << i << " - ";
    }
  }

  return 0;
}