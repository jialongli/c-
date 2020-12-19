#include <iostream>
using namespace std;

//!!!!!注意这里不要加分号,不然会意想不到的错误
//常量
#define Day 7

int main()
{
    //Day = 9;   修改会报错
    cout << Day << "dsa'f" << endl;
    cout << "asdfas";

//
    const int month = 12;
    cout << month ;
    return 0;
}
