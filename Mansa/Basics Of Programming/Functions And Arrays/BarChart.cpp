#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n, a[10], max;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    cout << "Values of Bar Chart: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
            max = a[0];
        else if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (i = 0; i < max; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = a[i]; k < a[n]; k++)
            {
                cout << "*";
            }
            cout << " ";
        }
        cout << endl;
    }
}