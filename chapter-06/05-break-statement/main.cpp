#include <iostream>

int main()
{
    int sum = 0;

    for (int i = 0; i <= 40; i++)
    {
        int number;
        std::cout << "Enter a number (or -1 to quit): ";
        std::cin >> number;

        if (number == -1)
        {
            break;
        }

        sum += number;
    }

    std::cout << "Sum is " << sum << std::endl;

    return 0;
}