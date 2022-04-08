#include <iostream>

using namespace std;

int main()
{
    int *p;
    int x;
    p = &x;

    std::cout << "Hello World" << std::endl;
    std::cout << p << std::endl; // show memory address
    
    return 0;
}