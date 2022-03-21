#include <iostream>

// [] (param) -> RETURN_TYPE
// {
//    BODY
// }
int main()
{
    auto lambda1 = [](int x) -> int
    {
        return x * x * x;
    };

    int num = 10;
    int result = lambda1(num);
    std::cout << result << std::endl;

    auto lambda2 = [](int x, int y) -> int
    {
        return x * y;
    };

    int result2 = lambda2(num, 2);
    std::cout << result2 << std::endl;

    return 0;
}