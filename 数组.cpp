#include <iostream>
using namespace std;

int main()
{
    //定义一个数组
    int a[5] = {1, 2, 3, 4};

    //sizeOf是用来获取变量/数据类型所占内存大小(字节)

    cout << "a数组所占空间大小" << sizeof(a) << endl;
    cout << "a所占空间大小" << sizeof(a[0]) << endl;

    //直接打印a  就是查看的数组的首地址,是16进制的一个地址
    cout << "a的内存地址(16进制)" << a << endl;
    cout << "a的内存地址(10进制)" << (long long)a << endl;

    //打印数组a第一个元素的地址
    cout << "a[0]的内存地址(16进制)" << &a[0] << endl;
    cout << "a[0]的内存地址(10进制)" <<(long long) &a[0] << endl;

    return 0;
}