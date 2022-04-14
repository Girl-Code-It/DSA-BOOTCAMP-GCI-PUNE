#include <iostream>

using namespace std;

int main()
{
    int t, n, i, j, flag;
    cout << "Enter the count: " << endl;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cout << "Enter the number to be checked: " << endl;
        cin >> n;
        if (n == 2)
        {
            cout << "2 is Prime Number" << endl;
        }
        else
        {
            for (j = 2; j < n; j++)
            {
                if (n % j == 0)
                    flag++;
            }
            if (flag == 0)
                cout << "The number " << n << " is prime" << endl;
            else
                cout << "The number " << n << " is not prime" << endl;
            flag = 0;
        }
    }
    return 0;
}