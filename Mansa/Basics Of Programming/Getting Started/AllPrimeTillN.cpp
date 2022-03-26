#include <iostream>
using namespace std;
int main()
{
    int t, n, i, j, flag;
    cout << "Enter the limit: " << endl;
    cin >> t;
    if (t > 2)
    {
        cout << "Prime Numbers are: " << endl;
        cout << "2" << endl;
        for (i = 3; i <= t; i++)
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                    flag++;
            }
            if (flag == 0)
                cout << i << endl;
            flag = 0;
        }
    }
}