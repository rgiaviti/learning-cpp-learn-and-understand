#include <iostream>

void Print(const int n);
int GetLastDigit(const int n);

int main()
{
    int n;
    std::cout << "Enter a num: ";
    std::cin >> n;

    int last_digit = GetLastDigit(n);
    std::cout << "Last Digit of " << n << " is " << last_digit << std::endl;
    return 0;
}

void Print(const int n)
{
    for (int i = 1; i <= n; ++i)
    {
        std::cout << "*";
    }

    std::cout << std::endl;
}

int GetLastDigit(const int n)
{
    return n % 10;
}