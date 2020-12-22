#include <iostream>
#include "string.h"
using namespace std;

class Persion
{
public:
    //传统的初始化
    Persion(int a, int b, int c)
    {
        m_a = a;
        m_b = b;
        m_c = c;
    }

    

    int m_a;
    int m_b;
    int m_c;
};