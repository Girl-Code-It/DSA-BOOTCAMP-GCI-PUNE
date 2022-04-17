#include <iostream>
using namespace std;
int main()
{
    int i, j, m, n, x, y, a[10][10], b[10][10], c[10][10], mul = 1;
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
    cout << "Enter the number of rows: " << endl;
    cin >> x;
    cout << "Enter the number of columns: " << endl;
    cin >> y;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "Array after multiplication: " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
            cout << c[i][j];
        }
        cout << endl;
    }
}