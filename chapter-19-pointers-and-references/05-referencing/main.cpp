#include <iostream>

int main()
{
    int *p;
    int x = 7;
    p = &x;

    std::cout << "This is p = " << p << std::endl;
    std::cout << "This is pointer p = " << *p << std::endl;
    std::cout << "This is x = " << x << std::endl;

    *p = 100;
    std::cout << "This is p = " << p << std::endl;
    std::cout << "This is pointer p = " << *p << std::endl;
    std::cout << "This is x = " << x << std::endl;

    return 0;
}