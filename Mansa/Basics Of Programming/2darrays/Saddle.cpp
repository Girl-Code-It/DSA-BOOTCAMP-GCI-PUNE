#include <iostream>
using namespace std;
int main()
{
    int i, j, m, n, a[10][10], max1, max2;
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
    max1 = 0;
    max2 = 1;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] > max1)
            {
                max1 = a[i][j];
            }
            else if (a[i][j] < max2)
            {
                max2 = a[i][j];
            }
        }
        cout << max1 << "   " << max2;
    }
}