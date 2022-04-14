#include <iostream>
using namespace std;
int main()
{
    int i, j, a[10], n, max, min, val;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    max = a[0];
    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else if (a[i] < min)
        {
            min = a[i];
        }
    }
    val = max - min;
    cout << "Span Of Array: " << val << endl;
}