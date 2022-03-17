#include <iostream>

int main()
{
    char str[6] = {'H', 'E', 'L', 'L', 'O', '\0'};
    std::cout << str << std::endl;
    for (int i = 0; i < 6; ++i) {
        std::cout << str[i];
    }
    return 0;
}