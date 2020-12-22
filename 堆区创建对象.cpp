#include <iostream>
using namespace std;

int *a()
{
    //使用new会在堆区创建对象,返回的就是一个指针类型
    //===注意,b是一个指针变量,是放在栈上的,不过指针指向的数据是放在了堆区======
    int *b = new int(4);
    return b;
}

int main()
{
    int *result = a();
    cout << *result << endl;
    cout << *result << endl;
    cout << *result << endl;

    delete result;
    int *b1 = new int(5);
    int *b2 = new int(6);
    int *b3 = new int(7);
    int *b4 = new int(8);

    cout << *result << endl;
    cout << *result << endl;

    return 0;
}
