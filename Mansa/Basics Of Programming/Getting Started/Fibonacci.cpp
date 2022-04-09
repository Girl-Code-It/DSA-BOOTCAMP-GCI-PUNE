#include <iostream>
using namespace std;

void fib(int n)
{
    int f1 = 0, f2 = 1, i;
    if (n < 1)
        return;

    cout << f1 << " ";
    for (i = 1; i < n; i++)
    {
        cout << f2 << " ";
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}

int main()
{
    int n;
    cout << "Enter the limit:" << endl;
    cin >> n;
    fib(n);
    return 0;
}
