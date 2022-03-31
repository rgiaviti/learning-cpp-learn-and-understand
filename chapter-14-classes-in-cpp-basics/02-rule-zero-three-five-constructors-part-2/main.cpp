#include <iostream>

class DummyClass
{

    int dummy_attr1;
    char dummy_attr2;

public:
    DummyClass() : dummy_attr1(0), dummy_attr2('E')
    {
        std::cout << "Hello! Constructor Here!" << std::endl;
    }

    DummyClass(int param) : dummy_attr1(1), dummy_attr2('P')
    {
        std::cout << "2nd constructor - " << param << std::endl;
    }

    void Print() const
    {
        std::cout << "dummy_attr1 = " << this->dummy_attr1 << std::endl;
        std::cout << "dummy_attr2 = " << this->dummy_attr2 << std::endl;
    }
};

int main()
{
    DummyClass dummy; // call the constructor
    dummy.Print();

    DummyClass dummy2(7); // call the constructor with parameter
    dummy2.Print();

    return 0;
}