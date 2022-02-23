#include <iostream>

// g++ compiler we need iomanip to use std::setw() function
// reference: https://stackoverflow.com/questions/18983745/error-message-setw-is-not-defined-using-g
#include <iomanip> 

using namespace std;

int main () {
    std::cout << std::setw(5) << 2022 << " is today's year" << std::endl;
    std::cout << std::setw(5) << 2 << " is today's month" << std::endl;
    std::cout << std::setw(5) << 22 << " is today's day" << std::endl;
    return 0;
}

