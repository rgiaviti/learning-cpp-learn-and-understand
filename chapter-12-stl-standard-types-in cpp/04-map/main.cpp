#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<std::string, float> salaries;
    salaries["John"] = 441.14f;
    salaries["Karen"] = 5744.10f;
    salaries["Malcom"] = 3241.00f;

    std::cout << salaries.at("John") << std::endl;
    std::cout << salaries.size() << std::endl;

    for (auto const &salary : salaries)
    {
        std::cout << salary.first // string (key)
                  << ':'
                  << salary.second // string's value
                  << std::endl;
    }
}