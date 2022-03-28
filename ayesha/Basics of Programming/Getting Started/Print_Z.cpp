// You are required to print a 'z' of size 5 using '*'.

#include <iostream>
using namespace std;
int main()
{
    int i, n = 5, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || i + j == n - 1 || i == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
