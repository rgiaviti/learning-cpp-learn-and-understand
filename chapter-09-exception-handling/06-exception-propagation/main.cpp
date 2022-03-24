#include <iostream>
#include <cmath>
#include <stdexcept>

int main()
{
    try
    {
        // some code
    }
    catch (...)
    {
        // some catch and...
        throw; // another exception throw - propagation
    }
    return 0;
}