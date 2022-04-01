#include <iostream>
#include <string>
#include <stdexcept>

class Date
{
    int day;
    int month;
    int year;
    std::string GetMonthName() const
    {
        static std::string months[] =
            {
                "January",
                "February",
                "March",
                "April",
                "May",
                "June",
                "July",
                "August",
                "September",
                "October",
                "November",
                "December"};

        return months[this->month - 1];
    }

public:
    Date(int day, int month, int year) // Constructor
    {
        this->SetDate(day, month, year);
    }

    ~Date() // This is a destructor
    {
        std::cout << "Destructing Date" << std::endl;
    }

    void SetDate(int day, int month, int year)
    {
        this->SetDay(day);
        this->SetMonth(month);
        this->SetYear(year);
    }

    void Print() const
    {
        std::cout << this->month << "/" << this->day << "/" << this->year << std::endl;
    }

    void PrintNice() const
    {
        std::cout << day << " " << this->GetMonthName() << " " << this->year << std::endl;
    }

    void SetDay(int day)
    {
        if (day < 1 || day > 30)
        {
            throw std::logic_error("day out of range");
        }

        this->day = day;
    }

    void SetMonth(int month)
    {
        if (month < 1 || month > 12)
        {
            throw std::logic_error("month out of range");
        }
        this->month = month;
    }

    void SetYear(int year)
    {
        if (year < 0)
        {
            throw std::logic_error("Year must be positive");
        }
        this->year = year;
    }

    int GetDay() const
    {
        return this->day;
    }

    int GetMonth() const
    {
        return this->month;
    }

    int GetYear() const
    {
        return this->year;
    }
};

int main()
{
    Date dt1(1, 1, 2014);
    Date dt2(dt1);

    dt1.PrintNice();
    dt2.PrintNice();
    return 0;
}