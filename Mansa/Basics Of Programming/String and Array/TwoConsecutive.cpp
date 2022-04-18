#include <iostream>
using namespace std;

void computeFibonacci()
{
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i < 100005; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

int countString(string str)
{
    int ans = 1;
    int cnt = 1;

    for (int i = 1; str[i]; i++)
    {
        if (str[i] == str[i - 1])
        {
            cnt++;
        }
        else
        {
            ans = ans * fib[cnt];
            cnt = 1;
        }
    }
    ans = ans * fib[cnt];
    return ans;
}