#include <iostream>
#include "string.h"
using namespace std;

class user
{
public:
    string name;
    int age;
    static int age2;
    static void pri()
    {
        // cout << "" << age; //报错.不能访问非静态成员
        cout << "" << age2;
    }
};

int main()
{
    //对象去调用
    user u;
    u.pri();

    //类名去调用
    user::pri();

    return 0;
}