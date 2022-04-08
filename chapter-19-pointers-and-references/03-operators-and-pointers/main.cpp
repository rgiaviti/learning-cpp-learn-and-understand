#include <iostream>

int main()
{
    double a[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double *p;
    p = (&a[0]);

    for (int i = 0; i < 7; i++)
    {
        std::cout << *p++ << " ";
    }

    std::cout << std::endl
              << *p << std::endl;

    return 0;
}