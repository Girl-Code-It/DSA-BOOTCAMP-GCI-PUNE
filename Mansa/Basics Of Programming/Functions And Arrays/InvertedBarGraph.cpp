#include <iostream>
using namespace std;
int main()
{
    int i, j, n, a[10], max;
    cout << "Enter the index: " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (i = 1; i <= max; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (i <= a[j])
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}