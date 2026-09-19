#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Book
{
private:
    string bookName;
    string isbn;
    string press;
    double price;
    int pages;
    bool isAvailable;
    bool isIsbnValid;

    bool verifyIsbn(string isbn_)
    {
        for (int i = 0; i < isbn_.size(); i++)
        {
            if (!isdigit(isbn_[i]))
            {
                return false;
            }
        }
        return true;
    }

public:
    Book();
    Book(string name, string isbn_, string press_, double price_, int pages_, bool avail);

    void setBookName(string name);
    void setIsbn(string isbn_);
    void setPress(string press_);
    void setPrice(double price_);
    void setPages(int pages_);
    void setAvailable(bool avail);

    string getBookName();
    string getIsbn();
    string getPress();
    double getPrice();
    int getPages();
    bool getAvailable();

    void showInfo();
};

#endif