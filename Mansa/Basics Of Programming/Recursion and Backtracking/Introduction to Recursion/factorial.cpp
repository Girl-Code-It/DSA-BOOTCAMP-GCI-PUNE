#include <iostream>
using namespace std;

int facto = 1;

int fact(int n)
{
    if (n == 1)
    {
        return facto;
    }
    else
    {
        facto = facto * n;
        return fact(n - 1);
    }
}

int main()
{
    int i, j, n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "Factorial: " << fact(n);
    cout << endl;
}