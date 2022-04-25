#include <iostream>
using namespace std;

int N = 10;
int n = 1;

void fun1();
void fun2();

void fun1()
{
    if (n <= N)
    {
        cout << n << " ";
        n++;
        fun2();
    }
    else
        return;
}

void fun2()
{
    if (n <= N)
    {
        cout << n << " ";
        n++;
        fun1();
    }
    else
        return;
}

int main()
{
    fun1();
    return 0;
}