#include <iostream>
using namespace std;
int main()
{
    int i, j, n, num, a[100];
    cout << "Enter the index: " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number to be checked: " << endl;
    cin >> num;
    for (i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            cout << i << endl;
        }
    }
}