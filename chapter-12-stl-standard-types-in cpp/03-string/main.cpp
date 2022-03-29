#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::string str1 = "Hello World";
    std::cout << str1 << std::endl;

    std::vector<std::string> vec;
    vec.push_back(str1);
    vec.push_back("Another String");

    std::cout << vec.at(1) << std::endl;
    std::cout << str1.size() << std::endl;

    for (char c : str1)
    {
        std::cout << c << std::endl;
    }

    if (str1 == "Hello World")
    {
        std::cout << "YES!" << std::endl;
    }

    return 0;
}
