#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 2; j++)
        {
            cout << "  ";
        }
        for (j = 3; j <= 5; j++)
        {
            cout << "* ";
        }
    }
}