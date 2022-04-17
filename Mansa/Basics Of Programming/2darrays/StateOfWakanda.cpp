#include <iostream>
using namespace std;
int main()
{
    int i, j, m, n, a[10][10], k = 1;
    cout << "Enter the rows: " << endl;
    cin >> m;
    cout << "Enter the columns: " << endl;
    cin >> n;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = k;
            k++;
        }
    }
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            cout << a[i][j];
            cout << " ";
        }
    }
}