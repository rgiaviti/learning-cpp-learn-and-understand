#include <iostream>
#include <cmath>
#include <stdexcept>

int main()
{
    try
    {
        // some code
        try
        {
            // another code
        }
        catch (...)
        {
            // another catch code
        }
    }
    catch (...)
    {
        // some catch
    }
    return 0;
}