#pragma once
#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    //私有数据成员
    string bookName;    //图书名称
    string isbn;        //isbn编号
    string press;       //出版社
    double price;       //价格
    int pageCount;      //页数
    bool isAvailable;   //true：可借 在馆；false：不可借借出

public:
    // 默认构造函数
    Book();
    // 重载构造函数
    Book(string name, string isbn_, string press_, double price_, int pages, bool avail);

    // set 修改，带合法性校验
    void setBookName(string name);
    void setIsbn(string isbn_);
    void setPress(string press_);
    void setPrice(double p);
    void setPageCount(int pages);
    void setAvailable(bool avail);

    // get 获取成员
    string getBookName() const;
    string getIsbn() const;
    string getPress() const;
    double getPrice() const;
    int getPageCount() const;
    bool getAvailable() const;

    //输出图书全部信息
    void showInfo() const;

    //校验isbn简单合法性：不为空
    bool verifyIsbn(string isbn_) const;
};

#endif
