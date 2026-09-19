#include <iostream>
#include "book.h"
#include <cstdlib>
using namespace std;

int main()
{
    Book b1;
    cout << "对象b1（默认构造）：" << endl;
    b1.showInfo();

    cout << "\n------------------------------------\n";

    Book b2("C++面向对象程序设计", "9787115547471", "人民邮电出版社", 59.8, 380, true);
    cout << "对象b2（重载构造）：" << endl;
    b2.showInfo();

    cout << "\n------------------------------------\n";

    cout << "测试修改b2的价格为负数(-100):" << endl;
    b2.setPrice(-100);
    cout << "测试修改b2状态为不可借：" << endl;
    b2.setAvailable(false);

    cout << "\n修改之后b2信息：" << endl;
    b2.showInfo();

    cout << "\n------------------------------------\n";

    cout << "b2书名：" << b2.getBookName() << endl;
    cout << "b2 ISBN：" << b2.getIsbn() << endl;

    cout << "\n测试设置非法ISBN：" << endl;
    b2.setIsbn("123abc456");
    b2.showInfo();

    system("pause");
    return 0;
}