// 1. You've to print first n fibonacci numbers.
// 2. Take as input "n", the count of fibonacci numbers to print.
// 3. Print first n fibonacci numbers.

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    // write your code here
    int t1 = 0, t2 = 1, nterm = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            cout << t1 << "\n";
            continue;
        }
        if (i == 2)
        {
            cout << t2 << "\n";
            continue;
        }
        nterm = t1 + t2;
        t1 = t2;
        t2 = nterm;
        cout << nterm << "\n";
    }
    return 0;
}