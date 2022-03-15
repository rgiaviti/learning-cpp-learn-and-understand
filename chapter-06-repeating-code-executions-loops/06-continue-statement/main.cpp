#include <iostream>

int main()
{
    int sum = 0;

    for (int i = 0; i <= 40; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }

        std::cout << i << std::endl;
    }

    return 0;
}