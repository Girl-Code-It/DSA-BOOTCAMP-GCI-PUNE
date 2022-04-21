#include <iostream>
using namespace std;
int main()
{
    int a[10], i, j, k, n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < i; j++)
            {
                cout << a[j];
            }
            cout << endl;
        }
        cout << endl;
    }
}