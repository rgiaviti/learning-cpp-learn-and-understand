#include <iostream>

int main()
{

    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int number;
        std::cout << "Enter " << i << ". number: ";
        std::cin >> number;
        sum = sum + number;
    }

    std::cout << "The Sum of Number is: " << sum << std::endl;

    return 0;
}