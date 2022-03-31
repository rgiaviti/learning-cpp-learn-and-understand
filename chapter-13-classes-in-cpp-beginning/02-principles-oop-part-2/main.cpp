#include <iostream>

class Date
{
private:
    int day;
    int month;
    int year;

public:
    void setDate(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void SetDay(int day)
    {
        this->day = day;
    }

    void SetMonth(int month)
    {
        this->month = month;
    }

    void SetYear(int year)
    {
        this->year = year;
    }

    int GetDay() const // const not allow to change the object
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

    void showDate() const
    {
        std::cout << this->day << "/" << this->month << "/" << this->year << std::endl;
    }
};

int main()
{
    Date dt;
    dt.setDate(31, 3, 2022);
    dt.showDate();

    dt.SetDay(15);
    dt.SetMonth(12);
    dt.SetYear(2022);
    dt.showDate();
    return 0;
}