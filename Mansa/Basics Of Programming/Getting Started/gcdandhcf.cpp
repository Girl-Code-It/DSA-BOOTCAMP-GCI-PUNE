#include <iostream>
using namespace std;

void gcd(int a, int b)
{
    int i, gcd;
    for (i = 1; i <= a && i <= b; ++i)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
        cout << "GCD of " << a << " and " << b << " is: " << gcd << endl;
    }
}

int hcf(int a, int b)
{
    int i, mini;
    mini = min(a, b);
    if (a % mini == 0 && b % mini == 0)
    {
        return mini;
    }
    for (i = mini / 2; i >= 2; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
    return 1;
}

int main()
{
    int a, b;
    cout << "Enter first number:" << endl;
    cin >> a;
    cout << "Enter second number:" << endl;
    cin >> b;
    gcd(a, b);
    hcf(a, b);
}