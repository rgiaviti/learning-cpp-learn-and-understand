#include <iostream>

class DummyClass
{
private:
    int dummy_attr1;
    char dummy_attr2;

public:
    DummyClass() : dummy_attr1(0), dummy_attr2('E')
    {
        std::cout << "Hello! Constructor Here!" << std::endl;
    }

    DummyClass(int param) : dummy_attr1(1), dummy_attr2('P')
    {
        this->dummy_attr1 = param;
        std::cout << "2nd constructor - " << param << std::endl;
    }

    void Print() const
    {
        std::cout << "dummy_attr1 = " << this->dummy_attr1 << std::endl;
        std::cout << "dummy_attr2 = " << this->dummy_attr2 << std::endl;
    }

    friend int Add(DummyClass dc1, DummyClass dc2)
    {
        return dc1.dummy_attr1 + dc2.dummy_attr1;
    }

    ~DummyClass()
    {
        std::cout << "Destructor Called" << std::endl;
    }
};


int main()
{
    DummyClass dc1(2), dc2(3);
    std::cout << Add(dc1, dc2) << std::endl;
    return 0;
}