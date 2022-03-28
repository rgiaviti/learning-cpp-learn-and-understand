#include <iostream>

void Print(int arr[], int len);
void Print(double arr[], int len);

int main()
{
    int arr[] = {2, 3, 4, -5, 1, 1, 0, 4};
    const int len = sizeof arr / sizeof arr[0];

    std:: cout << sizeof arr << " " << sizeof arr[0] << std::endl;

    Print(arr, len);
    return 0;
}

void Print(int arr[], int len)
{
    std::cout << "[";
    for (int i = 0; i < len; ++i)
    {
        std::cout << arr[i] << ", ";
    }

    if (len != 0)
    {
        std::cout << arr[len-1];
    }

    std::cout << "]" << std::endl;
}
