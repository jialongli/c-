#include <iostream>
#include "string.h"
using namespace std;

class user
{
public:
    string name;
    int age;

    user(int age)
    {
        this->age = age;
        // cout << "无参构造函数" << endl;
    }

    //拷贝构造函数
    user(const user &a)
    {
        cout << "拷贝构造函数" << endl;
        this->age = a.age;
    }
    ~user()
    {
        cout << "析构函数:" << this->age << endl;
    }
};

//值传参时,会调用拷贝构造,复制出一个对象
void testCall(user a)
{
    cout << "调用testCall" << endl;
}

user testReturn()
{
    user b(10);
    // cout << "b对象的地址" << &b << endl;
    return b;
}

int main()
{
    // user a(10);
    // testCall(a);
    // user u = testReturn();
    // cout<<u.age<<endl;
    user a(10);
    user b = a;
    return 0;
}