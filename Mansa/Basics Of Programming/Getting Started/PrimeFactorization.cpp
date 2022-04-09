#include <iostream>
using namespace std;
int main()
{
    int t, num, n, i, j, flag, z;
    cout << "Enter the number: " << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "2 is Prime Factor" << endl;
    }
    for (z = 3; z < num; z++)
    {
        for (j = 3; j < z; j++)
        {
            {
                if (z % j == 0)
                    flag++;
            }
            if (flag == 0)
            {
                if (num % z == 0)
                {
                    cout << z << " is a prime factor." << endl;
                }
            }
            flag = 0;
        }
    }
}
