#include <iostream>
#include <cmath>

double Sqrt(double x)
{
    double sroot = std::pow(x, 0.5);
    return sroot;
}

int main()
{
    double num;

    std::cout << "Enter number: ";
    std::cin >> num;

    double square_root = Sqrt(num);
    std::cout << square_root << std::endl;

    return 0;
}