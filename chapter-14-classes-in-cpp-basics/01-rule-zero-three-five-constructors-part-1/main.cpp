#include <iostream>

class DummyClass
{
public:
    DummyClass()
    {
        std::cout << "Hello! Constructor Here!" << std::endl;
    }
};

int main()
{
    DummyClass dummy; // call the constructor
    return 0;
}