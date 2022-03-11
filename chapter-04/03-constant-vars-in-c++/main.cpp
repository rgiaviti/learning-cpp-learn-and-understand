#include <iostream>

#define GOLDEN_RATIO 1.618 // macro constants example
// in c++ is a good practice use the "const" for constants instead of macros
// https://stackoverflow.com/questions/6393776/what-is-the-difference-between-a-macro-and-a-const-in-c

int main()
{
    const float pi = 3.14;
    // pi = 12; // pi is immutable, value cannot be changed, so we get a compilation error
    std::cout << "Golden Ratio is " << GOLDEN_RATIO << std::endl;
    std::cout << "PI is " << pi << std::endl;
    return 0;
}
