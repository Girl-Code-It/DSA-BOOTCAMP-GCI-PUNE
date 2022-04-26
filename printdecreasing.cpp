#include <iostream>
using namespace std;

int dec(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        cout << n << endl;
        return dec(n - 1);
    }
}

int main()
{
    int i, j, n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << dec(n);
    cout << endl;
}