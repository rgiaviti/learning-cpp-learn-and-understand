#include <iostream>
#include <functional>
#include <cmath>

double Calculate(std::function<double(double)> f, double x);
double TestFun1(double x);
double TestFun2(double x);

int main()
{
    double a = Calculate(TestFun1, 5);
    double b = Calculate(TestFun2, 10);

    std::function<int(int, int) > f = [] (int a, int b) -> int {return a * b; };

    int res = f(10, 20);
    return 0;
}

double Calculate(std::function<double(double)> my_func, double x)
{
    double y = my_func(x) * my_func(x) * my_func(x);
    return y;
}

double TestFun1(double x)
{
    return x * x;
}

double TestFun2(double x)
{
    return x * x - 2 * x +1;
}