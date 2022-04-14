#include <iostream>
using namespace std;
int main()
{
    int i, k, a[10], n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n / 2; i++)
    {
        k = a[n - i];
        a[n - i] = a[i];
        a[i] = k;
    }
    cout << "The reversed array is: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}