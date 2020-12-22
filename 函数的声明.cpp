#include <iostream>
using namespace std;
//函数的声明,如果先写main,后写add,那么执行会报错,找不到这个方法.
//因此函数的声明,就是预先告诉编译器,此函数的存在.避免执行报错
//声明可以写多次,但是定义只能一次
int add(int a,int b);

int main()
{
    add(1,2);
    return 0;
}

int add(int a, int b)
{
    return a + b;
}