#include <iostream>

int main()
{
    int a = 0;

    do
    {
        std::cout << "a is " << a << std::endl;
        a++;
    } while (a < 10);

    int enteredNumber;

    do
    {
        std::cout << "Enter a number greater than 10: ";
        std::cin >> enteredNumber;
    } while (enteredNumber <= 10);

    std::cout << "Thanks for entering a number greater than 10" << std::endl;

    return 0;
}