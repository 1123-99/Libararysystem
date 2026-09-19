#include "Book.h"
#include<cctype>

//默认构造
Book::Book()
{
    bookName = "未命名图书";
    isbn = "0000000000000";
    press = "未知出版社";
    price = 0.0;
    pageCount = 0;
    isAvailable = true;
}

//重载构造函数
Book::Book(string name, string isbn_, string press_, double price_, int pages, bool avail)
{
    setBookName(name);
    setIsbn(isbn_);
    setPress(press_);
    setPrice(price_);
    setPageCount(pages);
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
    }
    else
    {
        cout << "[警告]isbn不合法，保留旧值！" << endl;
    }
}

void Book::setPress(string press_)
{
    press = press_;
}

void Book::setPrice(double p)
{
    if (p >= 0)
        price = p;
    else
    {
        cout << "[警告]价格不能为负数！" << endl;
        price = 0;
    }
}

void Book::setPageCount(int pages)
{
    if (pages >= 0)
        pageCount = pages;
    else
    {
        cout << "[警告]页数不能负数！" << endl;
        pageCount = 0;
    }
}

void Book::setAvailable(bool avail)
{
    isAvailable = avail;
}

string Book::getBookName() const { return bookName; }
string Book::getIsbn() const { return isbn; }
string Book::getPress() const { return press; }
double Book::getPrice() const { return price; }
int Book::getPageCount() const { return pageCount; }
bool Book::getAvailable() const { return isAvailable; }

void Book::showInfo() const
{
    cout << "=====图书信息=====" << endl;
    cout << "书名：" << bookName << endl;
    cout << "ISBN：" << isbn << endl;
    cout << "出版社：" << press << endl;
    cout << "价格：" << price << " 元" << endl;
    cout << "页数：" << pageCount << endl;
    if (isAvailable)
        cout << "状态：【可借阅】" << endl;
    else
        cout << "状态：【已借出不可借】" << endl;
}

bool Book::verifyIsbn(string isbn_) const
{
    if (isbn_.empty())
        return false;
    for (char ch : isbn_)
    {
        if (!isdigit(ch))
        {
            return false;
        }
    }
    return true;
}
