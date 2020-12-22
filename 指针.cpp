#include <iostream>
using namespace std;
void pointAndArray()
{
    int a[3] = {1, 2, 3};
    int *p = a;
    cout << "第一个元素:" << *p << endl;
    p++;
    cout << "第2个元素:" << *p << endl;
}

void swap(int *a, int *b)
{
    cout << "形参a:" << a << endl;
    cout << "形参b:" << b << endl;
    cout << "形参a的地址呢?:" << &a << endl;
    cout << "形参b的地址呢?:" << &b << endl;
}

int main()
{
    int a = 12;
    int b = 13;
    int *pa = &a;
    int *pb = &b;
    cout << "实参pa:" << pa << endl;
    cout << "实参pb:" << pb << endl;
    cout << "实参pa的地址呢?:" << &pa << endl;
    cout << "实参pb的地址呢?:" << &pb << endl;
    swap(pa, pb);
    // pointAndArray();
    // // int a=4;
    // // int * p=&a;
    // // int c=*p;
    // // cout<<a<<endl;
    // // //打印的是指针地址.本来是16进制,转换为10进制了
    // // cout<<(long long)p<<endl;
    // // cout<<c<<endl;

    // // cout<<"指针所占空间:"<<sizeof(p)<<endl;

    // //指针常量
    // int m = 10;
    // int n = 20;
    // const int *q = &m;
    // //指针指向的值,不可以修改
    // *q = 20;
    // //指针可以修改
    // q = &n;
}
