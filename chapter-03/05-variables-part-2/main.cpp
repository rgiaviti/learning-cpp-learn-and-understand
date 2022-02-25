#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a= 12, b = 47; // declaring and initilizing multiple vars in same line
    int year = 2022, month = 2, day = 25; // another example

    std::cout << "Today is "
              << std::setw(2) << std::setfill('0') << day
              << "."
              << std::setw(2) << std::setfill('0') << month
              << "."
              << year
              << std::endl;
    return 0;
}