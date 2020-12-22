#include <iostream>
using namespace std;

void prin(int &a)
{
    a = 100;
}

void constPrint(const int &a){
       a = 100;
}

int main()
{
    int b = 10;
    prin(b);
    cout << "b当前值:" << b << endl;
    return 0;
}