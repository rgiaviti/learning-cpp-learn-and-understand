#include <iostream>

int main()
{
    int x = 10;

    if (x > 6)
    {
        std::cout << "X is greater than 6" << std::endl;
    }
    else
    {
        std::cout << "X is not greater than 6" << std::endl;
    }

    // 0 and only 0 is false
    // everything not zero is true
    if (0 == false)
    {
        std::cout << "0 is false" << std::endl;
    }

    if (10)
    {
        std::cout << "10 is also true" << std::endl;
    }

    if (-4)
    {
        std::cout << "-4 is also true" << std::endl;
    }

    return 0;
}