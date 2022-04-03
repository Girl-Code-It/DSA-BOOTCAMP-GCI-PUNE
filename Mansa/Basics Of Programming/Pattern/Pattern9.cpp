#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if ((i == 1 && j == 1) || (i == 1 && j == 5))
                cout << "* ";
            else if ((i == 2 && j == 2) || (i == 2 && j == 4))
                cout << "* ";
            else if (i == 3 && j == 3)
                cout << "* ";
            else if ((i == 4 && j == 2) || (i == 4 && j == 4))
                cout << "* ";
            if ((i == 5 && j == 1) || (i == 5 && j == 5))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}