#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if ((i == 1 && j == 1) || (i == 1 && j == 2) || (i == 1 && j == 3) || (i == 1 && j == 4) || (i == 1 && j == 5) || (i == 5 &&j = 1) || (i == 5 &&j = 2) || (i == 5 &&j = 3) || (i == 5 &&j = 4) || (i == 5 &&j = 5))
            {
                cout << "*";
            }
            else if ((i == 4 &&j = 2) || (i == 3 &&j = 3) || (i == 4 &&j = 2) || (i == 4 &&j = 4))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}