#include <iostream>
using namespace std;

//占位参数.调用时必须传一个,没啥用
void prin(int a, int)
{
    a = 100;
}

//默认参数
void prin2(int a = 10)
{
    a = 100;
}

void p(int a){

}

void p(int a,int b){

}

void constTest(int* a){

}

void constTest(const int* a){

}

int main()
{
    prin2();
    prin2(10);
    return 0;
}