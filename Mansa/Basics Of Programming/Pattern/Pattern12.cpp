#include <iostream>
using namespace std;
int main()
{
    int a[100], i, j, k, n;
    a[0] = 0;
    a[i] = 1;
    for (i = 2; i <= 100; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << "Enter the rows:" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            for (k = 0; k < 100; k++)
            {
                cout << a[k] << " ";
                break;
            }
        }
        cout << endl;
    }
}