#include <iostream>

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};

    for (int i : arr1)
    {
        std::cout << i << std::endl;
    }

    for (auto i : arr1)
    {
        std::cout << i << std::endl;
    }

    return 0;
}