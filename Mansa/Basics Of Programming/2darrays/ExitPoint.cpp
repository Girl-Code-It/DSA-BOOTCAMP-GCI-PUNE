#include <iostream>
using namespace std;
int main()
{
    int i, j, a[10][10], m, n;
    cout << "Enter the rows: " << endl;
    cin >> m;
    cout << "Enter the columns: " << endl;
    cin >> n;
    cout << "Enter the elements: " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    i = 0;
    for (j = 0; j < n; j++)
    {
        if (a[i][j] == 0)
        {
            i++;
        }
        else
        {
            j = j;
        }
    }
    cout << "End point: " << i;
}