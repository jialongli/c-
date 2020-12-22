#include <iostream>
#include "string.h"
using namespace std;

/**
 * 类所占用的空间大小
 * 1.创建一个空的类, 打印空间占用为 1字节.
 * 为啥还要占一呢?因为啥也没有,但是要有一个地方存储,所以分配了1个字节
 * 2.类中添加一个 int a;  打印空间占用为 4字节
 * 3.类中添加一个 静态变量 static int b; 打印空间为 4字节
 * 4.在类中添加一个 方法. 打印空间 4字节
 **/
class user
{
public:
    string name;
    int age;
    user(string name){
        
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