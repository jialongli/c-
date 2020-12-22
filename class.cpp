#include <iostream>
#include "string.h"
using namespace std;

class user
{
public:
    string name;
    int age;

    user()
    {
        cout << "构造函数" << endl;
    }

    ~user()
    {
        cout << "析构函数" << endl;
    }
};

void test()
{
    //注意new是会在堆上创建对象,并且返回指针的.
    user *a = new user();
}

void test2()
{
    //注意new是会在堆上创建对象,并且返回指针的.
    user a;
    int age = a.age;
    cout << age << endl;
}

int main()
{
    test();
    test2();
    return 0;
}