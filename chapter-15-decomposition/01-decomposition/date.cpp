#include "date.h"
#include <iostream>


void Date::SetDate(int d, int m, int y)
{
    this->day = d;
    this->month = m;
    this->year = y;
}

void Date::Print() const
{
    std::cout << this->day << "/" << this->month << this->year << std::endl;
}

void Date::PrintNice() const
{
    std::cout << day << " " << this->GetMonthName() << " " << this->year << std::endl;
}

void Date::SetDay(int day)
{
    if (day < 1 || day > 30)
    {
        throw std::logic_error("day out of range");
    }

    this->day = day;
}

void Date::SetMonth(int month)
{
    if (month < 1 || month > 12)
    {
        throw std::logic_error("month out of range");
    }
    this->month = month;
}

void Date::SetYear(int year)
{
    if (year < 0)
    {
        throw std::logic_error("Year must be positive");
    }
    this->year = year;
}

int Date::GetDay() const
{
    return this->day;
}

int Date::GetMonth() const
{
    return this->month;
}

int Date::GetYear() const
{
    return this->year;
}