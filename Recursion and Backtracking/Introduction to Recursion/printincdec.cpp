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
int dec(int N)
{
    if (N == 1)
    {
        cout << "1" << endl;
        fun1();
    }
    else
    {
        cout << N << endl;
        return dec(N - 1);
    }
}

int main()
{
    int i, j;
    cout << dec(N);
    cout << endl;
}