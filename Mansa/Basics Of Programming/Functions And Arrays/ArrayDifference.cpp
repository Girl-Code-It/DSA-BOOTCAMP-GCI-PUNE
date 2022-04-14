#include <iostream>
using namespace std;
int main()
{
    int i, j, n, m, a[10], b[10], c[10], max;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number of elements: " << endl;
    cin >> m;
    for (i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    if (n > m)
        max = n;
    else
        max = n;
    cout << "Difference: " << endl;
    for (j = 0; j < max; j++)
    {
        c[j] = a[j] - b[j];
        cout << c[j] << endl;
    }
}