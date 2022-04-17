#include <iostream>
using namespace std;
int main()
{
    int a[10][10], m, n, i, j;
    cout << "Enter the number of rows: " << endl;
    cin >> m;
    cout << "Enter the number of columns: " << endl;
    cin >> n;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "The 2d array is: " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << a[i][j];
            cout << " ";
        }
        cout << endl;
    }
}