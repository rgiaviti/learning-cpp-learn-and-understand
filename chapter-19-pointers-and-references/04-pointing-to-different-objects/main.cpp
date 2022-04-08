#include <iostream>

int main()
{
    double x = 3.14;
    double y = 2.71;
    
    double *p = &x;
    std::cout << "This is p for x = " << *p << std::endl;

    p = &y;
    std::cout << "This is p for y = " << *p << std::endl;

    return 0;
}