#include <iostream>
using namespace std;
int main()
{
    int i, j, k, a[5][5], b[5][5], c[5][5], d[5][5];
    int(i = 1; i <= 5; i++)
    {
        int(j = 1; j < i; j++)
        {
            if (j == 1)
            {
                cout << "1 ";
                if (i == 1)
                {
                    a[0][0] = 1;
                }
                else if (i == 2)
                {
                    a[1][0] = 1;
                }
                else if (i == 3)
                {
                    a[2][0] = 1;
                }
                else if (i == 4)
                {
                    a[3][0] = 1;
                }
                else if (i == 5)
                {
                    a[4][0] = 1;
                }
            }
        }
        cout << endl;
    }
}