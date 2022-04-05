#ifndef DATE_H
#define DATE_H

#include <string>

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
    void SetDate(int day, int month, int year);
    void Print() const;
    void PrintNice() const;
    void SetDay(int day);
    void SetMonth(int month);
    void SetYear(int year);
    int GetDay() const;
    int GetMonth() const;
    int GetYear() const;
};

#endif // DATE_H