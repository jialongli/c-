#include <iostream>
using namespace std;

int main()
{
    //定义一个数组
    int a[2][3] = {
        {1, 2, 3},
        {2, 2, 3}};

    //sizeOf是用来获取变量/数据类型所占内存大小(字节)
    cout << "a数组所占空间大小" << sizeof(a) << endl;
    cout << "第1行所占空间大小" << sizeof(a[0]) << endl;
    cout << "第2行所占空间大小" << sizeof(a[1]) << endl;
    cout << "第1行第1列数据所占空间大小" << sizeof(a[0][0]) << endl;

    //直接打印a  就是查看的数组的首地址,是16进制的一个地址
    cout << "a的内存地址(10进制)" << (long long)a << endl;
    cout << "a的第1行内存地址(10进制)" << (long long)a[0] << endl;
    cout << "a的第2行内存地址(10进制)" << (long long)a[1] << endl;
    cout << "a的第1行第一列内存地址(10进制)" << (long long)&a[0][0] << endl;
    cout << "a的第2行第一列内存地址(10进制)" << (long long)&a[1][0] << endl;

    return 0;
}