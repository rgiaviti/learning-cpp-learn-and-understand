#include <iostream>
#include <string>

struct Date
{
    int day;
    int month;
    int year;
};
struct Book
{
    int ID;
    std::string Name;
    std::string Author;
    Date Published;
    static int Count;
};

int Book::Count; // need allocate memory space for static

int main()
{
    Book b1, b2;
    b1.ID = 0;
    b1.Name = "Random Name";
    b1.Author = "Random Guy";
    b1.Count = 1;

    std::cout << b2.Count << std::endl;

    return 0;
}