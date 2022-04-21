#include <iostream>
using namespace std;

int powerLogarithmic(int x, int n)
{
    // write your code here
    if (n == 0)
    {
        return 1;
    }
    int x1 = powerLogarithmic(x, n / 2);
    int x2 = x1 * x1;
    if (n % 2 == 1)
    {
        x2 = x2 * x;
    }
    return x2;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << powerLogarithmic(x, n);
}