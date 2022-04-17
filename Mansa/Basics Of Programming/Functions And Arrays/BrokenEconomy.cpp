#include <iostream>
using namespace std;
int main()
{
    int i, j, m, n, f = 0, g = 0, num, num1;
    int a[8] = {5, 10, 15, 22, 33, 40, 42, 55};
    int b[5] = {7, 14, 18, 25, 30};
    cout << "Enter the element for array 1: " << endl;
    cin >> m;
    cout << "Enter the element for array 2: " << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        if (a[i] == m)
        {
            cout << m;
            f = 0;
            break;
        }
        else
            f++;
    }
    for (j = 0; j < m; j++)
    {
        if (b[j] == m)
        {
            cout << n;
            g = 0;
            break;
        }
        else
            g++;
    }
    if (f != 0 || g != 0)
    {
        for (i = 1; i < 12; i--)
        {
            num = m - i;
            for (j = 0; j < 8; j++)
            {
                if (a[i] == num)
                {
                    cout << num;
                    break;
                }
            }
            for (j = 0; j < 5; j++)
            {
                num1 = n - i;
                if (b[i] == num1)
                {
                    cout << num1;
                    break;
                }
            }
        }
        for (i = 1; i < 12; i--)
        {
            num = m + i;
            for (j = 0; j < 8; j++)
            {
                if (a[i] == num)
                {
                    cout << num;
                    break;
                }
            }
            for (j = 0; j < 5; j++)
            {
                num1 = n + i;
                if (b[i] == num1)
                {
                    cout << num1;
                    break;
                }
            }
        }
    }
}
