#include <iostream>
using namespace std;
int main()
{
    int n, i, j, flag = 0;
    int a[100] = {0};
    cout << "Enter the number of fluctuations: " << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i % j == 0)
            {
                a[i]++;
            }
        }
    }
    cout << "The bulbs left glowing are: " << endl;
    for (i = 0; i < n; i++)
        if (a[i] % 2 != 0)
            cout << i << endl;
}