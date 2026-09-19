#include "book.h"

Book::Book()
{
    bookName = "未命名图书";
    isbn = "0000000000000";
    press = "未知出版社";
    price = 0;
    pages = 0;
    isAvailable = true;
    isIsbnValid = true;
}

Book::Book(string name, string isbn_, string press_, double price_, int pages_, bool avail)
{
    setBookName(name);
    setIsbn(isbn_);
    setPress(press_);
    setPrice(price_);
    setPages(pages_);
    setAvailable(avail);
}

void Book::setBookName(string name)
{
    bookName = name;
}

void Book::setIsbn(string isbn_)
{
    if (verifyIsbn(isbn_))
    {
        isbn = isbn_;
        isIsbnValid = true;
    }
    else
    {
        cout << "[警告]ISBN不合法，保留原值！" << endl;
        isIsbnValid = false;
    }
}

void Book::setPress(string press_)
{
    press = press_;
}

void Book::setPrice(double price_)
{
    if (price_ >= 0)
    {
        price = price_;
    }
    else
    {
        cout << "[警告]价格不能为负数，保留原值！" << endl;
    }
}

void Book::setPages(int pages_)
{
    if (pages_ > 0)
        pages = pages_;
}

void Book::setAvailable(bool avail)
{
    isAvailable = avail;
}

string Book::getBookName()
{
    return bookName;
}

string Book::getIsbn()
{
    return isbn;
}

string Book::getPress()
{
    return press;
}

double Book::getPrice()
{
    return price;
}

int Book::getPages()
{
    return pages;
}

bool Book::getAvailable()
{
    return isAvailable;
}

void Book::showInfo()
{
    cout << "书名：" << bookName << endl;
    cout << "ISBN：" << isbn;
    if (isIsbnValid)
        cout << "（合法）" << endl;
    else
        cout << "（非法）" << endl;
    cout << "出版社：" << press << endl;
    cout << "价格：" << price << endl;
    cout << "页数：" << pages << endl;
    if (isAvailable)
        cout << "状态：可借阅" << endl;
    else
        cout << "状态：不可借阅" << endl;
}