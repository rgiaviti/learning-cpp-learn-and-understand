#include <iostream>

struct Date
{
    int day;
    int month;
    int year;
};

int main()
{
    Date dt;
    std::cout << "Enter Month: ";
    std::cin >> dt.month;

    std::cout << "Enter Day: ";
    std::cin >> dt.day;

    std::cout << "Enter Year: ";
    std::cin >> dt.year;

    std::cout << dt.day << "/" << dt.month << "/" << dt.year << std::endl;
    return 0;
}