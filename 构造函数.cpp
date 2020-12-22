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
        cout << "无参构造函数" << endl;
    }

    user(user &a)
    {
        this->age = a.age;
        cout << "无参构造函数" << endl;
    }

    user(int age)
    {
        this->age = age;
        cout << "无参构造函数" << endl;
    }

    ~user()
    {
        cout << "析构函数:" << this->age << endl;
    }
};

int main()
{
    //1.括号法,调用了默认构造函数.  会分配对象到栈
    user u;
    user u2(10);
    cout << u2.age << endl;
    //2.显示法
    user u3 = user(10);

    // 3.匿名对象,执行完该行后,立马回收
    user(30);
    // 注意事项:不要用拷贝构造函数,创建一个匿名对象,编译器认为你 user u2;那么此时就会报错: 两个u2定义了
    // user(u2);

    // 3.隐式转换法 .
    user u6 = u3; //相当于user u6=user(u3)

    return 0;
}