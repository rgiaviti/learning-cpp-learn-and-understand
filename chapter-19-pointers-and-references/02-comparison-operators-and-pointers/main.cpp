#include <iostream>

int main()
{
    double a[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double *p;
    double *q;

    p = &a[0];
    q = &a[6];

    while (q >= p)
    {
        std::cout << *q-- << " ";
    }

    return 0;
}