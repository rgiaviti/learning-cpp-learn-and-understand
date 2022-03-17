#include <iostream>

// User enters numbers in a array of 10 elements
// we need to find the min value and max value
// print on the screen both
int main()
{
    const int ARRAY_SIZE = 10;
    int values[ARRAY_SIZE] = {};
    int min, max;

    std::cout << "Let's get your " << ARRAY_SIZE << " numbers" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << i + 1 << ". Enter a Number: ";
        std::cin >> values[i];

        if (i == 0)
        {
            min = values[i];
            max = values[i];
        }
        else
        {
            if (min > values[i])
            {
                min = values[i];
            }
            if (max < values[i])
            {
                max = values[i];
            }
        }
    }

    std::cout << "Min Value: " << min << std::endl;
    std::cout << "Max Value: " << max << std::endl;
}