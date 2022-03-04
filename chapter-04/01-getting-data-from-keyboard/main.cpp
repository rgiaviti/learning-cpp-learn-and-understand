#include <iostream>

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    int squared = number * number;
    std::cout << "Squared " << number << " is " << squared << std::endl;

    return 0;
}