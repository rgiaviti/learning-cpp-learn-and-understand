#include <iostream>

template <typename TYPE>
void Print(TYPE arr[], int len)
{
    std::cout << "[";
    for (int i = 0; i < len - 1; ++i)
    {
        std::cout << arr[i] << ", ";
    }

    if (len != 0)
    {
        std::cout << arr[len - 1];
    }

    std::cout << "]" << std::endl;
}

int main()
{
    int arr[] = {2, 3, 4, -5, 1, 1, 0, 4};
    double arr2[] = {2, 3, 1.2, -2, 2.344, 12.3, -2};
    float arr3[] = {2, 3, 12, 12.2, 948.3, -1, -2};
    char arr4[] = {'q', 'a', 't', 'h'};
    const int len = sizeof arr / sizeof arr[0];

    std::cout << sizeof arr << " " << sizeof arr[0] << std::endl;

    Print(arr, 8);
    Print(arr2, 7);
    Print(arr3, 7);
    Print(arr4, 4);
    return 0;
}
