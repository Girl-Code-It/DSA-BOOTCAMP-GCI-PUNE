// 1. You are given a number n.
// 2. You've to create a pattern of * and separated by tab as shown in output format.


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    // write your code here
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "*\t";
        }
        cout << "\n";
    }
    return 0;
}