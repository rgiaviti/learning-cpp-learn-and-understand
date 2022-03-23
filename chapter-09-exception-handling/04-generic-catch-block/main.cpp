#include <iostream>
#include <stdexcept>

void trala(int n)
{
    if (n == 0)
    {
        throw 1;
    }
    if (n == -1)
    {
        throw 'c';
    }
}

int main()
{
    int n;
    std::cout << "Enter Number: ";
    std::cin >> n;

    try
    {
        trala(n);
    }
    catch (...)
    {
        std::cout << "Error" << std::endl;
    }
}