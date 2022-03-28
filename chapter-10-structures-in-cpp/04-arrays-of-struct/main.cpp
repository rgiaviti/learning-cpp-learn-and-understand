#include <iostream>

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

int Book::Count;

int main()
{
    Date dt_for_book1 = {10, 10, 2016};
    Date dt_for_book2 = {11, 11, 2011};

    Book book1 = {0, "Name of the book", "Unknown", dt_for_book1};
    
    Book books[100];
    books[0];

    books[2].ID = 10;
    books[14].Author = "Tralalala";

    std::cout << books[2].ID << std::endl;
    std::cout << books[14].Author << std::endl;

    return 0;
}