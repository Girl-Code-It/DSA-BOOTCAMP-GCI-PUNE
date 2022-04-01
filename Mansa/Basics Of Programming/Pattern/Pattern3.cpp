#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        j = i;
        while (j <= 5 - i)
        {
            cout << " ";
            j++;
        }
        for (k = 5 - i; k <= 5; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}