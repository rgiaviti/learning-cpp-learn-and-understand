#include <iostream>

void PrintMenu();

int main()
{
    PrintMenu();
    return 0;
}

void PrintMenu() // do not accept or return any value
{
    std::cout << "1. Addition"
              << "\n";

    std::cout << "2. Substraction"
              << "\n";

    std::cout << "3. Multiplication" << std::endl;
}
