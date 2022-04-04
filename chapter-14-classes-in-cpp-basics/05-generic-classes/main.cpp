#include <iostream>

template <typename TYPE>
class DummyGeneric
{
    TYPE attribute;

public:
    DummyGeneric(TYPE param) : attribute(param)
    {
    }

    TYPE GetAttribute() const
    {
        return this->attribute;
    }

    void SetAttribute(TYPE a)
    {
        this->attribute = a;
    }
};

int main()
{
    DummyGeneric<std::string> dg1("Hey");
    DummyGeneric<int> dg2(12);
    DummyGeneric<char> dg3('s');

    return 0;
}