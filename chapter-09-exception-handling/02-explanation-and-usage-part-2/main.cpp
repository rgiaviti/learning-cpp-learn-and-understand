#include <iostream>
#include <cmath>
#include <stdexcept>

double Sqrt(double x)
{
    if (x < 0)
    {
        throw "Negative Number";
    }

    double sroot = std::pow(x, 0.5);
    return sroot;
}

void something(int n)
{
    if (n == 0)
    {
        throw 1;
    }

    if (n > 0 && n < 100)
    {
        throw "bla bla bla";
    }

    if (n == -1)
    {
        throw 'c';
    }

    if (n < -1)
    {
        throw std::domain_error("some exception");
    }
}

int main()
{
    double num;

    std::cout << "Enter number: ";
    std::cin >> num;

    try
    {
        // double square_root = Sqrt(num);
        something(num);
        // std::cout << square_root << std::endl;
    }
    catch (const char *text)
    {
        std::cout << "Catch Pointer Char: " << text << std::endl;
        return 1;
    }
    catch (const int e)
    {
        std::cout << "Catch Int: " << e << std::endl;
        return 1;
    }
    catch (const char c)
    {
        std::cout << "Catch Char: " << c << std::endl;
        return 1;
    }
    catch (std::domain_error *e)
    {
        std::cout << "Domain Error: " << e->what() << std::endl;
        return 1;
    }

    return 0;
}