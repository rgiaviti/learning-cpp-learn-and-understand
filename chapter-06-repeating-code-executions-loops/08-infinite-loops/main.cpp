#include <iostream>

int main()
{
    int sum = 0;

    for (int i = 0;; i++)
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

    while (true)
    {
        // infinite - get out using break statement;
    }

    do
    {
        // infinite - get out using break statement;
    } while (true);

    std::cout << "Sum is " << sum << std::endl;

    return 0;
}