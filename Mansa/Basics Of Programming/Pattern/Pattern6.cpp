#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    for (i = 1; i <= 3; i++)
    {
        for (j = 3; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = 2; i <= 3; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}