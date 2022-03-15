#include <iostream>

int main()
{
    int x = 2, y = 3;

    if (x > 4, y > 1)
    { // bad practice
        std::cout << "Something" << std::endl;
    }

    return 0;
}