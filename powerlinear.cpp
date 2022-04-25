#include <iostream>
using namespace std;

int i = 1, mul = 1;

void power(int x, int n)
{
    if (i <= n)
    {
        mul = mul * x;
        i++;
    }
}

int main()
{
    int x, n;
    cout << "Enter the number: " << endl;
    cin >> x;
    cout << "Enter the power: " << endl;
    cin >> n;
    cout<<power(x, n);
}