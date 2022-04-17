#include <iostream>
using namespace std;
int main()
{
    int i, j, m, n, a[10][10], x;
    cout << "Enter the rows: " << endl;
    cin >> n;
    cout << "Enter the elements: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the element to be checked: " << endl;
    cin >> x;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == x)
            {
                cout << i << "  " << j;
            }
        }
    }
}