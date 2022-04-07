#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string s;
    std::cout << "Enter some text: ";
    std::getline(std::cin, s);

    int n;

    std::cout << "Enter number n: ";
    std::cin >> n;

    std::ofstream f("test.txt");
    if (!f)
    {
        std::cout << "File does not exists";
        return 1;
    }

    for (int i = 1; i <= n; ++i)
    {
        f << s << std::endl;
    }

    f.close();

    return 0;
}